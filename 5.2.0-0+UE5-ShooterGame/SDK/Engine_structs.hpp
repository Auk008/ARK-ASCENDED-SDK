#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETextGender : uint8
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3,
};

enum class EFormatArgumentType : uint8
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6,
};

enum class EAnimDataModelNotifyType : uint8
{
	BracketOpened                  = 0,
	BracketClosed                  = 1,
	TrackAdded                     = 2,
	TrackChanged                   = 3,
	TrackRemoved                   = 4,
	SequenceLengthChanged          = 5,
	FrameRateChanged               = 6,
	CurveAdded                     = 7,
	CurveChanged                   = 8,
	CurveRemoved                   = 9,
	CurveFlagsChanged              = 10,
	CurveRenamed                   = 11,
	CurveScaled                    = 12,
	CurveColorChanged              = 13,
	AttributeAdded                 = 14,
	AttributeRemoved               = 15,
	AttributeChanged               = 16,
	Populated                      = 17,
	Reset                          = 18,
	Invalid                        = 19,
	EAnimDataModelNotifyType_MAX   = 20,
};

enum class EMovementMode : uint8
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7,
};

enum class EAudioComponentPlayState : uint8
{
	Playing                        = 0,
	Stopped                        = 1,
	Paused                         = 2,
	FadingIn                       = 3,
	FadingOut                      = 4,
	Count                          = 5,
	EAudioComponentPlayState_MAX   = 6,
};

enum class EDataLayerRuntimeState : uint8
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	EDataLayerRuntimeState_MAX     = 3,
};

enum class EQuartzCommandDelegateSubType : uint8
{
	CommandOnFailedToQueue         = 0,
	CommandOnQueued                = 1,
	CommandOnCanceled              = 2,
	CommandOnAboutToStart          = 3,
	CommandOnStarted               = 4,
	Count                          = 5,
	EQuartzCommandDelegateSubType_MAX = 6,
};

enum class EQuartzCommandQuantization : uint8
{
	Bar                            = 0,
	Beat                           = 1,
	ThirtySecondNote               = 2,
	SixteenthNote                  = 3,
	EighthNote                     = 4,
	QuarterNote                    = 5,
	HalfNote                       = 6,
	WholeNote                      = 7,
	DottedSixteenthNote            = 8,
	DottedEighthNote               = 9,
	DottedQuarterNote              = 10,
	DottedHalfNote                 = 11,
	DottedWholeNote                = 12,
	SixteenthNoteTriplet           = 13,
	EighthNoteTriplet              = 14,
	QuarterNoteTriplet             = 15,
	HalfNoteTriplet                = 16,
	Tick                           = 17,
	Count                          = 18,
	None                           = 19,
	EQuartzCommandQuantization_MAX = 20,
};

enum class EPlatformInterfaceDataType : uint8
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6,
};

enum class EEndPlayReason : uint8
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5,
};

enum class ETickingGroup : uint8
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8,
};

enum class EComponentCreationMethod : uint8
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4,
};

enum class ETemperatureSeverityType : uint8
{
	Unknown                        = 0,
	Good                           = 1,
	Bad                            = 2,
	Serious                        = 3,
	Critical                       = 4,
	NumSeverities                  = 5,
	ETemperatureSeverityType_MAX   = 6,
};

enum class EPlaneConstraintAxisSetting : uint8
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EInterpToBehaviourType : uint8
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4,
};

enum class ETeleportType : uint8
{
	None                           = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	ETeleportType_MAX              = 3,
};

enum class EObjectTypeQuery : uint8
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,
};

enum class EDrawDebugTrace : uint8
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4,
};

enum class ETraceTypeQuery : uint8
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,
};

enum class ENetworkModeResult : uint8
{
	Yes                            = 0,
	No                             = 1,
	ENetworkModeResult_MAX         = 2,
};

enum class EMoveComponentAction : uint8
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3,
};

enum class EQuitPreference : uint8
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2,
};

enum class ENetModeBP : uint8
{
	Standalone                     = 0,
	DedicatedServer                = 1,
	ListenServer                   = 2,
	Client                         = 3,
	ENetModeBP_MAX                 = 4,
};

enum class ETravelFailure : uint8
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12,
};

enum class EScreenOrientation : uint8
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	PortraitSensor                 = 7,
	LandscapeSensor                = 8,
	FullSensor                     = 9,
	EScreenOrientation_MAX         = 10,
};

enum class EApplicationState : uint8
{
	Unknown                        = 0,
	Inactive                       = 1,
	Background                     = 2,
	Active                         = 3,
	EApplicationState_MAX          = 4,
};

enum class EComponentPhysicsStateChange : uint8
{
	Created                        = 0,
	Destroyed                      = 1,
	EComponentPhysicsStateChange_MAX = 2,
};

enum class EMouseLockMode : uint8
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	LockInFullscreen               = 3,
	EMouseLockMode_MAX             = 4,
};

enum class EWindowTitleBarMode : uint8
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2,
};

enum class EInputEvent : uint8
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,
};

enum class ERelativeTransformSpace : uint8
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4,
};

enum class EAttachLocation : uint8
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4,
};

enum class EAttachmentRule : uint8
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	KeepWorldLegacy                = 3,
	EAttachmentRule_MAX            = 4,
};

enum class EDetachmentRule : uint8
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2,
};

enum class EComponentMobility : uint8
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3,
};

enum class EDetailMode : uint8
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,
};

enum class ECollisionEnabled : uint8
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ProbeOnly                      = 4,
	QueryAndProbe                  = 5,
	ECollisionEnabled_MAX          = 6,
};

enum class ECollisionChannel : uint8
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Visibility                 = 2,
	ECC_PhysicsBody                = 3,
	ECC_Destructible               = 4,
	ECC_GameTraceChannel1          = 5,
	ECC_GameTraceChannel2          = 6,
	ECC_GameTraceChannel3          = 7,
	ECC_GameTraceChannel4          = 8,
	ECC_GameTraceChannel5          = 9,
	ECC_GameTraceChannel6          = 10,
	ECC_GameTraceChannel7          = 11,
	ECC_GameTraceChannel8          = 12,
	ECC_GameTraceChannel9          = 13,
	ECC_GameTraceChannel10         = 14,
	ECC_GameTraceChannel11         = 15,
	ECC_GameTraceChannel12         = 16,
	ECC_GameTraceChannel13         = 17,
	ECC_GameTraceChannel14         = 18,
	ECC_GameTraceChannel15         = 19,
	ECC_GameTraceChannel16         = 20,
	ECC_GameTraceChannel17         = 21,
	ECC_GameTraceChannel18         = 22,
	ECC_GameTraceChannel19         = 23,
	ECC_GameTraceChannel20         = 24,
	ECC_GameTraceChannel21         = 25,
	ECC_GameTraceChannel22         = 26,
	ECC_GameTraceChannel23         = 27,
	ECC_GameTraceChannel24         = 28,
	ECC_GameTraceChannel25         = 29,
	ECC_GameTraceChannel26         = 30,
	ECC_GameTraceChannel27         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33,
};

enum class ECollisionResponse : uint8
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,
};

enum class EWalkableSlopeBehavior : uint8
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,
};

enum class EHLODLevelExclusion : uint8
{
	HLOD0                          = 1,
	HLOD1                          = 2,
	HLOD2                          = 4,
	HLOD3                          = 8,
	HLOD4                          = 16,
	HLOD5                          = 32,
	HLOD6                          = 64,
	HLOD7                          = 128,
	EHLODLevelExclusion_MAX        = 129,
};

enum class EDOFMode : uint8
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7,
};

enum class ERendererStencilMask : uint8
{
	ERSM_Default                   = 0,
	ERSM_255                       = 1,
	ERSM_1                         = 2,
	ERSM_2                         = 3,
	ERSM_4                         = 4,
	ERSM_8                         = 5,
	ERSM_16                        = 6,
	ERSM_32                        = 7,
	ERSM_64                        = 8,
	ERSM_128                       = 9,
	ERSM_MAX                       = 10,
};

enum class ERayTracingGroupCullingPriority : uint8
{
	CP_0_NEVER_CULL                = 0,
	CP_1                           = 1,
	CP_2                           = 2,
	CP_3                           = 3,
	CP_4_DEFAULT                   = 4,
	CP_5                           = 5,
	CP_6                           = 6,
	CP_7                           = 7,
	CP_8_QUICKLY_CULL              = 8,
	CP_MAX                         = 9,
};

enum class EPrimalEquipmentType : uint8
{
	Hat                            = 0,
	Shirt                          = 1,
	Pants                          = 2,
	Boots                          = 3,
	Gloves                         = 4,
	DinoSaddle                     = 5,
	Trophy                         = 6,
	Costume                        = 7,
	Shield                         = 8,
	Weapon                         = 9,
	Snapshot                       = 10,
	Pet                            = 11,
	MAX                            = 12,
};

enum class ERuntimeVirtualTextureMainPassType : uint8
{
	Never                          = 0,
	Exclusive                      = 1,
	Always                         = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3,
};

enum class ECanBeCharacterBase : uint8
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3,
};

enum class EHasCustomNavigableGeometry : uint8
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class EShadowCacheInvalidationBehavior : uint8
{
	Auto                           = 0,
	Always                         = 1,
	Rigid                          = 2,
	Static                         = 3,
	EShadowCacheInvalidationBehavior_MAX = 4,
};

enum class EHLODBatchingPolicy : uint8
{
	None                           = 0,
	MeshSection                    = 1,
	Instancing                     = 2,
	EHLODBatchingPolicy_MAX        = 3,
};

enum class ELightmapType : uint8
{
	Default                        = 0,
	ForceSurface                   = 1,
	ForceVolumetric                = 2,
	ELightmapType_MAX              = 3,
};

enum class EIndirectLightingCacheQuality : uint8
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3,
};

enum class ESceneDepthPriorityGroup : uint8
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2,
};

enum class EAnimationKeyFormat : uint8
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,
};

enum class EAnimCurveType : uint8
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4,
};

enum class EAnimAssetCurveFlags : uint8
{
	AACF_NONE                      = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable                  = 4,
	AACF_DriveMaterial_DEPRECATED  = 8,
	AACF_Metadata                  = 16,
	AACF_DriveTrack                = 32,
	AACF_Disabled                  = 64,
	AACF_MAX                       = 65,
};

enum class ERawCurveTrackTypes : uint8
{
	RCT_Float                      = 0,
	RCT_Vector                     = 1,
	RCT_Transform                  = 2,
	RCT_MAX                        = 3,
};

enum class ERootMotionRootLock : uint8
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3,
};

enum class ERootMotionMode : uint8
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4,
};

enum class EAdditiveBasePoseType : uint8
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_LocalAnimFrame            = 4,
	ABPT_MAX                       = 5,
};

enum class EAnimationCompressionFormat : uint8
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,
};

enum class EAnimPhysTwistAxis : uint8
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3,
};

enum class EAnimPhysCollisionType : uint8
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4,
};

enum class ETypeAdvanceAnim : uint8
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3,
};

enum class EBoneAxis : uint8
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3,
};

enum class EBoneControlSpace : uint8
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,
};

enum class EBoneRotationSource : uint8
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,
};

enum class EMontageNotifyTickType : uint8
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2,
};

enum class ENotifyFilterType : uint8
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2,
};

enum class EAdditiveAnimationType : uint8
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,
};

enum class ECurveBlendOption : uint8
{
	Override                       = 0,
	DoNotOverride                  = 1,
	NormalizeByWeight              = 2,
	BlendByWeight                  = 3,
	UseBasePose                    = 4,
	UseMaxValue                    = 5,
	UseMinValue                    = 6,
	ECurveBlendOption_MAX          = 7,
};

enum class EAnimInterpolationType : uint8
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2,
};

enum class EAxisOption : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7,
};

enum class EComponentType : uint8
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11,
};

enum class EAudioOutputTarget : uint8
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3,
};

enum class EAuxSceneTextures : uint8
{
	AST_2D_00                      = 0,
	AST_2D_01                      = 1,
	AST_2D_02                      = 2,
	AST_2D_03                      = 3,
	AST_2D_04                      = 4,
	AST_2D_05                      = 5,
	AST_2D_06                      = 6,
	AST_2D_07                      = 7,
	AST_2D_08                      = 8,
	AST_2D_09                      = 9,
	AST_2D_10                      = 10,
	AST_2D_11                      = 11,
	AST_2D_12                      = 12,
	AST_2D_13                      = 13,
	AST_2D_14                      = 14,
	AST_2D_15                      = 15,
	AST_2D_16                      = 16,
	AST_2D_17                      = 17,
	AST_2D_18                      = 18,
	AST_2D_19                      = 19,
	AST_2D_20                      = 20,
	AST_2D_21                      = 21,
	AST_2D_22                      = 22,
	AST_2D_23                      = 23,
	AST_2D_24                      = 24,
	AST_3D_00                      = 25,
	AST_3D_01                      = 26,
	AST_3D_02                      = 27,
	AST_3D_03                      = 28,
	AST_3D_04                      = 29,
	AST_3D_05                      = 30,
	AST_3D_06                      = 31,
	AST_3D_07                      = 32,
	AST_3D_08                      = 33,
	AST_3D_09                      = 34,
	AST_3D_10                      = 35,
	AST_3D_11                      = 36,
	AST_3D_12                      = 37,
	AST_3D_13                      = 38,
	AST_3D_14                      = 39,
	AST_3D_15                      = 40,
	AST_3D_16                      = 41,
	AST_3D_17                      = 42,
	AST_3D_18                      = 43,
	AST_3D_19                      = 44,
	AST_3D_20                      = 45,
	AST_3D_21                      = 46,
	AST_3D_22                      = 47,
	AST_3D_23                      = 48,
	AST_3D_24                      = 49,
	AST_Tot_Num                    = 50,
	AST_2D_Start                   = 0,
	AST_2D_End                     = 25,
	AST_3D_Start                   = 25,
	AST_3D_End                     = 50,
	AST_2D_Num                     = 25,
	AST_3D_Num                     = 25,
	AST_MAX                        = 51,
};

enum class EActorListsBP : uint8
{
	AL_PLAYERS                     = 0,
	AL_PLAYERSTATES                = 1,
	AL_FLOATINGHUD                 = 2,
	AL_UNSTASISEDACTORS            = 3,
	AL_NPC                         = 4,
	AL_NPC_ACTIVE                  = 5,
	AL_FORCEDHUD                   = 6,
	AL_NPCZONEMANAGERS             = 7,
	AL_PLAYERCONTROLLERS           = 8,
	AL_BEDS                        = 9,
	AL_BIOMEZONEVOLUMES            = 10,
	AL_NPC_DEAD                    = 11,
	AL_DAYCYCLEAMBIENTSOUNDS       = 12,
	AL_STRUCTURESCLIENT            = 13,
	AL_STRUCTUREPREVENTIONVOLUMES  = 14,
	AL_TRANSPONDERS                = 15,
	AL_CUSTOMACTORLISTS            = 16,
	AL_BLOCKINGVOLUMES             = 17,
	AL_AMBIENTSOUNDS               = 18,
	AL_CONNECTEDSHOOTERCHARACTERS  = 19,
	AL_EXPLORERNOTECHESTS          = 20,
	AL_SUPPLYCRATEVOLUMES          = 21,
	AL_TAMED_DINOS                 = 22,
	MAX                            = 23,
};

enum class EBlendableLocation : uint8
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5,
};

enum class EBlendSpaceAxis : uint8
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_MAX                        = 3,
};

enum class EPreferredTriangulationDirection : uint8
{
	None                           = 0,
	Tangential                     = 1,
	Radial                         = 2,
	EPreferredTriangulationDirection_MAX = 3,
};

enum class EBlendSpacePerBoneBlendMode : uint8
{
	ManualPerBoneOverride          = 0,
	BlendProfile                   = 1,
	EBlendSpacePerBoneBlendMode_MAX = 2,
};

enum class ENotifyTriggerMode : uint8
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3,
};

enum class EBlueprintStatus : uint8
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6,
};

enum class EBlueprintType : uint8
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,
};

enum class EBlueprintCompileMode : uint8
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3,
};

enum class EBlueprintNativizationFlag : uint8
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class EShouldCookBlueprintPropertyGuids : uint8
{
	No                             = 0,
	Yes                            = 1,
	Inherit                        = 2,
	EShouldCookBlueprintPropertyGuids_MAX = 3,
};

enum class ECsgOper : uint8
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6,
};

enum class EBrushType : uint8
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3,
};

enum class ECameraProjectionMode : uint8
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2,
};

enum class ECameraShakePlaySpace : uint8
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraShakePlaySpace_MAX      = 3,
};

enum class ECloudStorageDelegate : uint8
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,
};

enum class EContentBundleClientState : uint8
{
	Unregistered                   = 0,
	Registered                     = 1,
	ContentInjectionRequested      = 2,
	ContentRemovalRequested        = 3,
	RegistrationFailed             = 4,
	EContentBundleClientState_MAX  = 5,
};

enum class EWorldContentState : uint8
{
	NoContent                      = 0,
	ContentBundleInjected          = 1,
	EWorldContentState_MAX         = 2,
};

enum class EContentBundleStatus : uint8
{
	Registered                     = 0,
	ReadyToInject                  = 1,
	FailedToInject                 = 2,
	ContentInjected                = 3,
	Unknown                        = -1,
	EContentBundleStatus_MAX       = 4,
};

enum class ECustomAttributeBlendType : uint8
{
	Override                       = 0,
	Blend                          = 1,
	ECustomAttributeBlendType_MAX  = 2,
};

enum class EDataLayerType : uint8
{
	Runtime                        = 0,
	Editor                         = 1,
	Unknown                        = 2,
	Size                           = 3,
	EDataLayerType_MAX             = 4,
};

enum class EDistributionParamMode : uint8
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,
};

enum class EDistributionVectorLockFlags : uint8
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,
};

enum class EDistributionVectorMirrorFlags : uint8
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,
};

enum class EEdGraphPinDirection : uint8
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,
};

enum class EPinContainerType : uint8
{
	None                           = 0,
	Array                          = 1,
	Set                            = 2,
	Map                            = 3,
	EPinContainerType_MAX          = 4,
};

enum class ENodeTitleType : uint8
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5,
};

enum class ENodeAdvancedPins : uint8
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3,
};

enum class ENodeEnabledState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3,
};

enum class EBlueprintPinStyleType : uint8
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2,
};

enum class EGraphType : uint8
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5,
};

enum class ECanCreateConnectionResponse : uint8
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
	CONNECT_RESPONSE_MAX           = 7,
};

enum class EFullyLoadPackageType : uint8
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,
};

enum class ETransitionType : uint8
{
	None                           = 0,
	Paused                         = 1,
	Loading                        = 2,
	Saving                         = 3,
	Connecting                     = 4,
	Precaching                     = 5,
	WaitingToConnect               = 6,
	MAX                            = 7,
};

enum class EMouseCaptureMode : uint8
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5,
};

enum class ENetworkLagState : uint8
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2,
};

enum class ETravelType : uint8
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,
};

enum class EDemoPlayFailure : uint8
{
	Generic                        = 0,
	DemoNotFound                   = 1,
	Corrupt                        = 2,
	InvalidVersion                 = 3,
	InitBase                       = 4,
	GameSpecificHeader             = 5,
	ReplayStreamerInternal         = 6,
	LoadMap                        = 7,
	Serialization                  = 8,
	EDemoPlayFailure_MAX           = 9,
};

enum class EViewModeIndex : uint8
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 8,
	VMI_LightmapDensity            = 9,
	VMI_LitLightmapDensity         = 10,
	VMI_ReflectionOverride         = 11,
	VMI_VisualizeBuffer            = 12,
	VMI_StationaryLightOverlap     = 14,
	VMI_CollisionPawn              = 15,
	VMI_CollisionVisibility        = 16,
	VMI_LODColoration              = 18,
	VMI_QuadOverdraw               = 19,
	VMI_PrimitiveDistanceAccuracy  = 20,
	VMI_MeshUVDensityAccuracy      = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration             = 23,
	VMI_GroupLODColoration         = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution  = 26,
	VMI_PathTracing                = 27,
	VMI_RayTracingDebug            = 28,
	VMI_VisualizeNanite            = 29,
	VMI_VirtualTexturePendingMips  = 30,
	VMI_VisualizeLumen             = 31,
	VMI_VisualizeVirtualShadowMap  = 32,
	VMI_VisualizeGPUSkinCache      = 33,
	VMI_VisualizeSubstrate         = 34,
	VMI_VisualizeGroom             = 35,
	VMI_Max                        = 36,
	VMI_Unknown                    = 255,
};

enum class EAspectRatioAxisConstraint : uint8
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,
};

enum class EOcclusionCombineMode : uint8
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2,
};

enum class EBlendMode : uint8
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_AlphaHoldout             = 6,
	BLEND_TranslucentColoredTransmittance = 7,
	BLEND_MAX                      = 8,
	BLEND_TranslucentGreyTransmittance = 2,
	BLEND_ColoredTransmittanceOnly = 4,
};

enum class EMaterialFloatPrecisionMode : uint8
{
	MFPM_Default                   = 0,
	MFPM_Full_MaterialExpressionOnly = 1,
	MFPM_Full                      = 2,
	MFPM_Half                      = 3,
	MFPM_MAX                       = 4,
};

enum class ESamplerSourceMode : uint8
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_TerrainWeightmapGroupSettings = 3,
	SSM_MAX                        = 4,
};

enum class ETextureMipValueMode : uint8
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4,
};

enum class ETranslucencyLightingMode : uint8
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6,
};

enum class ERefractionMode : uint8
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_2DOffset                    = 2,
	RM_None                        = 3,
	RM_MAX                         = 4,
};

enum class ETranslucentSortPolicy : uint8
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3,
};

enum class EDynamicGlobalIlluminationMethod : uint8
{
	None                           = 0,
	Lumen                          = 1,
	ScreenSpace                    = 2,
	RayTraced                      = 3,
	Plugin                         = 4,
	EDynamicGlobalIlluminationMethod_MAX = 5,
};

enum class EReflectionMethod : uint8
{
	None                           = 0,
	Lumen                          = 1,
	ScreenSpace                    = 2,
	RayTraced                      = 3,
	EReflectionMethod_MAX          = 4,
};

enum class EShadowMapMethod : uint8
{
	ShadowMaps                     = 0,
	VirtualShadowMaps              = 1,
	EShadowMapMethod_MAX           = 2,
};

enum class ECastRayTracedShadow : uint8
{
	Disabled                       = 0,
	UseProjectSetting              = 1,
	Enabled                        = 2,
	ECastRayTracedShadow_MAX       = 3,
};

enum class ESceneCaptureSource : uint8
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_FinalColorHDR              = 8,
	SCS_FinalToneCurveHDR          = 9,
	SCS_MAX                        = 10,
};

enum class ESceneCaptureCompositeMode : uint8
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3,
};

enum class EGBufferFormat : uint8
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 3,
	Force16BitsPerChannel          = 5,
	EGBufferFormat_MAX             = 6,
};

enum class ETrailWidthMode : uint8
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3,
};

enum class EParticleCollisionMode : uint8
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	EParticleCollisionMode_MAX     = 2,
};

enum class EMaterialShadingModel : uint8
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_SingleLayerWater           = 10,
	MSM_ThinTranslucent            = 11,
	MSM_Strata                     = 12,
	MSM_NUM                        = 13,
	MSM_FromMaterialExpression     = 14,
	MSM_MAX                        = 15,
};

enum class EStrataShadingModel : uint8
{
	SSM_Unlit                      = 0,
	SSM_DefaultLit                 = 1,
	SSM_SubsurfaceLit              = 2,
	SSM_VolumetricFogCloud         = 3,
	SSM_Hair                       = 4,
	SSM_Eye                        = 5,
	SSM_SingleLayerWater           = 6,
	SSM_LightFunction              = 7,
	SSM_PostProcess                = 8,
	SSM_Decal                      = 9,
	SSM_UI                         = 10,
	SSM_NUM                        = 11,
};

enum class EMaterialSamplerType : uint8
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_Data               = 8,
	SAMPLERTYPE_External           = 9,
	SAMPLERTYPE_VirtualColor       = 10,
	SAMPLERTYPE_VirtualGrayscale   = 11,
	SAMPLERTYPE_VirtualAlpha       = 12,
	SAMPLERTYPE_VirtualNormal      = 13,
	SAMPLERTYPE_VirtualMasks       = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX                = 17,
};

enum class EMaterialStencilCompare : uint8
{
	MSC_Less                       = 0,
	MSC_LessEqual                  = 1,
	MSC_Greater                    = 2,
	MSC_GreaterEqual               = 3,
	MSC_Equal                      = 4,
	MSC_NotEqual                   = 5,
	MSC_Never                      = 6,
	MSC_Always                     = 7,
	MSC_Count                      = 8,
	MSC_MAX                        = 9,
};

enum class EMaterialShadingRate : uint8
{
	MSR_1x1                        = 0,
	MSR_2x1                        = 1,
	MSR_1x2                        = 2,
	MSR_2x2                        = 3,
	MSR_4x2                        = 4,
	MSR_2x4                        = 5,
	MSR_4x4                        = 6,
	MSR_Count                      = 7,
	MSR_MAX                        = 8,
};

enum class ELightingBuildQuality : uint8
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4,
};

enum class ENetworkSmoothingMode : uint8
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	ENetworkSmoothingMode_MAX      = 3,
};

enum class EOverlapFilterOption : uint8
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3,
};

enum class EFilterInterpolationType : uint8
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_EaseInOut                 = 3,
	BSIT_ExponentialDecay          = 4,
	BSIT_SpringDamper              = 5,
	BSIT_MAX                       = 6,
};

enum class ETimelineSigType : uint8
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5,
};

enum class ELightMapPaddingType : uint8
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3,
};

enum class EShadowMapFlags : uint8
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2,
};

enum class EUpdateRateShiftBucket : uint8
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7,
};

enum class ENetRole : uint8
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,
};

enum class ENetDormancy : uint8
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5,
};

enum class EAutoReceiveInput : uint8
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9,
};

enum class EAutoPossessAI : uint8
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4,
};

enum class EPhysicalMaterialMaskColor : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Cyan                           = 3,
	Magenta                        = 4,
	Yellow                         = 5,
	White                          = 6,
	Black                          = 7,
	MAX                            = 8,
};

enum class EComponentSocketType : uint8
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3,
};

enum class ESpawnActorCollisionHandlingMethod : uint8
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class EMeshBufferAccess : uint8
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2,
};

enum class EFontImportCharacterSet : uint8
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,
};

enum class EStandbyType : uint8
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,
};

enum class ESuggestProjVelocityTraceOption : uint8
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EHISMViewRelevanceType : uint8
{
	Grass                          = 0,
	Foliage                        = 1,
	HISM                           = 2,
	EHISMViewRelevanceType_MAX     = 3,
};

enum class EHitProxyPriority : uint8
{
	HPP_World                      = 0,
	HPP_Wireframe                  = 1,
	HPP_Foreground                 = 2,
	HPP_UI                         = 3,
	HPP_MAX                        = 4,
};

enum class EAdManagerDelegate : uint8
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,
};

enum class ETrackActiveCondition : uint8
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,
};

enum class ETrackInterpMode : uint8
{
	FTI_Set                        = 0,
	FTI_Add                        = 1,
	FTI_Multiply                   = 2,
	FTI_MAX                        = 3,
};

enum class EInterpTrackMoveRotMode : uint8
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,
};

enum class EInterpMoveAxis : uint8
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,
};

enum class ETrackToggleAction : uint8
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,
};

enum class EVisibilityTrackAction : uint8
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,
};

enum class EVisibilityTrackCondition : uint8
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,
};

enum class ERoundingMode : uint8
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,
};

enum class EScreenPercentageMode : uint8
{
	Manual                         = 0,
	BasedOnDisplayResolution       = 1,
	BasedOnDPIScale                = 2,
	EScreenPercentageMode_MAX      = 3,
};

enum class ELevelInstanceRuntimeBehavior : uint8
{
	None                           = 0,
	Embedded_Deprecated            = 1,
	Partitioned                    = 2,
	LevelStreaming                 = 3,
	ELevelInstanceRuntimeBehavior_MAX = 4,
};

enum class ELevelInstanceCreationType : uint8
{
	LevelInstance                  = 0,
	PackedLevelActor               = 1,
	ELevelInstanceCreationType_MAX = 2,
};

enum class ELevelInstancePivotType : uint8
{
	CenterMinZ                     = 0,
	Center                         = 1,
	Actor                          = 2,
	WorldOrigin                    = 3,
	ELevelInstancePivotType_MAX    = 4,
};

enum class EStreamingVolumeUsage : uint8
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,
};

enum class EMaterialDomain : uint8
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_RuntimeVirtualTexture       = 6,
	MD_Compute                     = 7,
	MD_MAX                         = 8,
};

enum class ECustomDataInputType : uint8
{
	CIT_None                       = 0,
	CIT_Float1                     = 1,
	CIT_Float2                     = 2,
	CIT_Float3                     = 4,
	CIT_Float4                     = 8,
	CIT_MAX                        = 9,
};

enum class ETextureColorChannel : uint8
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,
};

enum class EMaterialAttributeBlend : uint8
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3,
};

enum class EChannelMaskParameterColor : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EChannelMaskParameterColor_MAX = 4,
};

enum class EClampMode : uint8
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3,
};

enum class ECustomMaterialOutputType : uint8
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MaterialAttributes        = 4,
	CMOT_MAX                       = 5,
};

enum class EDataDrivenShaderPlatformInfoCondition : uint8
{
	COND_True                      = 0,
	COND_False                     = 1,
	COND_Max                       = 2,
};

enum class EDBufferTextureId : uint8
{
	DBT_A                          = 0,
	DBT_B                          = 1,
	DBT_C                          = 2,
	DBT_MAX                        = 3,
};

enum class EDepthOfFieldFunctionValue : uint8
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4,
};

enum class EFunctionInputType : uint8
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_VolumeTexture    = 7,
	FunctionInput_StaticBool       = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal  = 10,
	FunctionInput_Bool             = 11,
	FunctionInput_Substrate        = 12,
	FunctionInput_MAX              = 13,
};

enum class ESplatBlendOp : uint8
{
	SBO_None                       = 0,
	SBO_Min                        = 1,
	SBO_Max                        = 2,
	SBO_Add                        = 3,
	SBO_Avg                        = 4,
};

enum class ENoiseFunction : uint8
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6,
};

enum class ECustomDataRowCountMethod : uint8
{
	RCM_Constant                   = 0,
	RCM_ScalarParam                = 1,
	RCM_TextureParamWidth          = 2,
	RCM_TextureParamHeight         = 3,
	RCM_TextureParamSize           = 4,
	RCM_MAX                        = 5,
};

enum class ERuntimeVirtualTextureMipValueMode : uint8
{
	RVTMVM_None                    = 0,
	RVTMVM_MipLevel                = 1,
	RVTMVM_MipBias                 = 2,
	RVTMVM_RecalculateDerivatives  = 3,
	RVTMVM_MAX                     = 4,
};

enum class ERuntimeVirtualTextureTextureAddressMode : uint8
{
	RVTTA_Clamp                    = 0,
	RVTTA_Wrap                     = 1,
	RVTTA_MAX                      = 2,
};

enum class EMaterialSceneAttributeInputMode : uint8
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ESpeedTreeGeometryType : uint8
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5,
};

enum class ESpeedTreeWindType : uint8
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7,
};

enum class ESpeedTreeLODType : uint8
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2,
};

enum class ESwitchMaterialOutputType : uint8
{
	TMMOT_Float1                   = 0,
	TMMOT_Float2                   = 1,
	TMMOT_Float3                   = 2,
	TMMOT_Float4                   = 3,
	TMMOT_MAX                      = 4,
};

enum class EMaterialExposedTextureProperty : uint8
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2,
};

enum class EMaterialVectorCoordTransformSource : uint8
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_Instance       = 6,
	TRANSFORMSOURCE_RefPose        = 7,
	TRANSFORMSOURCE_MAX            = 8,
};

enum class EMaterialVectorCoordTransform : uint8
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_Instance             = 6,
	TRANSFORM_MAX                  = 7,
};

enum class EMaterialPositionTransformSource : uint8
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_Instance    = 6,
	TRANSFORMPOSSOURCE_MAX         = 7,
};

enum class EVectorNoiseFunction : uint8
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5,
};

enum class EMaterialExposedViewProperty : uint8
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_TemporalSampleCount       = 7,
	MEVP_TemporalSampleIndex       = 8,
	MEVP_TemporalSampleOffset      = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure               = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_ResolutionFraction        = 14,
	MEVP_MAX                       = 15,
};

enum class EWorldPositionIncludedOffsets : uint8
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4,
};

enum class EMaterialFunctionUsage : uint8
{
	Default                        = 0,
	MaterialLayer                  = 1,
	MaterialLayerBlend             = 2,
	EMaterialFunctionUsage_MAX     = 3,
};

enum class EMaterialUsage : uint8
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections   = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_NiagaraSprites        = 10,
	MATUSAGE_NiagaraRibbons        = 11,
	MATUSAGE_NiagaraMeshParticles  = 12,
	MATUSAGE_GeometryCache         = 13,
	MATUSAGE_Water                 = 14,
	MATUSAGE_HairStrands           = 15,
	MATUSAGE_LidarPointCloud       = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_Nanite                = 18,
	MATUSAGE_VolumetricCloud       = 19,
	MATUSAGE_MAX                   = 20,
};

enum class EMaterialLayerLinkState : uint8
{
	Uninitialized                  = 0,
	LinkedToParent                 = 1,
	UnlinkedFromParent             = 2,
	NotFromParent                  = 3,
	EMaterialLayerLinkState_MAX    = 4,
};

enum class ETextureSizingType : uint8
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_AutomaticFromTexelDensity = 4,
	TextureSizingType_AutomaticFromMeshScreenSize = 5,
	TextureSizingType_AutomaticFromMeshDrawDistance = 6,
	TextureSizingType_MAX          = 7,
};

enum class EMaterialMergeType : uint8
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2,
};

enum class ESceneTextureId : uint8
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_WorldTangent               = 29,
	PPI_Anisotropy                 = 30,
	PPI_MAX                        = 31,
};

enum class EMaterialParameterAssociation : uint8
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3,
};

enum class EMicroTransactionDelegate : uint8
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,
};

enum class EMicroTransactionResult : uint8
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,
};

enum class ENavigationDataResolution : uint8
{
	Low                            = 0,
	Default                        = 1,
	High                           = 2,
	Invalid                        = 3,
	MAX                            = 3,
};

enum class ENavLinkDirection : uint8
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3,
};

enum class EPingType : uint8
{
	None                           = 0,
	RoundTrip                      = 1,
	RoundTripExclFrame             = 2,
	ICMP                           = 4,
	UDPQoS                         = 8,
	Max                            = 8,
	Count                          = 4,
};

enum class EPingAverageType : uint8
{
	None                           = 0,
	MovingAverage                  = 1,
	PlayerStateAvg                 = 2,
	EPingAverageType_MAX           = 3,
};

enum class EParticleBurstMethod : uint8
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,
};

enum class EParticleSubUVInterpMethod : uint8
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,
};

enum class EEmitterRenderMode : uint8
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5,
};

enum class EParticleDetailMode : uint8
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3,
};

enum class EParticleSignificanceLevel : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EParticleSystemInsignificanceReaction : uint8
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class EModuleType : uint8
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9,
};

enum class EParticleSourceSelectionMethod : uint8
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,
};

enum class EAttractorParticleSelectionMethod : uint8
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,
};

enum class EBeam2SourceTargetMethod : uint8
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5,
};

enum class EBeam2SourceTargetTangentMethod : uint8
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,
};

enum class EBeamModifierType : uint8
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,
};

enum class EParticleCollisionComplete : uint8
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,
};

enum class EParticleCollisionResponse : uint8
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class ELocationBoneSocketSource : uint8
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,
};

enum class ELocationBoneSocketSelectionMethod : uint8
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2,
};

enum class ELocationEmitterSelectionMethod : uint8
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,
};

enum class ECylinderHeightAxis : uint8
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,
};

enum class EOrbitChainMode : uint8
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,
};

enum class EParticleAxisLock : uint8
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,
};

enum class EEmitterDynamicParameterValue : uint8
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6,
};

enum class EParticleUVFlipMode : uint8
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8,
};

enum class EParticleSortMode : uint8
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,
};

enum class EEmitterNormalsMode : uint8
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,
};

enum class ETrail2SourceMethod : uint8
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,
};

enum class EBeam2Method : uint8
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,
};

enum class EBeamTaperMethod : uint8
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,
};

enum class EMeshScreenAlignment : uint8
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,
};

enum class EMeshCameraFacingUpAxis : uint8
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,
};

enum class EMeshCameraFacingOptions : uint8
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,
};

enum class ETrailsRenderAxisOption : uint8
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3,
};

enum class EParticleScreenAlignment : uint8
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7,
};

enum class EParticleSystemUpdateMode : uint8
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,
};

enum class EParticleSystemLODMethod : uint8
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,
};

enum class EParticleSysParamType : uint8
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_VectorUnitRand            = 8,
	PSPT_MAX                       = 9,
};

enum class EParticleReplayState : uint8
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,
};

enum class EParticleEventType : uint8
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,
};

enum class EViewTargetBlendFunction : uint8
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_PreBlended             = 5,
	VTBlend_MAX                    = 6,
};

enum class EBPMapCheckSeverity : uint8
{
	Info                           = 0,
	Warning                        = 1,
	PerformanceWarning             = 2,
	Error                          = 3,
	EBPMapCheckSeverity_MAX        = 4,
};

enum class EReplicationGraphBehavior : uint8
{
	Default                        = 0,
	NotRouted                      = 1,
	RelevantAllConnections         = 2,
	RelevantOwnerConnection        = 3,
	RelevantTeamConnection         = 4,
	NetChild_Dynamic               = 64,
	NetChild_Static                = 65,
	NetChild_ForceStaticDormancy   = 66,
	Spatialize_Static              = 128,
	Spatialize_Dynamic             = 129,
	Spatialize_Dormancy            = 130,
	Spatialize_ForceStaticDormancy = 131,
	EReplicationGraphBehavior_MAX  = 132,
};

enum class ERichCurveInterpMode : uint8
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4,
};

enum class ERichCurveExtrapolation : uint8
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6,
};

enum class EReverbPreset : uint8
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,
};

enum class ERichCurveTangentMode : uint8
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4,
};

enum class ERichCurveTangentWeightMode : uint8
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,
};

enum class ERichCurveCompressionFormat : uint8
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_Weighted                  = 5,
	RCCF_MAX                       = 6,
};

enum class ERichCurveKeyTimeCompressionFormat : uint8
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2,
};

enum class ERuntimeVirtualTextureMaterialType : uint8
{
	BaseColor                      = 0,
	BaseColor_Normal_DEPRECATED    = 1,
	BaseColor_Normal_Roughness     = 2,
	BaseColor_Normal_Specular      = 3,
	BaseColor_Normal_Specular_YCoCg = 4,
	BaseColor_Normal_Specular_Mask_YCoCg = 5,
	Switch_Optimized               = 6,
	WorldHeight                    = 7,
	Count                          = 8,
	ERuntimeVirtualTextureMaterialType_MAX = 9,
};

enum class EDepthOfFieldMethod : uint8
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3,
};

enum class EAutoExposureMethod : uint8
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3,
};

enum class EBloomMethod : uint8
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2,
};

enum class ETemperatureMethod : uint8
{
	TEMP_WhiteBalance              = 0,
	TEMP_ColorTemperature          = 1,
	TEMP_MAX                       = 2,
};

enum class ELightUnits : uint8
{
	Unitless                       = 0,
	Candelas                       = 1,
	Lumens                         = 2,
	ELightUnits_MAX                = 3,
};

enum class EReflectionsType : uint8
{
	ScreenSpace                    = 0,
	RayTracing                     = 1,
	EReflectionsType_MAX           = 2,
};

enum class ELumenRayLightingModeOverride : uint8
{
	Default                        = 0,
	SurfaceCache                   = 1,
	HitLighting                    = 2,
	ELumenRayLightingModeOverride_MAX = 3,
};

enum class ETranslucencyType : uint8
{
	Raster                         = 0,
	RayTracing                     = 1,
	ETranslucencyType_MAX          = 2,
};

enum class ERayTracingGlobalIlluminationType : uint8
{
	Disabled                       = 0,
	BruteForce                     = 1,
	FinalGather                    = 2,
	ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class EReflectedAndRefractedRayTracedShadows : uint8
{
	Disabled                       = 0,
	Hard_shadows                   = 1,
	Area_shadows                   = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

enum class EMobilePlanarReflectionMode : uint8
{
	Usual                          = 0,
	MobilePPRExclusive             = 1,
	MobilePPR                      = 2,
	EMobilePlanarReflectionMode_MAX = 3,
};

enum class EMobilePixelProjectedReflectionQuality : uint8
{
	Disabled                       = 0,
	BestPerformance                = 1,
	BetterQuality                  = 2,
	BestQuality                    = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4,
};

enum class EMaterialProperty : uint8
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Anisotropy                  = 9,
	MP_Normal                      = 10,
	MP_Tangent                     = 11,
	MP_WorldPositionOffset         = 12,
	MP_WorldDisplacement_DEPRECATED = 13,
	MP_TessellationMultiplier_DEPRECATED = 14,
	MP_SubsurfaceColor             = 15,
	MP_CustomData0                 = 16,
	MP_CustomData1                 = 17,
	MP_AmbientOcclusion            = 18,
	MP_Refraction                  = 19,
	MP_SSAOIntensity               = 20,
	MP_SSAOInfluence               = 21,
	MP_SSAOLightInfluence          = 22,
	MP_CustomizedUVs0              = 23,
	MP_CustomizedUVs1              = 24,
	MP_CustomizedUVs2              = 25,
	MP_CustomizedUVs3              = 26,
	MP_CustomizedUVs4              = 27,
	MP_CustomizedUVs5              = 28,
	MP_CustomizedUVs6              = 29,
	MP_CustomizedUVs7              = 30,
	MP_PixelDepthOffset            = 31,
	MP_ShadingModel                = 32,
	MP_FrontMaterial               = 33,
	MP_SurfaceThickness            = 34,
	MP_MaterialAttributes          = 35,
	MP_CustomOutput                = 36,
	MP_MAX                         = 37,
};

enum class EAntiAliasingMethod : uint8
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_TSR                        = 4,
	AAM_MAX                        = 5,
};

enum class ESkeletalMeshGeoImportVersions : uint8
{
	Before_Versionning             = 0,
	SkeletalMeshBuildRefactor      = 1,
	VersionPlusOne                 = 2,
	LatestVersion                  = 1,
	ESkeletalMeshGeoImportVersions_MAX = 3,
};

enum class ESkeletalMeshSkinningImportVersions : uint8
{
	Before_Versionning             = 0,
	SkeletalMeshBuildRefactor      = 1,
	VersionPlusOne                 = 2,
	LatestVersion                  = 1,
	ESkeletalMeshSkinningImportVersions_MAX = 3,
};

enum class ESkeletalMeshTerminationCriterion : uint8
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6,
};

enum class ESkeletalMeshOptimizationType : uint8
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3,
};

enum class ESkeletalMeshOptimizationImportance : uint8
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,
};

enum class EBoneVisibilityStatus : uint8
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,
};

enum class EPhysBodyOp : uint8
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2,
};

enum class EVisibilityBasedAnimTickOption : uint8
{
	LocalControlTickPoseAndRefreshBones = 0,
	AlwaysTickPoseAndRefreshBones  = 1,
	AlwaysTickPose                 = 2,
	OnlyTickMontagesWhenNotRendered = 3,
	OnlyTickPoseWhenRendered       = 4,
	EVisibilityBasedAnimTickOption_MAX = 5,
};

enum class EBoneSpaces : uint8
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2,
};

enum class ESkyLightSourceType : uint8
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2,
};

enum class ESoundDistanceCalc : uint8
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,
};

enum class ESoundSpatializationAlgorithm : uint8
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2,
};

enum class EAirAbsorptionMethod : uint8
{
	Linear                         = 0,
	CustomCurve                    = 1,
	EAirAbsorptionMethod_MAX       = 2,
};

enum class EReverbSendMethod : uint8
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EReverbSendMethod_MAX          = 3,
};

enum class ESubmixSendMethod : uint8
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESubmixSendMethod_MAX          = 3,
};

enum class EPriorityAttenuationMethod : uint8
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EPriorityAttenuationMethod_MAX = 3,
};

enum class ESoundGroup : uint8
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,
};

enum class EModulationParamMode : uint8
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3,
};

enum class ESourceBusSendLevelControlMethod : uint8
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESourceBusSendLevelControlMethod_MAX = 3,
};

enum class EDecompressionType : uint8
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8,
};

enum class ESoundWaveFFTSize : uint8
{
	VerySmall_64                   = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	VeryLarge_2048                 = 4,
	ESoundWaveFFTSize_MAX          = 5,
};

enum class ESoundAssetCompressionType : uint8
{
	BinkAudio                      = 0,
	ADPCM                          = 1,
	PCM                            = 2,
	PlatformSpecific               = 3,
	ProjectDefined                 = 4,
	ESoundAssetCompressionType_MAX = 5,
};

enum class ESoundWaveLoadingBehavior : uint8
{
	Inherited                      = 0,
	RetainOnLoad                   = 1,
	PrimeOnLoad                    = 2,
	LoadOnDemand                   = 3,
	ForceInline                    = 4,
	Uninitialized                  = 255,
	ESoundWaveLoadingBehavior_MAX  = 256,
};

enum class EStereoLayerType : uint8
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3,
};

enum class EStereoLayerShape : uint8
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_EquirectLayer             = 3,
	SLSH_MAX                       = 4,
};

enum class ESubUVBoundingVertexCount : uint8
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2,
};

enum class EOpacitySourceMode : uint8
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5,
};

enum class EHorizTextAligment : uint8
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3,
};

enum class EVerticalTextAligment : uint8
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4,
};

enum class ETextureGroup : uint8
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData          = 32,
	TEXTUREGROUP_16BitData         = 33,
	TEXTUREGROUP_Project01         = 34,
	TEXTUREGROUP_Project02         = 35,
	TEXTUREGROUP_Project03         = 36,
	TEXTUREGROUP_Project04         = 37,
	TEXTUREGROUP_Project05         = 38,
	TEXTUREGROUP_Project06         = 39,
	TEXTUREGROUP_Project07         = 40,
	TEXTUREGROUP_Project08         = 41,
	TEXTUREGROUP_Project09         = 42,
	TEXTUREGROUP_Project10         = 43,
	TEXTUREGROUP_Project11         = 44,
	TEXTUREGROUP_Project12         = 45,
	TEXTUREGROUP_Project13         = 46,
	TEXTUREGROUP_Project14         = 47,
	TEXTUREGROUP_Project15         = 48,
	TEXTUREGROUP_Project16         = 49,
	TEXTUREGROUP_Project17         = 50,
	TEXTUREGROUP_Project18         = 51,
	TEXTUREGROUP_MAX               = 52,
};

enum class ETextureMipGenSettings : uint8
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_Unfiltered                = 20,
	TMGS_Angular                   = 21,
	TMGS_MAX                       = 22,
};

enum class ETexturePowerOfTwoSetting : uint8
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3,
};

enum class ETextureSamplerFilter : uint8
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5,
};

enum class ETextureMipLoadOptions : uint8
{
	Default                        = 0,
	AllMips                        = 1,
	OnlyFirstMip                   = 2,
	ETextureMipLoadOptions_MAX     = 3,
};

enum class ETextureDownscaleOptions : uint8
{
	Default                        = 0,
	Unfiltered                     = 1,
	SimpleAverage                  = 2,
	Sharpen0                       = 3,
	Sharpen1                       = 4,
	Sharpen2                       = 5,
	Sharpen3                       = 6,
	Sharpen4                       = 7,
	Sharpen5                       = 8,
	Sharpen6                       = 9,
	Sharpen7                       = 10,
	Sharpen8                       = 11,
	Sharpen9                       = 12,
	Sharpen10                      = 13,
	ETextureDownscaleOptions_MAX   = 14,
};

enum class ETextureLossyCompressionAmount : uint8
{
	TLCA_Default                   = 0,
	TLCA_None                      = 1,
	TLCA_Lowest                    = 2,
	TLCA_Low                       = 3,
	TLCA_Medium                    = 4,
	TLCA_High                      = 5,
	TLCA_Highest                   = 6,
	TLCA_MAX                       = 7,
};

enum class ETextureEncodeSpeed : uint8
{
	Final                          = 0,
	FinalIfAvailable               = 1,
	Fast                           = 2,
	ETextureEncodeSpeed_MAX        = 3,
};

enum class ETextureClass : uint8
{
	Invalid                        = 0,
	TwoD                           = 1,
	Cube                           = 2,
	Array                          = 3,
	CubeArray                      = 4,
	Volume                         = 5,
	TwoDDynamic                    = 6,
	RenderTarget                   = 7,
	Other2DNoSource                = 8,
	OtherUnknown                   = 9,
	ETextureClass_MAX              = 10,
};

enum class ECompositeTextureMode : uint8
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5,
};

enum class ETextureSourceCompressionFormat : uint8
{
	TSCF_None                      = 0,
	TSCF_PNG                       = 1,
	TSCF_JPEG                      = 2,
	TSCF_MAX                       = 3,
};

enum class ETextureSourceFormat : uint8
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8_DEPRECATED           = 6,
	TSF_RGBE8_DEPRECATED           = 7,
	TSF_G16                        = 8,
	TSF_RGBA32F                    = 9,
	TSF_R16F                       = 10,
	TSF_R32F                       = 11,
	TSF_MAX                        = 12,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
};

enum class ETextureCompressionSettings : uint8
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_HalfFloat                   = 12,
	TC_LQ                          = 13,
	TC_EncodedReflectionCapture    = 14,
	TC_SingleFloat                 = 15,
	TC_HDR_F32                     = 16,
	TC_MAX                         = 17,
};

enum class ETextureSourceEncoding : uint8
{
	TSE_None                       = 0,
	TSE_Linear                     = 1,
	TSE_sRGB                       = 2,
	TSE_ST2084                     = 3,
	TSE_Gamma22                    = 4,
	TSE_BT1886                     = 5,
	TSE_Gamma26                    = 6,
	TSE_Cineon                     = 7,
	TSE_REDLog                     = 8,
	TSE_REDLog3G10                 = 9,
	TSE_SLog1                      = 10,
	TSE_SLog2                      = 11,
	TSE_SLog3                      = 12,
	TSE_AlexaV3LogC                = 13,
	TSE_CanonLog                   = 14,
	TSE_ProTune                    = 15,
	TSE_VLog                       = 16,
	TSE_MAX                        = 17,
};

enum class ETextureColorSpace : uint8
{
	TCS_None                       = 0,
	TCS_sRGB                       = 1,
	TCS_Rec2020                    = 2,
	TCS_ACESAP0                    = 3,
	TCS_ACESAP1                    = 4,
	TCS_P3DCI                      = 5,
	TCS_P3D65                      = 6,
	TCS_REDWideGamut               = 7,
	TCS_SonySGamut3                = 8,
	TCS_SonySGamut3Cine            = 9,
	TCS_AlexaWideGamut             = 10,
	TCS_CanonCinemaGamut           = 11,
	TCS_GoProProtuneNative         = 12,
	TCS_PanasonicVGamut            = 13,
	TCS_Custom                     = 99,
	TCS_MAX                        = 100,
};

enum class ETextureCookPlatformTilingSettings : uint8
{
	TCPTS_FromTextureGroup         = 0,
	TCPTS_Tile                     = 1,
	TCPTS_DoNotTile                = 2,
	TCPTS_MAX                      = 3,
};

enum class ETextureChromaticAdaptationMethod : uint8
{
	TCAM_None                      = 0,
	TCAM_Bradford                  = 1,
	TCAM_CAT02                     = 2,
	TCAM_MAX                       = 3,
};

enum class ETextureFilter : uint8
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,
};

enum class ETextureAddress : uint8
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,
};

enum class ETextureMipCount : uint8
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,
};

enum class ETextureCompressionQuality : uint8
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6,
};

enum class ETimelineLengthMode : uint8
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2,
};

enum class ETimelineDirection : uint8
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2,
};

enum class ETwitterRequestMethod : uint8
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,
};

enum class ETwitterIntegrationDelegate : uint8
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,
};

enum class EUserDefinedStructureStatus : uint8
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4,
};

enum class EVectorFieldConstructionOp : uint8
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2,
};

enum class ESplitScreenType : uint8
{
	None                           = 0,
	TwoPlayer_Horizontal           = 1,
	TwoPlayer_Vertical             = 2,
	ThreePlayer_FavorTop           = 3,
	ThreePlayer_FavorBottom        = 4,
	ThreePlayer_Vertical           = 5,
	ThreePlayer_Horizontal         = 6,
	FourPlayer_Grid                = 7,
	FourPlayer_Vertical            = 8,
	FourPlayer_Horizontal          = 9,
	SplitTypeCount                 = 10,
	ESplitScreenType_MAX           = 11,
};

enum class EWindSourceType : uint8
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2,
};

enum class EVisibilityAggressiveness : uint8
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,
};

enum class EVolumeLightingMethod : uint8
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2,
};

enum class EHierarchicalSimplificationMethod : uint8
{
	None                           = 0,
	Merge                          = 1,
	Simplify                       = 2,
	Approximate                    = 3,
	EHierarchicalSimplificationMethod_MAX = 4,
};

enum class EQuartzTimeSignatureQuantization : uint8
{
	HalfNote                       = 0,
	QuarterNote                    = 1,
	EighthNote                     = 2,
	SixteenthNote                  = 3,
	ThirtySecondNote               = 4,
	Count                          = 5,
	EQuartzTimeSignatureQuantization_MAX = 6,
};

enum class EQuartzDelegateType : uint8
{
	MetronomeTick                  = 0,
	CommandEvent                   = 1,
	Count                          = 2,
	EQuartzDelegateType_MAX        = 3,
};

enum class EQuarztQuantizationReference : uint8
{
	BarRelative                    = 0,
	TransportRelative              = 1,
	CurrentTimeRelative            = 2,
	Count                          = 3,
	EQuarztQuantizationReference_MAX = 4,
};

enum class EQuartzCommandType : uint8
{
	PlaySound                      = 0,
	QueueSoundToPlay               = 1,
	RetriggerSound                 = 2,
	TickRateChange                 = 3,
	TransportReset                 = 4,
	StartOtherClock                = 5,
	Custom                         = 6,
	EQuartzCommandType_MAX         = 7,
};

enum class EActorUpdateOverlapsMethod : uint8
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4,
};

enum class ESpawnActorScaleMethod : uint8
{
	OverrideRootScale              = 0,
	MultiplyWithRoot               = 1,
	SelectDefaultAtRuntime         = 2,
	ESpawnActorScaleMethod_MAX     = 3,
};

enum class EFNavigationSystemRunMode : uint8
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	InferFromWorldMode             = 5,
	EditorWorldPartitionBuildMode  = 6,
	FNavigationSystemRunMode_MAX   = 7,
};

enum class ENavigationOptionFlag : uint8
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
};

enum class ENavDataGatheringMode : uint8
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3,
};

enum class ENavDataGatheringModeConfig : uint8
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class ENavPathEvent : uint8
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8,
};

enum class ENavigationQueryResult : uint8
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4,
};

enum class EAlphaBlendOption : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15,
};

enum class EAnimGroupRole : uint8
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	TransitionFollower             = 4,
	EAnimGroupRole_MAX             = 5,
};

enum class EAnimSyncGroupScope : uint8
{
	Local                          = 0,
	Component                      = 1,
	EAnimSyncGroupScope_MAX        = 2,
};

enum class EAnimSyncMethod : uint8
{
	DoNotSync                      = 0,
	SyncGroup                      = 1,
	Graph                          = 2,
	EAnimSyncMethod_MAX            = 3,
};

enum class EAnimExecutionContextConversionResult : uint8
{
	Succeeded                      = 1,
	Failed                         = 0,
	EAnimExecutionContextConversionResult_MAX = 2,
};

enum class EMontagePlayReturnType : uint8
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2,
};

enum class EDrawDebugItemType : uint8
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	Point                          = 5,
	Circle                         = 6,
	Cone                           = 7,
	EDrawDebugItemType_MAX         = 8,
};

enum class EAnimLinkMethod : uint8
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3,
};

enum class EAnimNotifyEventType : uint8
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2,
};

enum class EMontageBlendMode : uint8
{
	Standard                       = 0,
	Inertialization                = 1,
	EMontageBlendMode_MAX          = 2,
};

enum class EMontageSubStepResult : uint8
{
	Moved                          = 0,
	NotMoved                       = 1,
	InvalidSection                 = 2,
	InvalidMontage                 = 3,
	EMontageSubStepResult_MAX      = 4,
};

enum class EPinHidingMode : uint8
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4,
};

enum class EAnimNodeDataFlags : uint8
{
	None                           = 0,
	HasInitialUpdateFunction       = 1,
	HasBecomeRelevantFunction      = 2,
	HasUpdateFunction              = 4,
	EAnimNodeDataFlags_MAX         = 5,
};

enum class EAnimNodeReferenceConversionResult : uint8
{
	Succeeded                      = 1,
	Failed                         = 0,
	EAnimNodeReferenceConversionResult_MAX = 2,
};

enum class EInertializationState : uint8
{
	Inactive                       = 0,
	Pending                        = 1,
	Active                         = 2,
	EInertializationState_MAX      = 3,
};

enum class EInertializationBoneState : uint8
{
	Invalid                        = 0,
	Valid                          = 1,
	Excluded                       = 2,
	EInertializationBoneState_MAX  = 3,
};

enum class EInertializationSpace : uint8
{
	Default                        = 0,
	WorldSpace                     = 1,
	WorldRotation                  = 2,
	EInertializationSpace_MAX      = 3,
};

enum class EEvaluatorDataSource : uint8
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2,
};

enum class EEvaluatorMode : uint8
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3,
};

enum class ETransitionRequestQueueMode : uint8
{
	Shared                         = 0,
	Unique                         = 1,
	ETransitionRequestQueueMode_MAX = 2,
};

enum class ETransitionRequestOverwriteMode : uint8
{
	Append                         = 0,
	Ignore                         = 1,
	Overwrite                      = 2,
	ETransitionRequestOverwriteMode_MAX = 3,
};

enum class ETransitionBlendMode : uint8
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2,
};

enum class ETransitionLogicType : uint8
{
	TLT_StandardBlend              = 0,
	TLT_Inertialization            = 1,
	TLT_Custom                     = 2,
	TLT_MAX                        = 3,
};

enum class EAnimPropertyAccessCallSite : uint8
{
	WorkerThread_Unbatched         = 0,
	WorkerThread_Batched_PreEventGraph = 1,
	WorkerThread_Batched_PostEventGraph = 2,
	GameThread_Batched_PreEventGraph = 3,
	GameThread_Batched_PostEventGraph = 4,
	EAnimPropertyAccessCallSite_MAX = 5,
};

enum class EBlendProfileMode : uint8
{
	TimeFactor                     = 0,
	WeightFactor                   = 1,
	BlendMask                      = 2,
	EBlendProfileMode_MAX          = 3,
};

enum class ETransformCurveChannel : uint8
{
	Position                       = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Invalid                        = 3,
	ETransformCurveChannel_MAX     = 4,
};

enum class EVectorCurveChannel : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	Invalid                        = 3,
	EVectorCurveChannel_MAX        = 4,
};

enum class EPostCopyOperation : uint8
{
	None                           = 0,
	LogicalNegateBool              = 1,
	EPostCopyOperation_MAX         = 2,
};

enum class EAnimAlphaInputType : uint8
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3,
};

enum class EMirrorRowType : uint8
{
	Bone                           = 0,
	AnimationNotify                = 1,
	Curve                          = 2,
	SyncMarker                     = 3,
	Custom                         = 4,
	EMirrorRowType_MAX             = 5,
};

enum class EMirrorFindReplaceMethod : uint8
{
	Prefix                         = 0,
	Suffix                         = 1,
	RegularExpression              = 2,
	EMirrorFindReplaceMethod_MAX   = 3,
};

enum class EControlConstraint : uint8
{
	Orientation                    = 0,
	Translation                    = 1,
	MAX                            = 2,
};

enum class EConstraintTransform : uint8
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2,
};

enum class EBoneTranslationRetargetingMode : uint8
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	OrientAndScale                 = 4,
	EBoneTranslationRetargetingMode_MAX = 5,
};

enum class ETimeStretchCurveMapping : uint8
{
	T_Original                     = 0,
	T_TargetMin                    = 1,
	T_TargetMax                    = 2,
	MAX                            = 3,
};

enum class EPreviewAnimationBlueprintApplicationMethod : uint8
{
	LinkedLayers                   = 0,
	LinkedAnimGraph                = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EPrimaryAssetCookRule : uint8
{
	Unknown                        = 0,
	NeverCook                      = 1,
	ProductionNeverCook            = 2,
	DevelopmentCook                = 2,
	DevelopmentAlwaysProductionNeverCook = 3,
	DevelopmentAlwaysCook          = 3,
	DevelopmentAlwaysProductionUnknownCook = 4,
	AlwaysCook                     = 5,
	EPrimaryAssetCookRule_MAX      = 6,
};

enum class EAttenuationDistanceModel : uint8
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6,
};

enum class EAttenuationShape : uint8
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4,
};

enum class ENaturalSoundFalloffMode : uint8
{
	Continues                      = 0,
	Silent                         = 1,
	Hold                           = 2,
	ENaturalSoundFalloffMode_MAX   = 3,
};

enum class EAudioBusChannels : uint8
{
	Mono                           = 0,
	Stereo                         = 1,
	Quad                           = 3,
	FivePointOne                   = 5,
	SevenPointOne                  = 7,
	EAudioBusChannels_MAX          = 8,
};

enum class EVoiceSampleRate : int32
{
	Low16000Hz                     = 16000,
	Normal24000Hz                  = 24000,
	EVoiceSampleRate_MAX           = 24001,
};

enum class EPanningMethod : uint8
{
	Linear                         = 0,
	EqualPower                     = 1,
	EPanningMethod_MAX             = 2,
};

enum class EMonoChannelUpmixMethod : uint8
{
	Linear                         = 0,
	EqualPower                     = 1,
	FullVolume                     = 2,
	EMonoChannelUpmixMethod_MAX    = 3,
};

enum class EDefaultAudioCompressionType : uint8
{
	BinkAudio                      = 0,
	ADPCM                          = 1,
	PCM                            = 2,
	PlatformSpecific               = 3,
	EDefaultAudioCompressionType_MAX = 4,
};

enum class EAudioVolumeLocationState : uint8
{
	InsideTheVolume                = 0,
	OutsideTheVolume               = 1,
	EAudioVolumeLocationState_MAX  = 2,
};

enum class EInterfaceValidResult : uint8
{
	Valid                          = 0,
	Invalid                        = 1,
	EInterfaceValidResult_MAX      = 2,
};

enum class ECameraShakeUpdateResultFlags : uint8
{
	ApplyAsAbsolute                = 1,
	SkipAutoScale                  = 2,
	SkipAutoPlaySpace              = 4,
	Default                        = 0,
	ECameraShakeUpdateResultFlags_MAX = 5,
};

enum class ECameraShakeDurationType : uint8
{
	Fixed                          = 0,
	Infinite                       = 1,
	Custom                         = 2,
	ECameraShakeDurationType_MAX   = 3,
};

enum class ECameraShakeAttenuation : uint8
{
	Linear                         = 0,
	Quadratic                      = 1,
	ECameraShakeAttenuation_MAX    = 2,
};

enum class ECameraAlphaBlendMode : uint8
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2,
};

enum class EAudioFaderCurve : uint8
{
	Linear                         = 0,
	Logarithmic                    = 1,
	SCurve                         = 2,
	Sin                            = 3,
	Count                          = 4,
	EAudioFaderCurve_MAX           = 5,
};

enum class EModulationDestination : uint8
{
	Volume                         = 0,
	Pitch                          = 1,
	Lowpass                        = 2,
	Highpass                       = 3,
	Count                          = 4,
	EModulationDestination_MAX     = 5,
};

enum class ENetMoveType : uint8
{
	ServerMove                     = 0,
	ServerMoveOld                  = 1,
	ServerMoveWithRotation         = 2,
	ServerMoveOldWithRotation      = 3,
	ServerMoveOnlyRotation         = 4,
	ENetMoveType_MAX               = 5,
};

enum class EControllerAnalogStick : uint8
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2,
};

enum class ESyncOption : uint8
{
	Drive                          = 0,
	Passive                        = 1,
	Disabled                       = 2,
	ESyncOption_MAX                = 3,
};

enum class EReflectionSourceType : uint8
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2,
};

enum class EReflectionDFAOOption : uint8
{
	Default                        = 0,
	UsedWithDFAO                   = 1,
	NotUsedWithDFAO                = 2,
	EReflectionDFAOOption_MAX      = 3,
};

enum class ESceneCapturePrimitiveRenderMode : uint8
{
	PRM_LegacySceneCapture         = 0,
	PRM_RenderScenePrimitives      = 1,
	PRM_UseShowOnlyList            = 2,
	PRM_MAX                        = 3,
};

enum class ECustomBoneAttributeLookup : uint8
{
	BoneOnly                       = 0,
	ImmediateParent                = 1,
	ParentHierarchy                = 2,
	ECustomBoneAttributeLookup_MAX = 3,
};

enum class EKinematicBonesUpdateToPhysics : uint8
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class EAnimationMode : uint8
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3,
};

enum class EPhysicsTransformUpdateMode : uint8
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class ESkyAtmosphereTransformMode : uint8
{
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform  = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3,
};

enum class ESplinePointType : uint8
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5,
};

enum class ESplineCoordinateSpace : uint8
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2,
};

enum class ESplineMeshAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3,
};

enum class EVolumetricCloudTracingMaxDistanceMode : uint8
{
	DistanceFromCloudLayerEntryPoint = 0,
	DistanceFromPointOfView        = 1,
	EVolumetricCloudTracingMaxDistanceMode_MAX = 2,
};

enum class ECurveTableMode : uint8
{
	Empty                          = 0,
	SimpleCurves                   = 1,
	RichCurves                     = 2,
	ECurveTableMode_MAX            = 3,
};

enum class EFDataDrivenCVarType : uint8
{
	CVarFloat                      = 0,
	CVarInt                        = 1,
	CVarBool                       = 2,
	FDataDrivenCVarType_MAX        = 3,
};

enum class EEvaluateCurveTableResult : uint8
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2,
};

enum class EReporterLineStyle : uint8
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2,
};

enum class EGraphAxisStyle : uint8
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3,
};

enum class EGraphDataStyle : uint8
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2,
};

enum class ELegendPosition : uint8
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2,
};

enum class EGrammaticalGender : uint8
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4,
};

enum class EGrammaticalNumber : uint8
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2,
};

enum class ETypedElementWorldType : uint8
{
	Game                           = 0,
	Editor                         = 1,
	ETypedElementWorldType_MAX     = 2,
};

enum class ECustomTimeStepSynchronizationState : uint8
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ECustomTimeStepSynchronizationState_MAX = 4,
};

enum class EVectorQuantization : uint8
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	EVectorQuantization_MAX        = 3,
};

enum class ERotatorQuantization : uint8
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2,
};

enum class ETimecodeProviderSynchronizationState : int32
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ETimecodeProviderSynchronizationState_MAX = 4,
};

enum class EFontCacheType : uint8
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2,
};

enum class ERootMotionAccumulateMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2,
};

enum class ERootMotionSourceStatusFlags : uint8
{
	Prepared                       = 1,
	Finished                       = 2,
	MarkedForRemoval               = 4,
	ERootMotionSourceStatusFlags_MAX = 5,
};

enum class ERootMotionSourceSettingsFlags : uint8
{
	UseSensitiveLiftoffCheck       = 1,
	DisablePartialEndTick          = 2,
	IgnoreZAccumulate              = 4,
	ERootMotionSourceSettingsFlags_MAX = 5,
};

enum class ERootMotionFinishVelocityMode : uint8
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class EWindowMode : uint8
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3,
};

enum class ESlateGesture : uint8
{
	None                           = 0,
	Scroll                         = 1,
	Magnify                        = 2,
	Swipe                          = 3,
	Rotate                         = 4,
	LongPress                      = 5,
	ESlateGesture_MAX              = 6,
};

enum class EMIDCreationFlags : uint8
{
	None                           = 0,
	Transient                      = 1,
	EMIDCreationFlags_MAX          = 2,
};

enum class EEasingFunc : uint8
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14,
};

enum class ELerpInterpolationMode : uint8
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3,
};

enum class EMatrixColumns : uint8
{
	First                          = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	EMatrixColumns_MAX             = 4,
};

enum class EDispatchComputeRenderSlot : uint8
{
	CRS_None                       = 0,
	CRS_PreRender                  = 1,
	CRS_PostOpaque                 = 2,
	CRS_Overlay                    = 3,
	CRS_MAX                        = 4,
};

enum class EImportanceWeight : uint8
{
	Luminance                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Alpha                          = 4,
	EImportanceWeight_MAX          = 5,
};

enum class EDecalBlendMode : uint8
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_MAX                        = 17,
};

enum class EMaterialDecalResponse : uint8
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8,
};

enum class EMaterialTranslucencyPass : uint8
{
	MTP_BeforeDOF                  = 0,
	MTP_AfterDOF                   = 1,
	MTP_AfterMotionBlur            = 2,
	MTP_MAX                        = 3,
};

enum class EMeshFeatureImportance : uint8
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6,
};

enum class EStaticMeshReductionTerimationCriterion : uint8
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum class EChartAggregationMode : uint8
{
	TextureSize                    = 0,
	SurfaceArea                    = 1,
	PixelDensity                   = 2,
	UVSize                         = 3,
	EChartAggregationMode_MAX      = 4,
};

enum class ELandscapeCullingPrecision : uint8
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EProxyNormalComputationMethod : uint8
{
	AngleWeighted                  = 0,
	AreaWeighted                   = 1,
	EqualWeighted                  = 2,
	EProxyNormalComputationMethod_MAX = 3,
};

enum class EMeshLODSelectionType : uint8
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4,
};

enum class EMeshMergeType : uint8
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2,
};

enum class EUVOutput : uint8
{
	DoNotOutputChannel             = 0,
	OutputChannel                  = 1,
	EUVOutput_MAX                  = 2,
};

enum class EMeshApproximationType : uint8
{
	MeshAndMaterials               = 0,
	MeshShapeOnly                  = 1,
	EMeshApproximationType_MAX     = 2,
};

enum class EMeshApproximationBaseCappingType : uint8
{
	NoBaseCapping                  = 0,
	ConvexPolygon                  = 1,
	ConvexSolid                    = 2,
	EMeshApproximationBaseCappingType_MAX = 3,
};

enum class EOccludedGeometryFilteringPolicy : uint8
{
	NoOcclusionFiltering           = 0,
	VisibilityBasedFiltering       = 1,
	EOccludedGeometryFilteringPolicy_MAX = 2,
};

enum class EMeshApproximationSimplificationPolicy : uint8
{
	FixedTriangleCount             = 0,
	TrianglesPerArea               = 1,
	GeometricTolerance             = 2,
	EMeshApproximationSimplificationPolicy_MAX = 3,
};

enum class EMeshApproximationGroundPlaneClippingPolicy : uint8
{
	NoGroundClipping               = 0,
	DiscardWithZPlane              = 1,
	CutWithZPlane                  = 2,
	CutAndFillWithZPlane           = 3,
	EMeshApproximationGroundPlaneClippingPolicy_MAX = 4,
};

enum class EMeshApproximationUVGenerationPolicy : uint8
{
	PreferUVAtlas                  = 0,
	PreferXAtlas                   = 1,
	PreferPatchBuilder             = 2,
	EMeshApproximationUVGenerationPolicy_MAX = 3,
};

enum class EVertexPaintAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3,
};

enum class EReplayResult : uint8
{
	Success                        = 0,
	ReplayNotFound                 = 1,
	Corrupt                        = 2,
	UnsupportedCheckpoint          = 3,
	GameSpecific                   = 4,
	InitConnect                    = 5,
	LoadMap                        = 6,
	Serialization                  = 7,
	StreamerError                  = 8,
	ConnectionClosed               = 9,
	MissingArchive                 = 10,
	Unknown                        = 11,
	EReplayResult_MAX              = 12,
};

enum class EPSCPoolMethod : uint8
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	EPSCPoolMethod_MAX             = 5,
};

enum class EPerQualityLevels : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	Cinematic                      = 4,
	Num                            = 5,
	EPerQualityLevels_MAX          = 6,
};

enum class EAngularDriveMode : uint8
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2,
};

enum class EConstraintTransformComponentFlags : uint8
{
	None                           = 0,
	ChildPosition                  = 1,
	ChildRotation                  = 2,
	ParentPosition                 = 4,
	ParentRotation                 = 8,
	AllChild                       = 3,
	AllParent                      = 12,
	AllPosition                    = 5,
	AllRotation                    = 10,
	All                            = 15,
	EConstraintTransformComponentFlags_MAX = 16,
};

enum class EPhysicsAssetSolverType : uint8
{
	RBAN                           = 0,
	World                          = 1,
	EPhysicsAssetSolverType_MAX    = 2,
};

enum class ESettingsDOF : uint8
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4,
};

enum class ESettingsLockedAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5,
};

enum class EDynamicForceFeedbackAction : uint8
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EVoiceBlockReasons : uint8
{
	None                           = 0,
	Muted                          = 1,
	MutedBy                        = 2,
	Gameplay                       = 4,
	Blocked                        = 8,
	BlockedBy                      = 16,
	EVoiceBlockReasons_MAX         = 17,
};

enum class EPostProcessVolumeType : uint8
{
	Generic                        = 0,
	Cave                           = 1,
	Water                          = 2,
	EPostProcessVolumeType_MAX     = 3,
};

enum class EPropertyAccessCopyBatch : uint8
{
	InternalUnbatched              = 0,
	ExternalUnbatched              = 1,
	InternalBatched                = 2,
	ExternalBatched                = 3,
	Count                          = 4,
	EPropertyAccessCopyBatch_MAX   = 5,
};

enum class EPropertyAccessIndirectionType : uint8
{
	Offset                         = 0,
	Object                         = 1,
	Array                          = 2,
	ScriptFunction                 = 3,
	NativeFunction                 = 4,
	EPropertyAccessIndirectionType_MAX = 5,
};

enum class EPropertyAccessObjectType : uint8
{
	None                           = 0,
	Object                         = 1,
	WeakObject                     = 2,
	SoftObject                     = 3,
	EPropertyAccessObjectType_MAX  = 4,
};

enum class EPropertyAccessCopyType : uint8
{
	None                           = 0,
	Plain                          = 1,
	Complex                        = 2,
	Bool                           = 3,
	Struct                         = 4,
	Object                         = 5,
	Name                           = 6,
	Array                          = 7,
	PromoteBoolToByte              = 8,
	PromoteBoolToInt32             = 9,
	PromoteBoolToInt64             = 10,
	PromoteBoolToFloat             = 11,
	PromoteBoolToDouble            = 12,
	PromoteByteToInt32             = 13,
	PromoteByteToInt64             = 14,
	PromoteByteToFloat             = 15,
	PromoteByteToDouble            = 16,
	PromoteInt32ToInt64            = 17,
	PromoteInt32ToFloat            = 18,
	PromoteInt32ToDouble           = 19,
	PromoteFloatToDouble           = 20,
	DemoteDoubleToFloat            = 21,
	PromoteArrayFloatToDouble      = 22,
	DemoteArrayDoubleToFloat       = 23,
	PromoteMapValueFloatToDouble   = 24,
	DemoteMapValueDoubleToFloat    = 25,
	EPropertyAccessCopyType_MAX    = 26,
};

enum class EClearSceneOptions : uint8
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3,
};

enum class ECompositingSampleCount : uint8
{
	One                            = 1,
	Two                            = 2,
	Four                           = 4,
	Eight                          = 8,
	ECompositingSampleCount_MAX    = 9,
};

enum class ECustomDepthStencil : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4,
};

enum class EEarlyZPass : uint8
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4,
};

enum class EVelocityOutputPass : uint8
{
	DepthPass                      = 0,
	BasePass                       = 1,
	AfterBasePass                  = 2,
	EVelocityOutputPass_MAX        = 3,
};

enum class EVertexDeformationOutputsVelocity : uint8
{
	Off                            = 0,
	On                             = 1,
	Auto                           = 2,
	EVertexDeformationOutputsVelocity_MAX = 3,
};

enum class EAlphaChannelMode : uint8
{
	Disabled                       = 0,
	LinearColorSpaceOnly           = 1,
	AllowThroughTonemapper         = 2,
	EAlphaChannelMode_MAX          = 3,
};

enum class EAutoExposureMethodUI : uint8
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3,
};

enum class EDefaultBackBufferPixelFormat : uint8
{
	DBBPF_B8G8R8A8                 = 0,
	DBBPF_A16B16G16R16_DEPRECATED  = 1,
	DBBPF_FloatRGB_DEPRECATED      = 2,
	DBBPF_FloatRGBA                = 3,
	DBBPF_A2B10G10R10              = 4,
	DBBPF_MAX                      = 5,
};

enum class EFixedFoveationLevels : uint8
{
	Disabled                       = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	HighTop                        = 4,
	EFixedFoveationLevels_MAX      = 5,
};

enum class EMobileAntiAliasingMethod : uint8
{
	None                           = 0,
	FXAA                           = 1,
	TemporalAA                     = 2,
	MSAA                           = 3,
	EMobileAntiAliasingMethod_MAX  = 4,
};

enum class EMobileFloatPrecisionMode : uint8
{
	Half                           = 0,
	Full_MaterialExpressionOnly    = 1,
	Full                           = 2,
	EMobileFloatPrecisionMode_MAX  = 3,
};

enum class EMobileShadingPath : uint8
{
	Forward                        = 0,
	Deferred                       = 1,
	EMobileShadingPath_MAX         = 2,
};

enum class EShaderCompressionFormat : uint8
{
	None                           = 0,
	LZ4                            = 1,
	Oodle                          = 2,
	Zlib                           = 3,
	EShaderCompressionFormat_MAX   = 4,
};

enum class ELumenSoftwareTracingMode : uint8
{
	DetailTracing                  = 1,
	GlobalTracing                  = 0,
	ELumenSoftwareTracingMode_MAX  = 2,
};

enum class ELumenRayLightingMode : uint8
{
	SurfaceCache                   = 0,
	HitLighting                    = 2,
	ELumenRayLightingMode_MAX      = 3,
};

enum class EWorkingColorSpace : uint8
{
	SRGB                           = 1,
	Rec2020                        = 2,
	ACESAP0                        = 3,
	ACESAP1                        = 4,
	P3DCI                          = 5,
	P3D65                          = 6,
	Custom                         = 7,
	EWorkingColorSpace_MAX         = 8,
};

enum class ESkeletalMeshAsyncProperties : uint8
{
	None                           = 0,
	Materials                      = 1,
	Skeleton                       = 2,
	RefSkeleton                    = 4,
	RetargetBasePose               = 8,
	RefBasesInvMatrix              = 16,
	MeshClothingAssets             = 32,
	UseLegacyMeshDerivedDataKey    = 64,
	HasActiveClothingAssets        = 128,
	LODSettings                    = 256,
	HasVertexColors                = 512,
	VertexColorGuid                = 1024,
	MorphTargets                   = 2048,
	SkeletalMeshRenderData         = 4096,
	MeshEditorDataObject           = 8192,
	NeverStream                    = 16384,
	OverrideLODStreamingSettings   = 32768,
	SupportLODStreaming            = 65536,
	MaxNumStreamedLODs             = 131072,
	MaxNumOptionalLODs             = 262144,
	ImportedModel                  = 524288,
	LODInfo                        = 1048576,
	SkinWeightProfiles             = 2097152,
	CachedComposedRefPoseMatrices  = 4194304,
	SamplingInfo                   = 8388608,
	NodeMappingData                = 16777216,
	ShadowPhysicsAsset             = 33554432,
	SkelMirrorTable                = 67108864,
	MinLod                         = 134217728,
	DisableBelowMinLodStripping    = 268435456,
	SkelMirrorAxis                 = 536870912,
	SkelMirrorFlipAxis             = 1073741824,
	DefaultAnimationRig            = 2147483648,
	NegativeBoundsExtension        = 4294967296,
	PositiveBoundsExtension        = 8589934592,
	ExtendedBounds                 = 17179869184,
	HasBeenSimplified              = 34359738368,
	EnablePerPolyCollision         = 68719476736,
	BodySetup                      = 137438953472,
	MorphTargetIndexMap            = 274877906944,
	FloorOffset                    = 549755813888,
	ImportedBounds                 = 1099511627776,
	PhysicsAsset                   = 2199023255552,
	AssetImportData                = 4398046511104,
	ThumbnailInfo                  = 8796093022208,
	HasCustomDefaultEditorCamera   = 17592186044416,
	DefaultEditorCameraLocation    = 35184372088832,
	DefaultEditorCameraRotation    = 70368744177664,
	RequiresLODScreenSizeConversion = 140737488355328,
	PostProcessAnimBlueprint       = 281474976710656,
	DefaultEditorCameraLookAt      = 562949953421312,
	PreviewAttachedAssetContainer  = 1125899906842624,
	DefaultEditorCameraOrthoZoom   = 2251799813685248,
	RequiresLODHysteresisConversion = 4503599627370496,
	bSupportRayTracing             = 9007199254740992,
	RayTracingMinLOD               = 18014398509481984,
	ClothLODBiasMode               = 36028797018963968,
	DefaultMeshDeformer            = 72057594037927936,
	All                            = -1,
	ESkeletalMeshAsyncProperties_MAX = 72057594037927937,
};

enum class EClothLODBiasMode : uint8
{
	MappingsToSameLOD              = 0,
	MappingsToMinLOD               = 1,
	MappingsToAnyLOD               = 2,
	EClothLODBiasMode_MAX          = 3,
};

enum class EBoneFilterActionOption : uint8
{
	Remove                         = 0,
	Keep                           = 1,
	Invalid                        = 2,
	EBoneFilterActionOption_MAX    = 3,
};

enum class ESkinCacheUsage : uint8
{
	Auto                           = 0,
	Disabled                       = 255,
	Enabled                        = 1,
	ESkinCacheUsage_MAX            = 256,
};

enum class ESkinCacheDefaultBehavior : uint8
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	ESkinCacheDefaultBehavior_MAX  = 2,
};

enum class ELocalizedLanguage : uint8
{
	Ca                             = 0,
	Cs                             = 1,
	Da                             = 2,
	De                             = 3,
	En                             = 4,
	Es                             = 5,
	Eu                             = 6,
	Fi                             = 7,
	Fr                             = 8,
	Hu                             = 9,
	It                             = 10,
	Ja                             = 11,
	Ka                             = 12,
	Ko                             = 13,
	Nl                             = 14,
	Pl                             = 15,
	Pt_BR                          = 16,
	Ru                             = 17,
	Sv                             = 18,
	Th                             = 19,
	Tr                             = 20,
	Uk                             = 21,
	Zh                             = 22,
	Zh__Hans__CN                   = 23,
	Zh__TW                         = 24,
	LocalizedLanguageMAX           = 25,
	ELocalizedLanguage_MAX         = 26,
};

enum class EVirtualizationMode : uint8
{
	Disabled                       = 0,
	PlayWhenSilent                 = 1,
	Restart                        = 2,
	EVirtualizationMode_MAX        = 3,
};

enum class EMaxConcurrentResolutionRule : uint8
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count                          = 7,
	EMaxConcurrentResolutionRule_MAX = 8,
};

enum class EConcurrencyVolumeScaleMode : int32
{
	Default                        = 0,
	Distance                       = 1,
	Priority                       = 2,
	EConcurrencyVolumeScaleMode_MAX = 3,
};

enum class EModulationRouting : uint8
{
	Disable                        = 0,
	Inherit                        = 1,
	Override                       = 2,
	Union                          = 3,
	EModulationRouting_MAX         = 4,
};

enum class ESourceBusChannels : uint8
{
	Mono                           = 0,
	Stereo                         = 1,
	ESourceBusChannels_MAX         = 2,
};

enum class EFFTSize : uint8
{
	DefaultSize                    = 0,
	Min                            = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	Max                            = 6,
};

enum class EFFTPeakInterpolationMethod : uint8
{
	NearestNeighbor                = 0,
	Linear                         = 1,
	Quadratic                      = 2,
	ConstantQ                      = 3,
	EFFTPeakInterpolationMethod_MAX = 4,
};

enum class EFFTWindowType : uint8
{
	None                           = 0,
	Hamming                        = 1,
	Hann                           = 2,
	Blackman                       = 3,
	EFFTWindowType_MAX             = 4,
};

enum class EAudioSpectrumType : uint8
{
	MagnitudeSpectrum              = 0,
	PowerSpectrum                  = 1,
	Decibel                        = 2,
	EAudioSpectrumType_MAX         = 3,
};

enum class EGainParamMode : uint8
{
	Linear                         = 0,
	Decibels                       = 1,
	EGainParamMode_MAX             = 2,
};

enum class EAudioSpectrumBandPresetType : uint8
{
	KickDrum                       = 0,
	SnareDrum                      = 1,
	Voice                          = 2,
	Cymbals                        = 3,
	EAudioSpectrumBandPresetType_MAX = 4,
};

enum class EAudioRecordingExportType : uint8
{
	SoundWave                      = 0,
	WavFile                        = 1,
	EAudioRecordingExportType_MAX  = 2,
};

enum class ESendLevelControlMethod : uint8
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESendLevelControlMethod_MAX    = 3,
};

enum class ESubmixSendStage : uint8
{
	PostDistanceAttenuation        = 0,
	PreDistanceAttenuation         = 1,
	ESubmixSendStage_MAX           = 2,
};

enum class ENormalMode : uint8
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5,
};

enum class EImportanceLevel : uint8
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7,
};

enum class EOptimizationType : uint8
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2,
};

enum class ETextureEncodeEffort : uint8
{
	Default                        = 0,
	Low                            = 10,
	Normal                         = 20,
	High                           = 30,
	ETextureEncodeEffort_MAX       = 31,
};

enum class ETextureUniversalTiling : uint8
{
	Disabled                       = 0,
	Enabled_256KB                  = 1,
	Enabled_64KB                   = 2,
	ETextureUniversalTiling_MAX    = 3,
};

enum class ETextureEncodeSpeedOverride : uint8
{
	Disabled                       = 255,
	Final                          = 0,
	FinalIfAvailable               = 1,
	Fast                           = 2,
	ETextureEncodeSpeedOverride_MAX = 256,
};

enum class ETextureRenderTargetFormat : uint8
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_RGBA8_SRGB                 = 3,
	RTF_R16f                       = 4,
	RTF_RG16f                      = 5,
	RTF_RGBA16f                    = 6,
	RTF_R32f                       = 7,
	RTF_RG32f                      = 8,
	RTF_RGBA32f                    = 9,
	RTF_RGB10A2                    = 10,
	RTF_MAX                        = 11,
};

enum class ERenderFocusRule : uint8
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4,
};

enum class EUIScalingRule : uint8
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	ScaleToFit                     = 4,
	Custom                         = 5,
	EUIScalingRule_MAX             = 6,
};

enum class EDataLayerState : uint8
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	EDataLayerState_MAX            = 3,
};

enum class EHLODLayerType : uint8
{
	Instancing                     = 0,
	MeshMerge                      = 1,
	MeshSimplify                   = 2,
	MeshApproximate                = 3,
	Custom                         = 4,
	EHLODLayerType_MAX             = 5,
};

enum class EWorldPartitionRuntimeCellState : uint8
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	EWorldPartitionRuntimeCellState_MAX = 3,
};

enum class EWorldPartitionStreamingPerformance : uint8
{
	Good                           = 0,
	Slow                           = 1,
	Critical                       = 2,
	EWorldPartitionStreamingPerformance_MAX = 3,
};

enum class EStreamingSourceTargetBehavior : uint8
{
	Include                        = 0,
	Exclude                        = 1,
	EStreamingSourceTargetBehavior_MAX = 2,
};

enum class EStreamingSourceTargetState : uint8
{
	Loaded                         = 0,
	Activated                      = 1,
	EStreamingSourceTargetState_MAX = 2,
};

enum class EStreamingSourcePriority : uint8
{
	Highest                        = 0,
	High                           = 64,
	Normal                         = 128,
	Low                            = 192,
	Lowest                         = 255,
	Default                        = 128,
	EStreamingSourcePriority_MAX   = 256,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.MaterialInput
struct FMaterialInput
{
public:
	class UMaterialExpression*                   Expression;                                        // 0x0(0x8)(None)
	int32                                        OutputIndex;                                       // 0x8(0x4)(None)
	class FName                                  InputName;                                         // 0xC(0x8)(None)
	int32                                        Mask;                                              // 0x14(0x4)(None)
	int32                                        MaskR;                                             // 0x18(0x4)(None)
	int32                                        MaskG;                                             // 0x1C(0x4)(None)
	int32                                        MaskB;                                             // 0x20(0x4)(None)
	int32                                        MaskA;                                             // 0x24(0x4)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.ColorMaterialInput
struct FColorMaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_305 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Constant;                                          // 0x2C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DistributionLookupTable
struct FDistributionLookupTable
{
public:
	float                                        TimeScale;                                         // 0x0(0x4)(None)
	float                                        TimeBias;                                          // 0x4(0x4)(None)
	TArray<float>                                Values;                                            // 0x8(0x10)(None)
	uint8                                        Op;                                                // 0x18(0x1)(None)
	uint8                                        EntryCount;                                        // 0x19(0x1)(None)
	uint8                                        EntryStride;                                       // 0x1A(0x1)(None)
	uint8                                        SubEntryStride;                                    // 0x1B(0x1)(None)
	uint8                                        LockFlag;                                          // 0x1C(0x1)(None)
	uint8                                        Pad_38F6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ExpressionInput
struct FExpressionInput
{
public:
	class UMaterialExpression*                   Expression;                                        // 0x0(0x8)(None)
	int32                                        OutputIndex;                                       // 0x8(0x4)(None)
	class FName                                  InputName;                                         // 0xC(0x8)(None)
	int32                                        Mask;                                              // 0x14(0x4)(None)
	int32                                        MaskR;                                             // 0x18(0x4)(None)
	int32                                        MaskG;                                             // 0x1C(0x4)(None)
	int32                                        MaskB;                                             // 0x20(0x4)(None)
	int32                                        MaskA;                                             // 0x24(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.ExpressionOutput
struct FExpressionOutput
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(None)
	int32                                        Mask;                                              // 0x8(0x4)(None)
	int32                                        MaskR;                                             // 0xC(0x4)(None)
	int32                                        MaskG;                                             // 0x10(0x4)(None)
	int32                                        MaskB;                                             // 0x14(0x4)(None)
	int32                                        MaskA;                                             // 0x18(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.FloatDistribution
struct FFloatDistribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x20)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.FloatRK4SpringInterpolator
struct FFloatRK4SpringInterpolator
{
public:
	float                                        StiffnessConstant;                                 // 0x0(0x4)(None)
	float                                        DampeningRatio;                                    // 0x4(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.FormatArgumentData
struct FFormatArgumentData
{
public:
	class FString                                ArgumentName;                                      // 0x0(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EFormatArgumentType               ArgumentValueType;                                 // 0x10(0x1)(None)
	uint8                                        Pad_38F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ArgumentValue;                                     // 0x18(0x18)(None)
	int64                                        ArgumentValueInt;                                  // 0x30(0x8)(None)
	float                                        ArgumentValueFloat;                                // 0x38(0x4)(None)
	uint8                                        Pad_38F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ArgumentValueDouble;                               // 0x40(0x8)(None)
	enum class ETextGender                       ArgumentValueGender;                               // 0x48(0x1)(None)
	uint8                                        Pad_38F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.MaterialAttributesInput
struct FMaterialAttributesInput : public FExpressionInput
{
public:
	int64                                        PropertyConnectedBitmask;                          // 0x28(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.RawDistribution
struct FRawDistribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x20)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.ScalarMaterialInput
struct FScalarMaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_306 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Constant;                                          // 0x2C(0x4)(None)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct Engine.ShadingModelMaterialInput
struct FShadingModelMaterialInput : public FMaterialInput
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct Engine.StrataMaterialInput
struct FStrataMaterialInput : public FMaterialInput
{
public:
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Engine.Vector2MaterialInput
struct FVector2MaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_307 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConstantX;                                         // 0x2C(0x4)(None)
	float                                        ConstantY;                                         // 0x30(0x4)(None)
	uint8                                        Pad_38FC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.Vector4Distribution
struct FVector4Distribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.VectorDistribution
struct FVectorDistribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x20)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Engine.VectorMaterialInput
struct FVectorMaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_308 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector3f                             Constant;                                          // 0x2C(0xC)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.VectorRK4SpringInterpolator
struct FVectorRK4SpringInterpolator
{
public:
	float                                        StiffnessConstant;                                 // 0x0(0x4)(None)
	float                                        DampeningRatio;                                    // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimDataModelNotifPayload
struct FAnimDataModelNotifPayload
{
public:
	uint8                                        Pad_38FF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.Vector_NetQuantize
struct FVector_NetQuantize : public FVector
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.Vector_NetQuantizeNormal
struct FVector_NetQuantizeNormal : public FVector
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ActorInstanceHandle
struct FActorInstanceHandle
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(None)
	uint8                                        Pad_3900[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Engine.HitResult
struct FHitResult
{
public:
	int32                                        FaceIndex;                                         // 0x0(0x4)(None)
	float                                        Time;                                              // 0x4(0x4)(None)
	float                                        Distance;                                          // 0x8(0x4)(None)
	uint8                                        Pad_3901[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   Location;                                          // 0x10(0x18)(None)
	struct FVector_NetQuantize                   ImpactPoint;                                       // 0x28(0x18)(None)
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x40(0x18)(None)
	struct FVector_NetQuantizeNormal             ImpactNormal;                                      // 0x58(0x18)(None)
	struct FVector_NetQuantize                   TraceStart;                                        // 0x70(0x18)(None)
	struct FVector_NetQuantize                   TraceEnd;                                          // 0x88(0x18)(None)
	float                                        PenetrationDepth;                                  // 0xA0(0x4)(None)
	int32                                        MyItem;                                            // 0xA4(0x4)(None)
	int32                                        Item;                                              // 0xA8(0x4)(None)
	uint8                                        ElementIndex;                                      // 0xAC(0x1)(None)
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10xAD(0x1)(None)
	uint8                                        bStartPenetrating : 1;                             // Mask: 0x2, PropSize: 0x10xAD(0x1)(None)
	uint8                                        BitPad_309 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3903[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UPhysicalMaterial>      PhysMaterial;                                      // 0xB4(0x8)(ZeroConstructor)
	struct FActorInstanceHandle                  HitObjectHandle;                                   // 0xBC(0x18)(ZeroConstructor)
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0xD4(0x8)(None)
	class FName                                  BoneName;                                          // 0xDC(0x8)(None)
	class FName                                  MyBoneName;                                        // 0xE4(0x8)(None)
	uint8                                        Pad_3904[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SubtitleCue
struct FSubtitleCue
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	float                                        Time;                                              // 0x18(0x4)(None)
	uint8                                        Pad_3905[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.PlatformInterfaceData
struct FPlatformInterfaceData
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(None)
	enum class EPlatformInterfaceDataType        Type;                                              // 0x8(0x1)(None)
	uint8                                        Pad_3906[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntValue;                                          // 0xC(0x4)(None)
	float                                        FloatValue;                                        // 0x10(0x4)(None)
	uint8                                        Pad_3907[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringValue;                                       // 0x18(0x10)(None)
	class UObject*                               ObjectValue;                                       // 0x28(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PlatformInterfaceDelegateResult
struct FPlatformInterfaceDelegateResult
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(None)
	uint8                                        Pad_3908[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlatformInterfaceData                Data;                                              // 0x8(0x30)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BranchingPointNotifyPayload
struct FBranchingPointNotifyPayload
{
public:
	uint8                                        Pad_390A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.TickFunction
struct FTickFunction
{
public:
	uint8                                        Pad_390B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETickingGroup                     TickGroup;                                         // 0x8(0x1)(None)
	enum class ETickingGroup                     EndTickGroup;                                      // 0x9(0x1)(None)
	uint8                                        bTickEvenWhenPaused : 1;                           // Mask: 0x1, PropSize: 0x10xA(0x1)(None)
	uint8                                        bCanEverTick : 1;                                  // Mask: 0x2, PropSize: 0x10xA(0x1)(None)
	uint8                                        bStartWithTickEnabled : 1;                         // Mask: 0x4, PropSize: 0x10xA(0x1)(None)
	uint8                                        bAllowTickOnDedicatedServer : 1;                   // Mask: 0x8, PropSize: 0x10xA(0x1)(None)
	uint8                                        BitPad_30A : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_390C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickInterval;                                      // 0xC(0x4)(None)
	uint8                                        Pad_390E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Engine.ActorComponentTickFunction
struct FActorComponentTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_390F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bSavedComponentTickState : 1;                      // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        bSavedComponentTickStateValue : 1;                 // Mask: 0x2, PropSize: 0x10x30(0x1)(None)
	uint8                                        Pad_3910[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.InterpControlPoint
struct FInterpControlPoint
{
public:
	struct FVector                               PositionControlPoint;                              // 0x0(0x18)(None)
	bool                                         bPositionIsRelative;                               // 0x18(0x1)(None)
	uint8                                        Pad_3911[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DebugFloatHistory
struct FDebugFloatHistory
{
public:
	TArray<float>                                Samples;                                           // 0x0(0x10)(None)
	int32                                        MaxSamples;                                        // 0x10(0x4)(None)
	float                                        MinValue;                                          // 0x14(0x4)(None)
	float                                        MaxValue;                                          // 0x18(0x4)(None)
	bool                                         bAutoAdjustMinMax;                                 // 0x1C(0x1)(None)
	uint8                                        Pad_3913[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LatentActionInfo
struct FLatentActionInfo
{
public:
	int32                                        Linkage;                                           // 0x0(0x4)(None)
	int32                                        UUID;                                              // 0x4(0x4)(None)
	class FName                                  ExecutionFunction;                                 // 0x8(0x8)(None)
	class UObject*                               CallbackTarget;                                    // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.TimerHandle
struct FTimerHandle
{
public:
	uint64                                       Handle;                                            // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CollisionProfileName
struct FCollisionProfileName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.GenericStruct
struct FGenericStruct
{
public:
	int32                                        Data;                                              // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.UserActivity
struct FUserActivity
{
public:
	class FString                                ActionName;                                        // 0x0(0x10)(None)
	uint8                                        Pad_3918[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.MaterialGPUMessagePrimitiveInfo
struct FMaterialGPUMessagePrimitiveInfo
{
public:
	int32                                        PrimitiveId;                                       // 0x0(0x4)(None)
	int32                                        InstanceId;                                        // 0x4(0x4)(None)
	int32                                        RowIdx;                                            // 0x8(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DamageEvent
struct FDamageEvent
{
public:
	uint8                                        Pad_391A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Impulse;                                           // 0x8(0x4)(None)
	float                                        OriginalDamage;                                    // 0xC(0x4)(None)
	int32                                        InstanceBodyIndex;                                 // 0x10(0x4)(None)
	int32                                        TypeIndex;                                         // 0x14(0x4)(None)
	class UClass*                                DamageTypeClass;                                   // 0x18(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.BPNetExecParams
struct FBPNetExecParams
{
public:
	int32                                        IntParam1;                                         // 0x0(0x4)(None)
	int32                                        IntParam2;                                         // 0x4(0x4)(None)
	int32                                        IntParam3;                                         // 0x8(0x4)(None)
	uint8                                        Pad_391C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                IntArrayParam1;                                    // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	float                                        FloatParam1;                                       // 0x20(0x4)(None)
	float                                        FloatParam2;                                       // 0x24(0x4)(None)
	float                                        FloatParam3;                                       // 0x28(0x4)(None)
	uint8                                        Pad_391D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FloatArrayParam1;                                  // 0x30(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               ObjParam1;                                         // 0x40(0x8)(ZeroConstructor)
	class UObject*                               ObjParam2;                                         // 0x48(0x8)(ZeroConstructor)
	class UObject*                               ObjParam3;                                         // 0x50(0x8)(None)
	class FString                                StringParam1;                                      // 0x58(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.BodyInstanceAsyncPhysicsTickHandle
struct FBodyInstanceAsyncPhysicsTickHandle
{
public:
	uint8                                        Pad_391F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.CollisionResponseSet
struct FCollisionResponseSet
{
public:
	TArray<enum class ECollisionChannel>         Channels;                                          // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<enum class ECollisionResponse>        Responses;                                         // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WalkableSlopeOverride
struct FWalkableSlopeOverride
{
public:
	enum class EWalkableSlopeBehavior            WalkableSlopeBehavior;                             // 0x0(0x1)(None)
	uint8                                        Pad_3921[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkableSlopeAngle;                                // 0x4(0x4)(None)
	uint8                                        Pad_3923[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.CollisionResponseContainer
struct FCollisionResponseContainer
{
public:
	enum class ECollisionResponse                WorldStatic;                                       // 0x0(0x1)(None)
	enum class ECollisionResponse                WorldDynamic;                                      // 0x1(0x1)(None)
	enum class ECollisionResponse                Visibility;                                        // 0x2(0x1)(None)
	enum class ECollisionResponse                PhysicsBody;                                       // 0x3(0x1)(None)
	enum class ECollisionResponse                Destructible;                                      // 0x4(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel1;                                 // 0x5(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel2;                                 // 0x6(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel3;                                 // 0x7(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel4;                                 // 0x8(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel5;                                 // 0x9(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel6;                                 // 0xA(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel7;                                 // 0xB(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel8;                                 // 0xC(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel9;                                 // 0xD(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel10;                                // 0xE(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel11;                                // 0xF(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel12;                                // 0x10(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel13;                                // 0x11(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel14;                                // 0x12(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel15;                                // 0x13(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel16;                                // 0x14(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel17;                                // 0x15(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel18;                                // 0x16(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel19;                                // 0x17(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel20;                                // 0x18(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel21;                                // 0x19(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel22;                                // 0x1A(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel23;                                // 0x1B(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel24;                                // 0x1C(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel25;                                // 0x1D(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel26;                                // 0x1E(0x1)(None)
	enum class ECollisionResponse                GameTraceChannel27;                                // 0x1F(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ResponseChannel
struct FResponseChannel
{
public:
	class FName                                  Channel;                                           // 0x0(0x8)(None)
	enum class ECollisionResponse                Response;                                          // 0x8(0x1)(None)
	uint8                                        Pad_3925[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.CollisionResponse
struct FCollisionResponse
{
public:
	struct FCollisionResponseContainer           ResponseToChannels;                                // 0x0(0x20)(None)
	TArray<struct FResponseChannel>              ResponseArray;                                     // 0x20(0x10)(None)
};

// 0x120 (0x138 - 0x18)
// ScriptStruct Engine.BodyInstance
struct FBodyInstance : public FBodyInstanceCore
{
public:
	uint8                                        Pad_3926[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionChannel                 ObjectType;                                        // 0x1E(0x1)(None)
	uint8                                        Pad_3927[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x20(0x1)(None)
	uint8                                        Pad_3928[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESleepFamily                      SleepFamily;                                       // 0x22(0x1)(None)
	enum class EDOFMode                          DOFMode;                                           // 0x23(0x1)(None)
	uint8                                        bUseCCD : 1;                                       // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        bIgnoreAnalyticCollisions : 1;                     // Mask: 0x2, PropSize: 0x10x24(0x1)(None)
	uint8                                        bNotifyRigidBodyCollision : 1;                     // Mask: 0x4, PropSize: 0x10x24(0x1)(None)
	uint8                                        BitPad_30B : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bSmoothEdgeCollisions : 1;                         // Mask: 0x10, PropSize: 0x10x24(0x1)(None)
	uint8                                        BitPad_30C : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bUseSpecificBodyArmorType : 1;                     // Mask: 0x40, PropSize: 0x10x24(0x1)(None)
	uint8                                        bIsShieldHolder : 1;                               // Mask: 0x80, PropSize: 0x10x24(0x1)(None)
	uint8                                        bLockTranslation : 1;                              // Mask: 0x1, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockRotation : 1;                                 // Mask: 0x2, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockXTranslation : 1;                             // Mask: 0x4, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockYTranslation : 1;                             // Mask: 0x8, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockZTranslation : 1;                             // Mask: 0x10, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockXRotation : 1;                                // Mask: 0x20, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockYRotation : 1;                                // Mask: 0x40, PropSize: 0x10x25(0x1)(None)
	uint8                                        bLockZRotation : 1;                                // Mask: 0x80, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverrideMaxAngularVelocity : 1;                   // Mask: 0x1, PropSize: 0x10x26(0x1)(None)
	uint8                                        BitPad_30D : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bOverrideMaxDepenetrationVelocity : 1;             // Mask: 0x8, PropSize: 0x10x26(0x1)(None)
	uint8                                        bOverrideWalkableSlopeOnInstance : 1;              // Mask: 0x10, PropSize: 0x10x26(0x1)(None)
	uint8                                        bInterpolateWhenSubStepping : 1;                   // Mask: 0x20, PropSize: 0x10x26(0x1)(None)
	uint8                                        BitPad_30E : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bInertiaConditioning : 1;                          // Mask: 0x80, PropSize: 0x10x26(0x1)(None)
	uint8                                        Pad_392B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale3D;                                           // 0x28(0x18)(None)
	class FName                                  CollisionProfileName;                              // 0x40(0x8)(None)
	uint8                                        PositionSolverIterationCount;                      // 0x48(0x1)(None)
	uint8                                        VelocitySolverIterationCount;                      // 0x49(0x1)(None)
	uint8                                        Pad_392C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCollisionResponse                    CollisionResponses;                                // 0x50(0x30)(None)
	float                                        MaxDepenetrationVelocity;                          // 0x80(0x4)(None)
	float                                        MassInKgOverride;                                  // 0x84(0x4)(None)
	uint8                                        Pad_392D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearDamping;                                     // 0x90(0x4)(None)
	float                                        AngularDamping;                                    // 0x94(0x4)(None)
	struct FVector                               CustomDOFPlaneNormal;                              // 0x98(0x18)(None)
	struct FVector                               COMNudge;                                          // 0xB0(0x18)(None)
	float                                        MassScale;                                         // 0xC8(0x4)(None)
	uint8                                        Pad_392E[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWalkableSlopeOverride                WalkableSlopeOverride;                             // 0xE0(0x10)(None)
	class UPhysicalMaterial*                     PhysMaterialOverride;                              // 0xF0(0x8)(None)
	float                                        MaxAngularVelocity;                                // 0xF8(0x4)(None)
	float                                        PhysicsBlendWeight;                                // 0xFC(0x4)(None)
	uint8                                        Pad_392F[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPrimalEquipmentType              BodyArmorType;                                     // 0x130(0x1)(None)
	uint8                                        Pad_3930[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CustomPrimitiveData
struct FCustomPrimitiveData
{
public:
	TArray<float>                                Data;                                              // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.LightingChannels
struct FLightingChannels
{
public:
	uint8                                        bChannel0 : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bChannel1 : 1;                                     // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bChannel2 : 1;                                     // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BoneReference
struct FBoneReference
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	uint8                                        Pad_397E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimNode_Base
struct FAnimNode_Base
{
public:
	uint8                                        Pad_397F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InputRange
struct FInputRange
{
public:
	float                                        Min;                                               // 0x0(0x4)(None)
	float                                        Max;                                               // 0x4(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.InputScaleBiasClamp
struct FInputScaleBiasClamp
{
public:
	bool                                         bMapRange;                                         // 0x0(0x1)(None)
	bool                                         bClampResult;                                      // 0x1(0x1)(None)
	bool                                         bInterpResult;                                     // 0x2(0x1)(None)
	uint8                                        Pad_3980[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x4(0x8)(None)
	struct FInputRange                           OutRange;                                          // 0xC(0x8)(None)
	float                                        Scale;                                             // 0x14(0x4)(None)
	float                                        Bias;                                              // 0x18(0x4)(None)
	float                                        ClampMin;                                          // 0x1C(0x4)(None)
	float                                        ClampMax;                                          // 0x20(0x4)(None)
	float                                        InterpSpeedIncreasing;                             // 0x24(0x4)(None)
	float                                        InterpSpeedDecreasing;                             // 0x28(0x4)(None)
	uint8                                        Pad_3981[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AlphaBlend
struct FAlphaBlend
{
public:
	class UCurveFloat*                           CustomCurve;                                       // 0x0(0x8)(None)
	float                                        BlendTime;                                         // 0x8(0x4)(None)
	uint8                                        Pad_3982[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x24(0x1)(None)
	uint8                                        Pad_3983[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.InputAlphaBoolBlend
struct FInputAlphaBoolBlend
{
public:
	float                                        BlendInTime;                                       // 0x0(0x4)(None)
	float                                        BlendOutTime;                                      // 0x4(0x4)(None)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x8(0x1)(None)
	bool                                         bInitialized;                                      // 0x9(0x1)(None)
	uint8                                        Pad_3984[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0x10(0x8)(ZeroConstructor)
	struct FAlphaBlend                           AlphaBlend;                                        // 0x18(0x30)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InputScaleBias
struct FInputScaleBias
{
public:
	float                                        Scale;                                             // 0x0(0x4)(None)
	float                                        Bias;                                              // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PoseLinkBase
struct FPoseLinkBase
{
public:
	uint8                                        Pad_3985[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LinkID;                                            // 0x8(0x4)(None)
	uint8                                        Pad_3986[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.ComponentSpacePoseLink
struct FComponentSpacePoseLink : public FPoseLinkBase
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.InputClampConstants
struct FInputClampConstants
{
public:
	bool                                         bClampResult;                                      // 0x0(0x1)(None)
	bool                                         bInterpResult;                                     // 0x1(0x1)(None)
	uint8                                        Pad_3987[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampMin;                                          // 0x4(0x4)(None)
	float                                        ClampMax;                                          // 0x8(0x4)(None)
	float                                        InterpSpeedIncreasing;                             // 0xC(0x4)(None)
	float                                        InterpSpeedDecreasing;                             // 0x10(0x4)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.KeyHandleLookupTable
struct FKeyHandleLookupTable
{
public:
	uint8                                        Pad_3988[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2F (0x30 - 0x1)
// ScriptStruct Engine.UniqueNetIdRepl
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_3989[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ReplicationBytes;                                  // 0x20(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MeshDisplacementMap
struct FMeshDisplacementMap
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(None)
	float                                        Magnitude;                                         // 0x8(0x4)(None)
	float                                        Center;                                            // 0xC(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.MeshNaniteSettings
struct FMeshNaniteSettings
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bPreserveArea : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_315 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_398A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PositionPrecision;                                 // 0x4(0x4)(None)
	int32                                        NormalPrecision;                                   // 0x8(0x4)(None)
	uint32                                       TargetMinimumResidencyInKB;                        // 0xC(0x4)(None)
	float                                        KeepPercentTriangles;                              // 0x10(0x4)(None)
	float                                        TrimRelativeError;                                 // 0x14(0x4)(None)
	float                                        FallbackPercentTriangles;                          // 0x18(0x4)(None)
	float                                        FallbackRelativeError;                             // 0x1C(0x4)(None)
	int32                                        DisplacementUVChannel;                             // 0x20(0x4)(None)
	uint8                                        Pad_398B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMeshDisplacementMap>          DisplacementMaps;                                  // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DataCacheDuplicatedObjectData
struct FDataCacheDuplicatedObjectData
{
public:
	uint8                                        Pad_398C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.InstanceCacheDataBase
struct FInstanceCacheDataBase
{
public:
	uint8                                        Pad_398D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SavedProperties;                                   // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FDataCacheDuplicatedObjectData        UniqueTransientPackage;                            // 0x18(0x10)(None)
	TArray<struct FDataCacheDuplicatedObjectData> DuplicatedObjects;                                 // 0x28(0x10)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       ReferencedObjects;                                 // 0x38(0x10)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ReferencedNames;                                   // 0x48(0x10)(None)
};

// 0x10 (0x68 - 0x58)
// ScriptStruct Engine.ActorComponentInstanceData
struct FActorComponentInstanceData : public FInstanceCacheDataBase
{
public:
	class UObject*                               SourceComponentTemplate;                           // 0x58(0x8)(ZeroConstructor)
	enum class EComponentCreationMethod          SourceComponentCreationMethod;                     // 0x60(0x1)(None)
	uint8                                        Pad_398E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SourceComponentTypeSerializedIndex;                // 0x64(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.BranchFilter
struct FBranchFilter
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	int32                                        BlendDepth;                                        // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InputBlendPose
struct FInputBlendPose
{
public:
	TArray<struct FBranchFilter>                 BranchFilters;                                     // 0x0(0x10)(None)
};

// 0x48 (0x58 - 0x10)
// ScriptStruct Engine.AnimNode_CustomProperty
struct FAnimNode_CustomProperty : public FAnimNode_Base
{
public:
	TArray<class FName>                          SourcePropertyNames;                               // 0x10(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FName>                          DestPropertyNames;                                 // 0x20(0x10)(None)
	class UObject*                               TargetInstance;                                    // 0x30(0x8)(None)
	uint8                                        Pad_398F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.PoseLink
struct FPoseLink : public FPoseLinkBase
{
public:
};

// 0x878 (0x878 - 0x0)
// ScriptStruct Engine.AnimInstanceProxy
struct FAnimInstanceProxy
{
public:
	uint8                                        Pad_3990[0x878];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BaseComponentReference
struct FBaseComponentReference
{
public:
	class FName                                  ComponentProperty;                                 // 0x0(0x8)(None)
	class FString                                PathToComponent;                                   // 0x8(0x10)(None)
	TWeakObjectPtr<class UActorComponent>        OverrideComponent;                                 // 0x18(0x8)(None)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct Engine.ComponentReference
struct FComponentReference : public FBaseComponentReference
{
public:
	TWeakObjectPtr<class AActor>                 OtherActor;                                        // 0x20(0x8)(ZeroConstructor)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.KeyHandleMap
struct FKeyHandleMap
{
public:
	uint8                                        Pad_3991[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.IndexedCurve
struct FIndexedCurve
{
public:
	uint8                                        Pad_3992[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyHandleMap                         KeyHandlesToIndices;                               // 0x8(0x60)(None)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct Engine.RealCurve
struct FRealCurve : public FIndexedCurve
{
public:
	float                                        DefaultValue;                                      // 0x68(0x4)(None)
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x6C(0x1)(None)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x6D(0x1)(None)
	uint8                                        Pad_3993[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.RichCurveKey
struct FRichCurveKey
{
public:
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x0(0x1)(None)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x1(0x1)(None)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x2(0x1)(None)
	uint8                                        Pad_3994[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time;                                              // 0x4(0x4)(None)
	float                                        Value;                                             // 0x8(0x4)(None)
	float                                        ArriveTangent;                                     // 0xC(0x4)(None)
	float                                        ArriveTangentWeight;                               // 0x10(0x4)(None)
	float                                        LeaveTangent;                                      // 0x14(0x4)(None)
	float                                        LeaveTangentWeight;                                // 0x18(0x4)(None)
};

// 0x10 (0x80 - 0x70)
// ScriptStruct Engine.RichCurve
struct FRichCurve : public FRealCurve
{
public:
	TArray<struct FRichCurveKey>                 Keys;                                              // 0x70(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.RuntimeFloatCurve
struct FRuntimeFloatCurve
{
public:
	struct FRichCurve                            EditorCurveData;                                   // 0x0(0x80)(None)
	class UCurveFloat*                           ExternalCurve;                                     // 0x80(0x8)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.FloatSpringState
struct FFloatSpringState
{
public:
	uint8                                        Pad_3995[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.VectorSpringState
struct FVectorSpringState
{
public:
	uint8                                        Pad_3996[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.QuaternionSpringState
struct FQuaternionSpringState
{
public:
	uint8                                        Pad_3997[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.SplineCurves
struct FSplineCurves
{
public:
	struct FInterpCurveVector                    Position;                                          // 0x0(0x18)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FInterpCurveQuat                      Rotation;                                          // 0x18(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FInterpCurveVector                    Scale;                                             // 0x30(0x18)(SimpleDisplay, AdvancedDisplay, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FInterpCurveFloat                     ReparamTable;                                      // 0x48(0x18)(None)
	class USplineMetadata*                       MetaData;                                          // 0x60(0x8)(None)
	uint32                                       Version;                                           // 0x68(0x4)(None)
	uint8                                        Pad_3998[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Engine.ISMComponentDescriptorBase
struct FISMComponentDescriptorBase
{
public:
	uint32                                       Hash;                                              // 0x0(0x4)(None)
	uint8                                        Pad_3999[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ComponentClass;                                    // 0x8(0x8)(ZeroConstructor)
	enum class EComponentMobility                Mobility;                                          // 0x10(0x1)(None)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x11(0x1)(None)
	enum class ELightmapType                     LightmapType;                                      // 0x12(0x1)(None)
	struct FLightingChannels                     LightingChannels;                                  // 0x13(0x1)(None)
	int32                                        RayTracingGroupId;                                 // 0x14(0x4)(None)
	enum class ERayTracingGroupCullingPriority   RayTracingGroupCullingPriority;                    // 0x18(0x1)(None)
	enum class EHasCustomNavigableGeometry       bHasCustomNavigableGeometry;                       // 0x19(0x1)(None)
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x1A(0x1)(None)
	uint8                                        Pad_399A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x20(0x138)(None)
	int32                                        InstanceStartCullDistance;                         // 0x158(0x4)(None)
	int32                                        InstanceEndCullDistance;                           // 0x15C(0x4)(None)
	int32                                        VirtualTextureCullMips;                            // 0x160(0x4)(None)
	int32                                        TranslucencySortPriority;                          // 0x164(0x4)(None)
	int32                                        OverriddenLightMapRes;                             // 0x168(0x4)(None)
	int32                                        CustomDepthStencilValue;                           // 0x16C(0x4)(None)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x1, PropSize: 0x10x170(0x1)(None)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x2, PropSize: 0x10x170(0x1)(None)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x4, PropSize: 0x10x170(0x1)(None)
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x8, PropSize: 0x10x170(0x1)(None)
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x10, PropSize: 0x10x170(0x1)(None)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x20, PropSize: 0x10x170(0x1)(None)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x40, PropSize: 0x10x170(0x1)(None)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x80, PropSize: 0x10x170(0x1)(None)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x1, PropSize: 0x10x171(0x1)(None)
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x2, PropSize: 0x10x171(0x1)(None)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x4, PropSize: 0x10x171(0x1)(None)
	uint8                                        bEnableDiscardOnLoad : 1;                          // Mask: 0x8, PropSize: 0x10x171(0x1)(None)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x10, PropSize: 0x10x171(0x1)(None)
	uint8                                        bVisibleInRayTracing : 1;                          // Mask: 0x20, PropSize: 0x10x171(0x1)(None)
	uint8                                        bHiddenInGame : 1;                                 // Mask: 0x40, PropSize: 0x10x171(0x1)(None)
	uint8                                        bIsEditorOnly : 1;                                 // Mask: 0x80, PropSize: 0x10x171(0x1)(None)
	uint8                                        bVisible : 1;                                      // Mask: 0x1, PropSize: 0x10x172(0x1)(None)
	uint8                                        bEvaluateWorldPositionOffset : 1;                  // Mask: 0x2, PropSize: 0x10x172(0x1)(None)
	uint8                                        bReverseCulling : 1;                               // Mask: 0x4, PropSize: 0x10x172(0x1)(None)
	uint8                                        bUseDefaultCollision : 1;                          // Mask: 0x8, PropSize: 0x10x172(0x1)(None)
	uint8                                        bGenerateOverlapEvents : 1;                        // Mask: 0x10, PropSize: 0x10x172(0x1)(None)
	uint8                                        BitPad_316 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_399B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorldPositionOffsetDisableDistance;                // 0x174(0x4)(None)
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x178(0x1)(None)
	uint8                                        Pad_399C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x1D0 - 0x180)
// ScriptStruct Engine.SoftISMComponentDescriptor
struct FSoftISMComponentDescriptor : public FISMComponentDescriptorBase
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x180(0x30)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UMaterialInterface>> OverrideMaterials;                                 // 0x1B0(0x10)(ZeroConstructor, AutoWeak, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class URuntimeVirtualTexture>> RuntimeVirtualTextures;                            // 0x1C0(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.KShapeElem
struct FKShapeElem
{
public:
	uint8                                        Pad_399D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RestOffset;                                        // 0x8(0x4)(None)
	class FName                                  Name;                                              // 0xC(0x8)(None)
	uint8                                        Pad_399E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bContributeToMass : 1;                             // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_317 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x19(0x1)(None)
	uint8                                        Pad_399F[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.TableRowBase
struct FTableRowBase
{
public:
	uint8                                        Pad_39A0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.SoundModulationDestinationSettings
struct FSoundModulationDestinationSettings
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
	uint8                                        Pad_39A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundModulatorBase*                   Modulator;                                         // 0x8(0x8)(ZeroConstructor)
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x10(0x50)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.PerPlatformInt
struct FPerPlatformInt
{
public:
	int32                                        Default;                                           // 0x0(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.PerQualityLevelInt
struct FPerQualityLevelInt
{
public:
	uint8                                        Pad_39A2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Default;                                           // 0x10(0x4)(None)
	uint8                                        Pad_39A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           PerQuality;                                        // 0x18(0x50)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.PerQualityLevelFloat
struct FPerQualityLevelFloat
{
public:
	uint8                                        Pad_39A4[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Default;                                           // 0x10(0x4)(None)
	uint8                                        Pad_39A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, float>                           PerQuality;                                        // 0x18(0x50)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.PerPlatformFloat
struct FPerPlatformFloat
{
public:
	float                                        Default;                                           // 0x0(0x4)(None)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Engine.AnimNode_Root
struct FAnimNode_Root : public FAnimNode_Base
{
public:
	struct FPoseLink                             Result;                                            // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimNodeReference
struct FAnimNodeReference
{
public:
	uint8                                        Pad_39A6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.AnimNode_AssetPlayerRelevancyBase
struct FAnimNode_AssetPlayerRelevancyBase : public FAnimNode_Base
{
public:
};

// 0x28 (0x38 - 0x10)
// ScriptStruct Engine.AnimNode_AssetPlayerBase
struct FAnimNode_AssetPlayerBase : public FAnimNode_AssetPlayerRelevancyBase
{
public:
	uint8                                        Pad_39A7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x20(0x4)(None)
	float                                        InternalTimeAccumulator;                           // 0x24(0x4)(None)
	uint8                                        Pad_39A8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PerBoneBlendWeight
struct FPerBoneBlendWeight
{
public:
	int32                                        SourceIndex;                                       // 0x0(0x4)(None)
	float                                        BlendWeight;                                       // 0x4(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PoseSnapshot
struct FPoseSnapshot
{
public:
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(None)
	class FName                                  SkeletalMeshName;                                  // 0x20(0x8)(None)
	class FName                                  SnapshotName;                                      // 0x28(0x8)(None)
	bool                                         bIsValid;                                          // 0x30(0x1)(None)
	uint8                                        Pad_39A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.SocketReference
struct FSocketReference
{
public:
	uint8                                        Pad_39AA[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x60(0x8)(None)
	uint8                                        Pad_39AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.BoneSocketTarget
struct FBoneSocketTarget
{
public:
	bool                                         bUseSocket;                                        // 0x0(0x1)(None)
	uint8                                        Pad_39AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoneReference;                                     // 0x4(0x10)(None)
	uint8                                        Pad_39AD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocketReference                      SocketReference;                                   // 0x20(0x70)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.AnimCurveParam
struct FAnimCurveParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	uint8                                        Pad_39AE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0xB8 - 0x68)
// ScriptStruct Engine.SceneComponentInstanceData
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{
public:
	TMap<class USceneComponent*, struct FTransform> AttachedInstanceComponents;                        // 0x68(0x50)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BPMapCheckEntry
struct FBPMapCheckEntry
{
public:
	enum class EBPMapCheckSeverity               Severity;                                          // 0x0(0x1)(None)
	uint8                                        Pad_39AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class AActor*>                        ActorLinks;                                        // 0x18(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.MultiUseEntry
struct FMultiUseEntry
{
public:
	class UActorComponent*                       ForComponent;                                      // 0x0(0x8)(ZeroConstructor)
	class FString                                UseString;                                         // 0x8(0x10)(None)
	int32                                        UseIndex;                                          // 0x18(0x4)(None)
	int32                                        Priority;                                          // 0x1C(0x4)(None)
	uint8                                        bHideFromUI : 1;                                   // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        bDisableUse : 1;                                   // Mask: 0x2, PropSize: 0x10x20(0x1)(None)
	uint8                                        bHideActivationKey : 1;                            // Mask: 0x4, PropSize: 0x10x20(0x1)(None)
	uint8                                        bRepeatMultiUse : 1;                               // Mask: 0x8, PropSize: 0x10x20(0x1)(None)
	uint8                                        bDisplayOnInventoryUI : 1;                         // Mask: 0x10, PropSize: 0x10x20(0x1)(None)
	uint8                                        bDisplayOnInventoryUISecondary : 1;                // Mask: 0x20, PropSize: 0x10x20(0x1)(None)
	uint8                                        bHarvestable : 1;                                  // Mask: 0x40, PropSize: 0x10x20(0x1)(None)
	uint8                                        bIsSecondaryUse : 1;                               // Mask: 0x80, PropSize: 0x10x20(0x1)(None)
	uint8                                        bPersistWheelOnActivation : 1;                     // Mask: 0x1, PropSize: 0x10x21(0x1)(None)
	uint8                                        bOverrideUseTextColor : 1;                         // Mask: 0x2, PropSize: 0x10x21(0x1)(None)
	uint8                                        bDisplayOnInventoryUITertiary : 1;                 // Mask: 0x4, PropSize: 0x10x21(0x1)(None)
	uint8                                        bClientSideOnly : 1;                               // Mask: 0x8, PropSize: 0x10x21(0x1)(None)
	uint8                                        bPersistWheelRequiresDirectActivation : 1;         // Mask: 0x10, PropSize: 0x10x21(0x1)(None)
	uint8                                        bUseBPDrawEntry : 1;                               // Mask: 0x20, PropSize: 0x10x21(0x1)(None)
	uint8                                        BitPad_318 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BPDrawEntryTargetRef;                              // 0x28(0x8)(ZeroConstructor)
	uint8                                        bDrawTooltip : 1;                                  // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        BitPad_319 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WheelCategory;                                     // 0x34(0x4)(None)
	struct FColor                                DisableUseColor;                                   // 0x38(0x4)(None)
	struct FColor                                UseTextColor;                                      // 0x3C(0x4)(None)
	float                                        EntryActivationTimer;                              // 0x40(0x4)(None)
	float                                        DefaultEntryActivationTimer;                       // 0x44(0x4)(None)
	class USoundBase*                            ActivationSound;                                   // 0x48(0x8)(ZeroConstructor)
	int32                                        UseInventoryButtonStyleOverrideIndex;              // 0x50(0x4)(None)
	int32                                        AdditionalButtonsIndex;                            // 0x54(0x4)(None)
	class UTexture2D*                            Icon;                                              // 0x58(0x8)(ZeroConstructor)
	struct FColor                                UseIconColor;                                      // 0x60(0x4)(None)
	uint8                                        bIsDynamicOption : 1;                              // Mask: 0x1, PropSize: 0x10x64(0x1)(None)
	uint8                                        bUseOldMultiUseOptionWithText : 1;                 // Mask: 0x2, PropSize: 0x10x64(0x1)(None)
	uint8                                        BitPad_31A : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SponsorIconObject;                                 // 0x68(0x8)(None)
	int32                                        OpenWheelCategory;                                 // 0x70(0x4)(None)
	uint8                                        Pad_39B3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.QuickActionOption
struct FQuickActionOption
{
public:
	class FString                                ActionString;                                      // 0x0(0x10)(AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	class FString                                SecondActionString;                                // 0x10(0x10)(None)
	int32                                        IndexUse;                                          // 0x20(0x4)(None)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        BitPad_31B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                UseColor;                                          // 0x28(0x4)(None)
	struct FColor                                DisableUseColor;                                   // 0x2C(0x4)(None)
	float                                        EntryActivationTimer;                              // 0x30(0x4)(None)
	uint8                                        bClientSideOnly : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(None)
	uint8                                        BitPad_31C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RelativeLocation;                                  // 0x38(0x18)(None)
	float                                        DistanceToActive;                                  // 0x50(0x4)(None)
	struct FColor                                ProgressBarColor;                                  // 0x54(0x4)(None)
	struct FColor                                SecondaryActionColor;                              // 0x58(0x4)(None)
	uint8                                        Pad_39B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconImageQuickActionTest;                          // 0x60(0x8)(None)
	uint8                                        bCanMultiPlayerQuickAction : 1;                    // Mask: 0x1, PropSize: 0x10x68(0x1)(None)
	uint8                                        bCancelOnActorReceiveDamage : 1;                   // Mask: 0x2, PropSize: 0x10x68(0x1)(None)
	uint8                                        Pad_39B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MultiUseWheelOption
struct FMultiUseWheelOption
{
public:
	class FString                                ActionString;                                      // 0x0(0x10)(None)
	class UTexture2D*                            Icon;                                              // 0x10(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.RepMovement
struct FRepMovement
{
public:
	struct FVector                               LinearVelocity;                                    // 0x0(0x18)(None)
	struct FVector                               AngularVelocity;                                   // 0x18(0x18)(None)
	struct FVector                               Location;                                          // 0x30(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x48(0x18)(None)
	uint8                                        bSimulatedPhysicSleep : 1;                         // Mask: 0x1, PropSize: 0x10x60(0x1)(None)
	uint8                                        bRepPhysics : 1;                                   // Mask: 0x2, PropSize: 0x10x60(0x1)(None)
	uint8                                        BitPad_31D : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ServerFrame;                                       // 0x64(0x4)(None)
	int32                                        ServerPhysicsHandle;                               // 0x68(0x4)(None)
	enum class EVectorQuantization               LocationQuantizationLevel;                         // 0x6C(0x1)(None)
	enum class EVectorQuantization               VelocityQuantizationLevel;                         // 0x6D(0x1)(None)
	enum class ERotatorQuantization              RotationQuantizationLevel;                         // 0x6E(0x1)(None)
	uint8                                        Pad_39B9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.Vector_NetQuantize100
struct FVector_NetQuantize100 : public FVector
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.RepAttachment
struct FRepAttachment
{
public:
	class AActor*                                AttachParent;                                      // 0x0(0x8)(ZeroConstructor)
	struct FVector_NetQuantize100                LocationOffset;                                    // 0x8(0x18)(None)
	struct FVector_NetQuantize100                RelativeScale3D;                                   // 0x20(0x18)(None)
	struct FRotator                              RotationOffset;                                    // 0x38(0x18)(None)
	class FName                                  AttachSocket;                                      // 0x50(0x8)(None)
	class USceneComponent*                       AttachComponent;                                   // 0x58(0x8)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Engine.ActorTickFunction
struct FActorTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_39BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bSavedActorTickState : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        bSavedActorTickStateValue : 1;                     // Mask: 0x2, PropSize: 0x10x30(0x1)(None)
	uint8                                        Pad_39BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ActorDataLayer
struct FActorDataLayer
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
};

// 0x20 (0x50 - 0x30)
// ScriptStruct Engine.KSphereElem
struct FKSphereElem : public FKShapeElem
{
public:
	struct FVector                               Center;                                            // 0x30(0x18)(None)
	float                                        Radius;                                            // 0x48(0x4)(None)
	uint8                                        Pad_39BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct Engine.KBoxElem
struct FKBoxElem : public FKShapeElem
{
public:
	struct FVector                               Center;                                            // 0x30(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x48(0x18)(None)
	float                                        X;                                                 // 0x60(0x4)(None)
	float                                        Y;                                                 // 0x64(0x4)(None)
	float                                        Z;                                                 // 0x68(0x4)(None)
	uint8                                        Pad_39BD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x68 - 0x30)
// ScriptStruct Engine.KSphylElem
struct FKSphylElem : public FKShapeElem
{
public:
	struct FVector                               Center;                                            // 0x30(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x48(0x18)(None)
	float                                        Radius;                                            // 0x60(0x4)(None)
	float                                        Length;                                            // 0x64(0x4)(None)
};

// 0xD0 (0x100 - 0x30)
// ScriptStruct Engine.KConvexElem
struct FKConvexElem : public FKShapeElem
{
public:
	TArray<struct FVector>                       VertexData;                                        // 0x30(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<int32>                                IndexData;                                         // 0x40(0x10)(None)
	struct FBox                                  ElemBox;                                           // 0x50(0x38)(None)
	uint8                                        Pad_39BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x90(0x60)(None)
	uint8                                        Pad_39BF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct Engine.KTaperedCapsuleElem
struct FKTaperedCapsuleElem : public FKShapeElem
{
public:
	struct FVector                               Center;                                            // 0x30(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x48(0x18)(None)
	float                                        Radius0;                                           // 0x60(0x4)(None)
	float                                        Radius1;                                           // 0x64(0x4)(None)
	float                                        Length;                                            // 0x68(0x4)(None)
	uint8                                        Pad_39C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xA0 - 0x30)
// ScriptStruct Engine.KLevelSetElem
struct FKLevelSetElem : public FKShapeElem
{
public:
	struct FTransform                            Transform;                                         // 0x30(0x60)(None)
	uint8                                        Pad_39C1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.KAggregateGeom
struct FKAggregateGeom
{
public:
	TArray<struct FKSphereElem>                  SphereElems;                                       // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FKBoxElem>                     BoxElems;                                          // 0x10(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FKSphylElem>                   SphylElems;                                        // 0x20(0x10)(BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FKConvexElem>                  ConvexElems;                                       // 0x30(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FKTaperedCapsuleElem>          TaperedCapsuleElems;                               // 0x40(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FKLevelSetElem>                LevelSetElems;                                     // 0x50(0x10)(None)
	uint8                                        Pad_39C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.NamedFloat
struct FNamedFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
	class FName                                  Name;                                              // 0x4(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.NamedVector
struct FNamedVector
{
public:
	struct FVector                               Value;                                             // 0x0(0x18)(None)
	class FName                                  Name;                                              // 0x18(0x8)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.NamedColor
struct FNamedColor
{
public:
	struct FColor                                Value;                                             // 0x0(0x4)(None)
	class FName                                  Name;                                              // 0x4(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.NamedTransform
struct FNamedTransform
{
public:
	struct FTransform                            Value;                                             // 0x0(0x60)(None)
	class FName                                  Name;                                              // 0x60(0x8)(None)
	uint8                                        Pad_39C3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LocalSpacePose
struct FLocalSpacePose
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FName>                          Names;                                             // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ComponentSpacePose
struct FComponentSpacePose
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FName>                          Names;                                             // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimationErrorStats
struct FAnimationErrorStats
{
public:
	uint8                                        Pad_39C4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.SmartName
struct FSmartName
{
public:
	class FName                                  DisplayName;                                       // 0x0(0x8)(None)
	uint8                                        Pad_39C5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimCurveBase
struct FAnimCurveBase
{
public:
	struct FSmartName                            Name;                                              // 0x0(0xC)(None)
	int32                                        CurveTypeFlags;                                    // 0xC(0x4)(None)
};

// 0x80 (0x90 - 0x10)
// ScriptStruct Engine.FloatCurve
struct FFloatCurve : public FAnimCurveBase
{
public:
	struct FRichCurve                            FloatCurve;                                        // 0x10(0x80)(None)
};

// 0x180 (0x190 - 0x10)
// ScriptStruct Engine.VectorCurve
struct FVectorCurve : public FAnimCurveBase
{
public:
	struct FRichCurve                            FloatCurves[0x3];                                  // 0x10(0x180)(None)
};

// 0x4B0 (0x4C0 - 0x10)
// ScriptStruct Engine.TransformCurve
struct FTransformCurve : public FAnimCurveBase
{
public:
	struct FVectorCurve                          TranslationCurve;                                  // 0x10(0x190)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FVectorCurve                          RotationCurve;                                     // 0x1A0(0x190)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FVectorCurve                          ScaleCurve;                                        // 0x330(0x190)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.CachedFloatCurve
struct FCachedFloatCurve
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(None)
	uint8                                        Pad_39C6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.RawCurveTracks
struct FRawCurveTracks
{
public:
	TArray<struct FFloatCurve>                   FloatCurves;                                       // 0x0(0x10)(None)
};

// 0x0 (0x0 - 0x0)
// ScriptStruct Engine.EmptyPayload
struct FEmptyPayload
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BracketPayload
struct FBracketPayload : public FEmptyPayload
{
public:
	class FString                                Description;                                       // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AnimationTrackPayload
struct FAnimationTrackPayload : public FEmptyPayload
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
};

// 0x4 (0xC - 0x8)
// ScriptStruct Engine.AnimationTrackAddedPayload
struct FAnimationTrackAddedPayload : public FAnimationTrackPayload
{
public:
	int32                                        TrackIndex;                                        // 0x8(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SequenceLengthChangedPayload
struct FSequenceLengthChangedPayload : public FEmptyPayload
{
public:
	float                                        PreviousLength;                                    // 0x0(0x4)(None)
	float                                        T0;                                                // 0x4(0x4)(None)
	float                                        T1;                                                // 0x8(0x4)(None)
	struct FFrameNumber                          PreviousNumberOfFrames;                            // 0xC(0x4)(None)
	struct FFrameNumber                          Frame0;                                            // 0x10(0x4)(None)
	struct FFrameNumber                          Frame1;                                            // 0x14(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.FrameRateChangedPayload
struct FFrameRateChangedPayload : public FEmptyPayload
{
public:
	struct FFrameRate                            PreviousFrameRate;                                 // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimationCurveIdentifier
struct FAnimationCurveIdentifier
{
public:
	struct FSmartName                            InternalName;                                      // 0x0(0xC)(None)
	enum class ERawCurveTrackTypes               CurveType;                                         // 0xC(0x1)(None)
	enum class ETransformCurveChannel            Channel;                                           // 0xD(0x1)(None)
	enum class EVectorCurveChannel               Axis;                                              // 0xE(0x1)(None)
	uint8                                        Pad_39C7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CurvePayload
struct FCurvePayload : public FEmptyPayload
{
public:
	struct FAnimationCurveIdentifier             Identifier;                                        // 0x0(0x10)(None)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Engine.CurveScaledPayload
struct FCurveScaledPayload : public FCurvePayload
{
public:
	float                                        Factor;                                            // 0x10(0x4)(None)
	float                                        Origin;                                            // 0x14(0x4)(None)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Engine.CurveRenamedPayload
struct FCurveRenamedPayload : public FCurvePayload
{
public:
	struct FAnimationCurveIdentifier             NewIdentifier;                                     // 0x10(0x10)(None)
};

// 0x4 (0x14 - 0x10)
// ScriptStruct Engine.CurveFlagsChangedPayload
struct FCurveFlagsChangedPayload : public FCurvePayload
{
public:
	int32                                        OldFlags;                                          // 0x10(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.AnimationAttributeIdentifier
struct FAnimationAttributeIdentifier
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  BoneName;                                          // 0x8(0x8)(None)
	int32                                        BoneIndex;                                         // 0x10(0x4)(None)
	uint8                                        Pad_39C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScriptStruct*                         ScriptStruct;                                      // 0x18(0x8)(None)
	struct FSoftObjectPath                       ScriptStructPath;                                  // 0x20(0x20)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.AttributePayload
struct FAttributePayload : public FEmptyPayload
{
public:
	struct FAnimationAttributeIdentifier         Identifier;                                        // 0x0(0x40)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimNodeConstantData
struct FAnimNodeConstantData
{
public:
	TScriptInterface<class IAnimClassInterface>  AnimClassInterface;                                // 0x0(0x10)(None)
	int32                                        NodeIndex;                                         // 0x10(0x4)(None)
	uint8                                        Pad_39C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.SlotEvaluationPose
struct FSlotEvaluationPose
{
public:
	enum class EAdditiveAnimationType            AdditiveType;                                      // 0x0(0x1)(None)
	uint8                                        Pad_39CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x4(0x4)(None)
	uint8                                        Pad_39CB[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AnimSubsystem
struct FAnimSubsystem
{
public:
	uint8                                        Pad_39CC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AnimSubsystemInstance
struct FAnimSubsystemInstance
{
public:
	uint8                                        Pad_39CD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Engine.AnimSubsystem_BlendSpaceGraph
struct FAnimSubsystem_BlendSpaceGraph : public FAnimSubsystem
{
public:
	TArray<class UBlendSpace*>                   BlendSpaces;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PerBoneBlendWeights
struct FPerBoneBlendWeights
{
public:
	TArray<struct FPerBoneBlendWeight>           BoneBlendWeights;                                  // 0x0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AnimLinkableElement
struct FAnimLinkableElement
{
public:
	uint8                                        Pad_39CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          LinkedMontage;                                     // 0x8(0x8)(ZeroConstructor)
	int32                                        SlotIndex;                                         // 0x10(0x4)(None)
	int32                                        SegmentIndex;                                      // 0x14(0x4)(None)
	enum class EAnimLinkMethod                   LinkMethod;                                        // 0x18(0x1)(None)
	enum class EAnimLinkMethod                   CachedLinkMethod;                                  // 0x19(0x1)(None)
	uint8                                        Pad_39CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SegmentBeginTime;                                  // 0x1C(0x4)(None)
	float                                        SegmentLength;                                     // 0x20(0x4)(None)
	float                                        LinkValue;                                         // 0x24(0x4)(None)
	class UAnimSequenceBase*                     LinkedSequence;                                    // 0x28(0x8)(None)
};

// 0x88 (0xB8 - 0x30)
// ScriptStruct Engine.AnimNotifyEvent
struct FAnimNotifyEvent : public FAnimLinkableElement
{
public:
	float                                        TriggerTimeOffset;                                 // 0x30(0x4)(None)
	float                                        EndTriggerTimeOffset;                              // 0x34(0x4)(None)
	float                                        TriggerWeightThreshold;                            // 0x38(0x4)(None)
	class FName                                  NotifyName;                                        // 0x3C(0x8)(None)
	uint8                                        Pad_39D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimNotify*                           Notify;                                            // 0x48(0x8)(ZeroConstructor)
	class UAnimNotifyState*                      NotifyStateClass;                                  // 0x50(0x8)(ZeroConstructor)
	bool                                         bIgnoreOnDediServer;                               // 0x58(0x1)(None)
	uint8                                        Pad_39D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x5C(0x4)(None)
	struct FAnimLinkableElement                  EndLink;                                           // 0x60(0x30)(ZeroConstructor)
	bool                                         bConvertedFromBranchingPoint;                      // 0x90(0x1)(None)
	enum class EMontageNotifyTickType            MontageTickType;                                   // 0x91(0x1)(None)
	uint8                                        Pad_39D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NotifyTriggerChance;                               // 0x94(0x4)(None)
	enum class ENotifyFilterType                 NotifyFilterType;                                  // 0x98(0x1)(None)
	uint8                                        Pad_39D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NotifyFilterLOD;                                   // 0x9C(0x4)(None)
	bool                                         bTriggerOnDedicatedServer;                         // 0xA0(0x1)(None)
	bool                                         bTriggerOnFollower;                                // 0xA1(0x1)(None)
	uint8                                        Pad_39D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TrackIndex;                                        // 0xA4(0x4)(None)
	uint8                                        Pad_39D5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.AnimSyncMarker
struct FAnimSyncMarker
{
public:
	class FName                                  MarkerName;                                        // 0x0(0x8)(None)
	float                                        Time;                                              // 0x8(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.AnimNotifyTrack
struct FAnimNotifyTrack
{
public:
	class FName                                  TrackName;                                         // 0x0(0x8)(None)
	struct FLinearColor                          TrackColor;                                        // 0x8(0x10)(None)
	uint8                                        Pad_39D6[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.MarkerSyncData
struct FMarkerSyncData
{
public:
	TArray<struct FAnimSyncMarker>               AuthoredSyncMarkers;                               // 0x0(0x10)(None)
	uint8                                        Pad_39D7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.TrackToSkeletonMap
struct FTrackToSkeletonMap
{
public:
	int32                                        BoneTreeIndex;                                     // 0x0(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.RawAnimSequenceTrack
struct FRawAnimSequenceTrack
{
public:
	TArray<struct FVector3f>                     PosKeys;                                           // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FQuat4f>                       RotKeys;                                           // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FVector3f>                     ScaleKeys;                                         // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.NXSettings
struct FNXSettings
{
public:
	float                                        Exposure_MaxBrightness_Modulation;                 // 0x0(0x4)(None)
	float                                        SkyLight_Intensity_Modulation;                     // 0x4(0x4)(None)
	int32                                        ZPassMode;                                         // 0x8(0x4)(None)
	int32                                        LightShaftQuality;                                 // 0xC(0x4)(None)
	TArray<class UClass*>                        SpotlightClasses;                                  // 0x10(0x10)(None)
	float                                        DinoStasisRangeMultiplier;                         // 0x20(0x4)(None)
	uint8                                        Pad_39D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.FoliageReductionSettings
struct FFoliageReductionSettings
{
public:
	int32                                        TreeFoliagePercent;                                // 0x0(0x4)(None)
	int32                                        BushFoliagePercent;                                // 0x4(0x4)(None)
	int32                                        CosmeticFoliagePercent;                            // 0x8(0x4)(None)
	uint8                                        Pad_39D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftObjectPtr<class UStaticMesh>, int32> Overrides;                                         // 0x10(0x50)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.PointLightReductionSettings
struct FPointLightReductionSettings
{
public:
	float                                        RadiusScale;                                       // 0x0(0x4)(None)
	float                                        DistanceScale;                                     // 0x4(0x4)(None)
	float                                        IntensityScale;                                    // 0x8(0x4)(None)
	float                                        MaxAttenuationRadius;                              // 0xC(0x4)(None)
	bool                                         bEffectSpotLights;                                 // 0x10(0x1)(None)
	uint8                                        Pad_39DA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LayerNameArray
struct FLayerNameArray
{
public:
	TArray<class FName>                          LayerNames;                                        // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AssetManagerRedirect
struct FAssetManagerRedirect
{
public:
	class FString                                Old;                                               // 0x0(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                New;                                               // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.PrimaryAssetRules
struct FPrimaryAssetRules
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(None)
	int32                                        ChunkId;                                           // 0x4(0x4)(None)
	bool                                         bApplyRecursively;                                 // 0x8(0x1)(None)
	enum class EPrimaryAssetCookRule             CookRule;                                          // 0x9(0x1)(None)
	uint8                                        Pad_39DB[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.PrimaryAssetRulesOverride
struct FPrimaryAssetRulesOverride
{
public:
	struct FPrimaryAssetId                       PrimaryAssetId;                                    // 0x0(0x10)(None)
	struct FPrimaryAssetRules                    Rules;                                             // 0x10(0xC)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
struct FPrimaryAssetRulesCustomOverride
{
public:
	struct FPrimaryAssetType                     PrimaryAssetType;                                  // 0x0(0x8)(None)
	struct FDirectoryPath                        FilterDirectory;                                   // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                FilterString;                                      // 0x18(0x10)(None)
	struct FPrimaryAssetRules                    Rules;                                             // 0x28(0xC)(None)
	uint8                                        Pad_39DC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.TreeStumpCreationTime
struct FTreeStumpCreationTime
{
public:
	class UInstancedStaticMeshComponent*         Comp;                                              // 0x0(0x8)(None)
	int32                                        InstanceIndex;                                     // 0x8(0x4)(None)
	uint8                                        Pad_39DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CreationTime;                                      // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BlendSpaceBlendProfile
struct FBlendSpaceBlendProfile
{
public:
	class UBlendProfile*                         BlendProfile;                                      // 0x0(0x8)(None)
	float                                        TargetWeightInterpolationSpeedPerSec;              // 0x8(0x4)(None)
	uint8                                        Pad_39DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InterpolationParameter
struct FInterpolationParameter
{
public:
	float                                        InterpolationTime;                                 // 0x0(0x4)(None)
	float                                        DampingRatio;                                      // 0x4(0x4)(None)
	float                                        MaxSpeed;                                          // 0x8(0x4)(None)
	enum class EFilterInterpolationType          InterpolationType;                                 // 0xC(0x1)(None)
	uint8                                        Pad_39DF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BlendParameter
struct FBlendParameter
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(None)
	float                                        Min;                                               // 0x10(0x4)(None)
	float                                        Max;                                               // 0x14(0x4)(None)
	float                                        Offset;                                            // 0x18(0x4)(None)
	int32                                        GridNum;                                           // 0x1C(0x4)(None)
	bool                                         bSnapToGrid;                                       // 0x20(0x1)(None)
	bool                                         bWrapInput;                                        // 0x21(0x1)(None)
	uint8                                        Pad_39E0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BlendSample
struct FBlendSample
{
public:
	class UAnimSequence*                         Animation;                                         // 0x0(0x8)(None)
	struct FVector                               SampleValue;                                       // 0x8(0x18)(None)
	float                                        RateScale;                                         // 0x20(0x4)(None)
	uint8                                        Pad_39E1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BlendSpaceSegment
struct FBlendSpaceSegment
{
public:
	int32                                        SampleIndices[0x2];                                // 0x0(0x8)(None)
	float                                        Vertices[0x2];                                     // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BlendSpaceTriangleEdgeInfo
struct FBlendSpaceTriangleEdgeInfo
{
public:
	struct FVector2D                             Normal;                                            // 0x0(0x10)(None)
	int32                                        NeighbourTriangleIndex;                            // 0x10(0x4)(None)
	int32                                        AdjacentPerimeterTriangleIndices[0x2];             // 0x14(0x8)(None)
	int32                                        AdjacentPerimeterVertexIndices[0x2];               // 0x1C(0x8)(None)
	uint8                                        Pad_39E2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Engine.BlendSpaceTriangle
struct FBlendSpaceTriangle
{
public:
	int32                                        SampleIndices[0x3];                                // 0x0(0xC)(None)
	uint8                                        Pad_39E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Vertices[0x3];                                     // 0x10(0x30)(None)
	struct FBlendSpaceTriangleEdgeInfo           EdgeInfo[0x3];                                     // 0x40(0x78)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.WeightedBlendSample
struct FWeightedBlendSample
{
public:
	int32                                        SampleIndex;                                       // 0x0(0x4)(None)
	float                                        SampleWeight;                                      // 0x4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BlendSpaceData
struct FBlendSpaceData
{
public:
	TArray<struct FBlendSpaceSegment>            Segments;                                          // 0x0(0x10)(AutoWeak, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FBlendSpaceTriangle>           Triangles;                                         // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EditorElement
struct FEditorElement
{
public:
	int32                                        Indices[0x3];                                      // 0x0(0xC)(None)
	float                                        Weights[0x3];                                      // 0xC(0xC)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.GridBlendSample
struct FGridBlendSample
{
public:
	struct FEditorElement                        GridElement;                                       // 0x0(0x18)(None)
	float                                        BlendWeight;                                       // 0x18(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.PerBoneInterpolation
struct FPerBoneInterpolation
{
public:
	struct FBoneReference                        BoneReference;                                     // 0x0(0x10)(None)
	float                                        InterpolationSpeedPerSec;                          // 0x10(0x4)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.CompilerNativizationOptions
struct FCompilerNativizationOptions
{
public:
	class FName                                  PlatformName;                                      // 0x0(0x8)(None)
	bool                                         ServerOnlyPlatform;                                // 0x8(0x1)(None)
	bool                                         ClientOnlyPlatform;                                // 0x9(0x1)(None)
	bool                                         bExcludeMonolithicHeaders;                         // 0xA(0x1)(None)
	uint8                                        Pad_39E4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExcludedModules;                                   // 0x10(0x10)(AutoWeak, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TSet<struct FSoftObjectPath>                 ExcludedAssets;                                    // 0x20(0x50)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        ExcludedFolderPaths;                               // 0x70(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BlueprintMacroCosmeticInfo
struct FBlueprintMacroCosmeticInfo
{
public:
	uint8                                        Pad_39E5[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BPVariableMetaDataEntry
struct FBPVariableMetaDataEntry
{
public:
	class FName                                  DataKey;                                           // 0x0(0x8)(None)
	class FString                                DataValue;                                         // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SimpleMemberReference
struct FSimpleMemberReference
{
public:
	class UObject*                               MemberParent;                                      // 0x0(0x8)(None)
	class FName                                  MemberName;                                        // 0x8(0x8)(None)
	struct FGuid                                 MemberGuid;                                        // 0x10(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.EdGraphTerminalType
struct FEdGraphTerminalType
{
public:
	class FName                                  TerminalCategory;                                  // 0x0(0x8)(None)
	class FName                                  TerminalSubCategory;                               // 0x8(0x8)(None)
	TWeakObjectPtr<class UObject>                TerminalSubCategoryObject;                         // 0x10(0x8)(None)
	bool                                         bTerminalIsConst;                                  // 0x18(0x1)(None)
	bool                                         bTerminalIsWeakPointer;                            // 0x19(0x1)(None)
	bool                                         bTerminalIsUObjectWrapper;                         // 0x1A(0x1)(None)
	uint8                                        Pad_39E6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.EdGraphPinType
struct FEdGraphPinType
{
public:
	class FName                                  PinCategory;                                       // 0x0(0x8)(None)
	class FName                                  PinSubCategory;                                    // 0x8(0x8)(None)
	TWeakObjectPtr<class UObject>                PinSubCategoryObject;                              // 0x10(0x8)(ZeroConstructor)
	struct FSimpleMemberReference                PinSubCategoryMemberReference;                     // 0x18(0x20)(ZeroConstructor)
	struct FEdGraphTerminalType                  PinValueType;                                      // 0x38(0x1C)(None)
	enum class EPinContainerType                 ContainerType;                                     // 0x54(0x1)(None)
	uint8                                        bIsArray : 1;                                      // Mask: 0x1, PropSize: 0x10x55(0x1)(None)
	uint8                                        bIsReference : 1;                                  // Mask: 0x2, PropSize: 0x10x55(0x1)(None)
	uint8                                        bIsConst : 1;                                      // Mask: 0x4, PropSize: 0x10x55(0x1)(None)
	uint8                                        bIsWeakPointer : 1;                                // Mask: 0x8, PropSize: 0x10x55(0x1)(None)
	uint8                                        bIsUObjectWrapper : 1;                             // Mask: 0x10, PropSize: 0x10x55(0x1)(None)
	uint8                                        bSerializeAsSinglePrecisionFloat : 1;              // Mask: 0x20, PropSize: 0x10x55(0x1)(None)
	uint8                                        Pad_39E7[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Engine.BPVariableDescription
struct FBPVariableDescription
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	struct FGuid                                 VarGuid;                                           // 0x8(0x10)(None)
	struct FEdGraphPinType                       VarType;                                           // 0x18(0x58)(None)
	class FString                                FriendlyName;                                      // 0x70(0x10)(AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  Category;                                          // 0x80(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	uint64                                       PropertyFlags;                                     // 0x98(0x8)(None)
	class FName                                  RepNotifyFunc;                                     // 0xA0(0x8)(None)
	enum class ELifetimeCondition                ReplicationCondition;                              // 0xA8(0x1)(None)
	uint8                                        Pad_39E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBPVariableMetaDataEntry>      MetaDataArray;                                     // 0xB0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                DefaultValue;                                      // 0xC0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BPInterfaceDescription
struct FBPInterfaceDescription
{
public:
	class UClass*                                Interface;                                         // 0x0(0x8)(ZeroConstructor)
	TArray<class UEdGraph*>                      Graphs;                                            // 0x8(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.EditedDocumentInfo
struct FEditedDocumentInfo
{
public:
	struct FSoftObjectPath                       EditedObjectPath;                                  // 0x0(0x20)(None)
	struct FVector2D                             SavedViewOffset;                                   // 0x20(0x10)(None)
	float                                        SavedZoomAmount;                                   // 0x30(0x4)(None)
	uint8                                        Pad_39EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               EditedObject;                                      // 0x38(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.BPEditorBookmarkNode
struct FBPEditorBookmarkNode
{
public:
	struct FGuid                                 NodeGuid;                                          // 0x0(0x10)(None)
	struct FGuid                                 ParentGuid;                                        // 0x10(0x10)(None)
	class FText                                  DisplayName;                                       // 0x20(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.Bookmark2DJumpToSettings
struct FBookmark2DJumpToSettings
{
public:
	uint8                                        Pad_39EC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BookmarkBaseJumpToSettings
struct FBookmarkBaseJumpToSettings
{
public:
	uint8                                        Pad_39ED[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.GeomSelection
struct FGeomSelection
{
public:
	int32                                        Type;                                              // 0x0(0x4)(None)
	int32                                        Index;                                             // 0x4(0x4)(None)
	int32                                        SelectionIndex;                                    // 0x8(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.FloatAnimationAttribute
struct FFloatAnimationAttribute
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.IntegerAnimationAttribute
struct FIntegerAnimationAttribute
{
public:
	int32                                        Value;                                             // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.StringAnimationAttribute
struct FStringAnimationAttribute
{
public:
	class FString                                Value;                                             // 0x0(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.TransformAnimationAttribute
struct FTransformAnimationAttribute
{
public:
	struct FTransform                            Value;                                             // 0x0(0x60)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.VectorAnimationAttribute
struct FVectorAnimationAttribute
{
public:
	struct FVector                               Value;                                             // 0x0(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.QuaternionAnimationAttribute
struct FQuaternionAnimationAttribute
{
public:
	struct FQuat                                 Value;                                             // 0x0(0x20)(None)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Engine.NonBlendableQuaternionAnimationAttribute
struct FNonBlendableQuaternionAnimationAttribute : public FQuaternionAnimationAttribute
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.NonBlendableVectorAnimationAttribute
struct FNonBlendableVectorAnimationAttribute : public FVectorAnimationAttribute
{
public:
};

// 0x0 (0x60 - 0x60)
// ScriptStruct Engine.NonBlendableTransformAnimationAttribute
struct FNonBlendableTransformAnimationAttribute : public FTransformAnimationAttribute
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct Engine.NonBlendableFloatAnimationAttribute
struct FNonBlendableFloatAnimationAttribute : public FFloatAnimationAttribute
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct Engine.NonBlendableIntegerAnimationAttribute
struct FNonBlendableIntegerAnimationAttribute : public FIntegerAnimationAttribute
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.PostProcessSettingsMaterialAdjuster
struct FPostProcessSettingsMaterialAdjuster
{
public:
	class UMaterialInterface*                    PostProcessParentMaterial;                         // 0x0(0x8)(ZeroConstructor)
	class UMaterialParameterCollection*          MaterialParamCollecton;                            // 0x8(0x8)(None)
	TArray<class FName>                          ScalarParameterNames;                              // 0x10(0x10)(AutoWeak, ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<float>                                ScalarParameterValues;                             // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FName>                          VectorParameterNames;                              // 0x30(0x10)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FVector>                       VectorParameterValues;                             // 0x40(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WeightedBlendable
struct FWeightedBlendable
{
public:
	float                                        Weight;                                            // 0x0(0x4)(None)
	uint8                                        Pad_39F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Object;                                            // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WeightedBlendables
struct FWeightedBlendables
{
public:
	TArray<struct FWeightedBlendable>            Array;                                             // 0x0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.ClutterData
struct FClutterData
{
public:
	float                                        Density;                                           // 0x0(0x4)(None)
	float                                        MinSize;                                           // 0x4(0x4)(None)
	float                                        MaxSize;                                           // 0x8(0x4)(None)
	int32                                        GenerationSeed;                                    // 0xC(0x4)(None)
	bool                                         bAllowShadows;                                     // 0x10(0x1)(None)
	uint8                                        Pad_39F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x18(0x8)(ZeroConstructor)
	class UTexture2D*                            VisibilityTexture;                                 // 0x20(0x8)(None)
	int32                                        TextureChannel;                                    // 0x28(0x4)(None)
	uint8                                        Pad_39F7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.OverrideClutterLayer
struct FOverrideClutterLayer
{
public:
	int32                                        LayerID;                                           // 0x0(0x4)(None)
	uint8                                        Pad_39F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FClutterData>                  ClutterLayers;                                     // 0x8(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.ClutterPropertyOverride
struct FClutterPropertyOverride
{
public:
	int32                                        LayerID;                                           // 0x0(0x4)(None)
	int32                                        ArrayIndex;                                        // 0x4(0x4)(None)
	bool                                         OverrideDensity;                                   // 0x8(0x1)(None)
	uint8                                        Pad_39F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Density;                                           // 0xC(0x4)(None)
	bool                                         OverrideMinSize;                                   // 0x10(0x1)(None)
	uint8                                        Pad_39FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSize;                                           // 0x14(0x4)(None)
	bool                                         OverrideMaxSize;                                   // 0x18(0x1)(None)
	uint8                                        Pad_39FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSize;                                           // 0x1C(0x4)(None)
	bool                                         OverrideGenerationSeed;                            // 0x20(0x1)(None)
	uint8                                        Pad_39FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GenerationSeed;                                    // 0x24(0x4)(None)
	bool                                         OverrideAllowShadows;                              // 0x28(0x1)(None)
	bool                                         bAllowShadows;                                     // 0x29(0x1)(None)
	bool                                         OverrideStaticMesh;                                // 0x2A(0x1)(None)
	uint8                                        Pad_39FD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x30(0x8)(ZeroConstructor)
	bool                                         OverrideVisibilityTexture;                         // 0x38(0x1)(None)
	uint8                                        Pad_39FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            VisibilityTexture;                                 // 0x40(0x8)(None)
	bool                                         OverrideTextureChannel;                            // 0x48(0x1)(None)
	uint8                                        Pad_39FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextureChannel;                                    // 0x4C(0x4)(None)
};

// 0x770 (0x770 - 0x0)
// ScriptStruct Engine.PostProcessSettings
struct FPostProcessSettings
{
public:
	uint8                                        bOverride_TemperatureType : 1;                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_WhiteTemp : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_WhiteTint : 1;                           // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ColorSaturation : 1;                     // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ColorContrast : 1;                       // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ColorGamma : 1;                          // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ColorGain : 1;                           // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ColorOffset : 1;                         // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ColorSaturationShadows : 1;              // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorContrastShadows : 1;                // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorGammaShadows : 1;                   // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorGainShadows : 1;                    // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorOffsetShadows : 1;                  // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorSaturationMidtones : 1;             // Mask: 0x20, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorContrastMidtones : 1;               // Mask: 0x40, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorGammaMidtones : 1;                  // Mask: 0x80, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOverride_ColorGainMidtones : 1;                   // Mask: 0x1, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorOffsetMidtones : 1;                 // Mask: 0x2, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorSaturationHighlights : 1;           // Mask: 0x4, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorContrastHighlights : 1;             // Mask: 0x8, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorGammaHighlights : 1;                // Mask: 0x10, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorGainHighlights : 1;                 // Mask: 0x20, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorOffsetHighlights : 1;               // Mask: 0x40, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorCorrectionShadowsMax : 1;           // Mask: 0x80, PropSize: 0x10x2(0x1)(None)
	uint8                                        bOverride_ColorCorrectionHighlightsMin : 1;        // Mask: 0x1, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_ColorCorrectionHighlightsMax : 1;        // Mask: 0x2, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_BlueCorrection : 1;                      // Mask: 0x4, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_ExpandGamut : 1;                         // Mask: 0x8, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_ToneCurveAmount : 1;                     // Mask: 0x10, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_FilmSlope : 1;                           // Mask: 0x20, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_FilmToe : 1;                             // Mask: 0x40, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_FilmShoulder : 1;                        // Mask: 0x80, PropSize: 0x10x3(0x1)(None)
	uint8                                        bOverride_FilmBlackClip : 1;                       // Mask: 0x1, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_FilmWhiteClip : 1;                       // Mask: 0x2, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_SceneColorTint : 1;                      // Mask: 0x4, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_SceneFringeIntensity : 1;                // Mask: 0x8, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_ChromaticAberrationStartOffset : 1;      // Mask: 0x10, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_AmbientCubemapTint : 1;                  // Mask: 0x20, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_AmbientCubemapIntensity : 1;             // Mask: 0x40, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_BloomMethod : 1;                         // Mask: 0x80, PropSize: 0x10x4(0x1)(None)
	uint8                                        bOverride_BloomIntensity : 1;                      // Mask: 0x1, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_BloomThreshold : 1;                      // Mask: 0x2, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom1Tint : 1;                          // Mask: 0x4, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom1Size : 1;                          // Mask: 0x8, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom2Size : 1;                          // Mask: 0x10, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom2Tint : 1;                          // Mask: 0x20, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom3Tint : 1;                          // Mask: 0x40, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom3Size : 1;                          // Mask: 0x80, PropSize: 0x10x5(0x1)(None)
	uint8                                        bOverride_Bloom4Tint : 1;                          // Mask: 0x1, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_Bloom4Size : 1;                          // Mask: 0x2, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_Bloom5Tint : 1;                          // Mask: 0x4, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_Bloom5Size : 1;                          // Mask: 0x8, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_Bloom6Tint : 1;                          // Mask: 0x10, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_Bloom6Size : 1;                          // Mask: 0x20, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_BloomSizeScale : 1;                      // Mask: 0x40, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_BloomConvolutionTexture : 1;             // Mask: 0x80, PropSize: 0x10x6(0x1)(None)
	uint8                                        bOverride_BloomConvolutionScatterDispersion : 1;   // Mask: 0x1, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionSize : 1;                // Mask: 0x2, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionCenterUV : 1;            // Mask: 0x4, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionPreFilter : 1;           // Mask: 0x8, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionPreFilterMin : 1;        // Mask: 0x10, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionPreFilterMax : 1;        // Mask: 0x20, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionPreFilterMult : 1;       // Mask: 0x40, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomConvolutionBufferScale : 1;         // Mask: 0x80, PropSize: 0x10x7(0x1)(None)
	uint8                                        bOverride_BloomDirtMaskIntensity : 1;              // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_BloomDirtMaskTint : 1;                   // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_BloomDirtMask : 1;                       // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_CameraShutterSpeed : 1;                  // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_CameraISO : 1;                           // Mask: 0x10, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_AutoExposureMethod : 1;                  // Mask: 0x20, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_AutoExposureLowPercent : 1;              // Mask: 0x40, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_AutoExposureHighPercent : 1;             // Mask: 0x80, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOverride_AutoExposureMinBrightness : 1;           // Mask: 0x1, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureMaxBrightness : 1;           // Mask: 0x2, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureCalibrationConstant : 1;     // Mask: 0x4, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureSpeedUp : 1;                 // Mask: 0x8, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureSpeedDown : 1;               // Mask: 0x10, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureBias : 1;                    // Mask: 0x20, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureBiasCurve : 1;               // Mask: 0x40, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureMeterMask : 1;               // Mask: 0x80, PropSize: 0x10x9(0x1)(None)
	uint8                                        bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // Mask: 0x1, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_HistogramLogMin : 1;                     // Mask: 0x2, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_HistogramLogMax : 1;                     // Mask: 0x4, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_LocalExposureContrastScale : 1;          // Mask: 0x8, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_LocalExposureHighlightContrastScale : 1; // Mask: 0x10, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_LocalExposureShadowContrastScale : 1;    // Mask: 0x20, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_LocalExposureDetailStrength : 1;         // Mask: 0x40, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_LocalExposureBlurredLuminanceBlend : 1;  // Mask: 0x80, PropSize: 0x10xA(0x1)(None)
	uint8                                        bOverride_LocalExposureBlurredLuminanceKernelSizePercent : 1; // Mask: 0x1, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LocalExposureMiddleGreyBias : 1;         // Mask: 0x2, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LensFlareIntensity : 1;                  // Mask: 0x4, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LensFlareTint : 1;                       // Mask: 0x8, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LensFlareTints : 1;                      // Mask: 0x10, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LensFlareBokehSize : 1;                  // Mask: 0x20, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LensFlareBokehShape : 1;                 // Mask: 0x40, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_LensFlareThreshold : 1;                  // Mask: 0x80, PropSize: 0x10xB(0x1)(None)
	uint8                                        bOverride_VignetteIntensity : 1;                   // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_GrainIntensity : 1;                      // Mask: 0x2, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_GrainJitter : 1;                         // Mask: 0x4, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_FilmGrainIntensity : 1;                  // Mask: 0x8, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_FilmGrainIntensityShadows : 1;           // Mask: 0x10, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_FilmGrainIntensityMidtones : 1;          // Mask: 0x20, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_FilmGrainIntensityHighlights : 1;        // Mask: 0x40, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_FilmGrainShadowsMax : 1;                 // Mask: 0x80, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverride_FilmGrainHighlightsMin : 1;              // Mask: 0x1, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_FilmGrainHighlightsMax : 1;              // Mask: 0x2, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_FilmGrainTexelSize : 1;                  // Mask: 0x4, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_FilmGrainTexture : 1;                    // Mask: 0x8, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionIntensity : 1;           // Mask: 0x10, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionStaticFraction : 1;      // Mask: 0x20, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionRadius : 1;              // Mask: 0x40, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionFadeDistance : 1;        // Mask: 0x80, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionFadeRadius : 1;          // Mask: 0x1, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionMinDistance : 1;         // Mask: 0x2, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionNearFadeRadius : 1;      // Mask: 0x4, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionDirectLightingIntensity : 1; // Mask: 0x8, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionIndirectLightingIntensity : 1; // Mask: 0x10, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionDistance : 1;            // Mask: 0x20, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionRadiusInWS : 1;          // Mask: 0x40, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionPower : 1;               // Mask: 0x80, PropSize: 0x10xE(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionBias : 1;                // Mask: 0x1, PropSize: 0x10xF(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionQuality : 1;             // Mask: 0x2, PropSize: 0x10xF(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionMipBlend : 1;            // Mask: 0x4, PropSize: 0x10xF(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionMipScale : 1;            // Mask: 0x8, PropSize: 0x10xF(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionMipThreshold : 1;        // Mask: 0x10, PropSize: 0x10xF(0x1)(None)
	uint8                                        bOverride_AmbientOcclusionTemporalBlendWeight : 1; // Mask: 0x20, PropSize: 0x10xF(0x1)(None)
	uint8                                        bOverride_BentNormalDirectLightingIntensity : 1;   // Mask: 0x40, PropSize: 0x10xF(0x1)(None)
	uint8                                        BitPad_31F : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bOverride_RayTracingAO : 1;                        // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        bOverride_RayTracingAOSamplesPerPixel : 1;         // Mask: 0x2, PropSize: 0x10x10(0x1)(None)
	uint8                                        bOverride_RayTracingAOIntensity : 1;               // Mask: 0x4, PropSize: 0x10x10(0x1)(None)
	uint8                                        bOverride_RayTracingAORadius : 1;                  // Mask: 0x8, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_320 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverride_LPVIntensity : 1;                        // Mask: 0x1, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVDirectionalOcclusionIntensity : 1;    // Mask: 0x2, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVDirectionalOcclusionRadius : 1;       // Mask: 0x4, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVDiffuseOcclusionExponent : 1;         // Mask: 0x8, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVSpecularOcclusionExponent : 1;        // Mask: 0x10, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVDiffuseOcclusionIntensity : 1;        // Mask: 0x20, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVSpecularOcclusionIntensity : 1;       // Mask: 0x40, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVSize : 1;                             // Mask: 0x80, PropSize: 0x10x14(0x1)(None)
	uint8                                        bOverride_LPVSecondaryOcclusionIntensity : 1;      // Mask: 0x1, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_LPVSecondaryBounceIntensity : 1;         // Mask: 0x2, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_LPVGeometryVolumeBias : 1;               // Mask: 0x4, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_LPVVplInjectionBias : 1;                 // Mask: 0x8, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_LPVEmissiveInjectionIntensity : 1;       // Mask: 0x10, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_LPVFadeRange : 1;                        // Mask: 0x20, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_LPVDirectionalOcclusionFadeRange : 1;    // Mask: 0x40, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_IndirectLightingColor : 1;               // Mask: 0x80, PropSize: 0x10x15(0x1)(None)
	uint8                                        bOverride_IndirectLightingIntensity : 1;           // Mask: 0x1, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_ColorGradingIntensity : 1;               // Mask: 0x2, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_ColorGradingLUT : 1;                     // Mask: 0x4, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_DepthOfFieldFocalDistance : 1;           // Mask: 0x8, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_DepthOfFieldFstop : 1;                   // Mask: 0x10, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_DepthOfFieldMinFstop : 1;                // Mask: 0x20, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_DepthOfFieldBladeCount : 1;              // Mask: 0x40, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_DepthOfFieldSensorWidth : 1;             // Mask: 0x80, PropSize: 0x10x16(0x1)(None)
	uint8                                        bOverride_DepthOfFieldSqueezeFactor : 1;           // Mask: 0x1, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldDepthBlurRadius : 1;         // Mask: 0x2, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldDepthBlurAmount : 1;         // Mask: 0x4, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldFocalRegion : 1;             // Mask: 0x8, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldNearTransitionRegion : 1;    // Mask: 0x10, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldFarTransitionRegion : 1;     // Mask: 0x20, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldScale : 1;                   // Mask: 0x40, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldNearBlurSize : 1;            // Mask: 0x80, PropSize: 0x10x17(0x1)(None)
	uint8                                        bOverride_DepthOfFieldFarBlurSize : 1;             // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_MobileHQGaussian : 1;                    // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_DepthOfFieldOcclusion : 1;               // Mask: 0x4, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_DepthOfFieldSkyFocusDistance : 1;        // Mask: 0x8, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_DepthOfFieldVignetteSize : 1;            // Mask: 0x10, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_MotionBlurAmount : 1;                    // Mask: 0x20, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_MotionBlurMax : 1;                       // Mask: 0x40, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_MotionBlurTargetFPS : 1;                 // Mask: 0x80, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOverride_MotionBlurPerObjectSize : 1;             // Mask: 0x1, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_ScreenPercentage : 1;                    // Mask: 0x2, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_ReflectionMethod : 1;                    // Mask: 0x4, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_LumenReflectionQuality : 1;              // Mask: 0x8, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_ScreenSpaceReflectionIntensity : 1;      // Mask: 0x10, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_ScreenSpaceReflectionQuality : 1;        // Mask: 0x20, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_ScreenSpaceReflectionMaxRoughness : 1;   // Mask: 0x40, PropSize: 0x10x19(0x1)(None)
	uint8                                        bOverride_ScreenSpaceReflectionRoughnessScale : 1; // Mask: 0x80, PropSize: 0x10x19(0x1)(None)
	uint8                                        Pad_3A06[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverride_ReflectionsType : 1;                     // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingReflectionsMaxRoughness : 1;   // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingReflectionsMaxBounces : 1;     // Mask: 0x4, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingReflectionsSamplesPerPixel : 1; // Mask: 0x8, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingReflectionsShadows : 1;        // Mask: 0x10, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingReflectionsTranslucency : 1;   // Mask: 0x20, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_TranslucencyType : 1;                    // Mask: 0x40, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingTranslucencyMaxRoughness : 1;  // Mask: 0x80, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOverride_RayTracingTranslucencyRefractionRays : 1; // Mask: 0x1, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_RayTracingTranslucencySamplesPerPixel : 1; // Mask: 0x2, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_RayTracingTranslucencyShadows : 1;       // Mask: 0x4, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_RayTracingTranslucencyRefraction : 1;    // Mask: 0x8, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_DynamicGlobalIlluminationMethod : 1;     // Mask: 0x10, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_LumenSceneLightingQuality : 1;           // Mask: 0x20, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_LumenSceneDetail : 1;                    // Mask: 0x40, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_LumenSceneViewDistance : 1;              // Mask: 0x80, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bOverride_LumenSceneLightingUpdateSpeed : 1;       // Mask: 0x1, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bOverride_LumenFinalGatherQuality : 1;             // Mask: 0x2, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bOverride_LumenFinalGatherLightingUpdateSpeed : 1; // Mask: 0x4, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bOverride_LumenMaxTraceDistance : 1;               // Mask: 0x8, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bOverride_LumenDiffuseColorBoost : 1;              // Mask: 0x10, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bOverride_LumenSkylightLeaking : 1;                // Mask: 0x20, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bOverride_LumenFullSkylightLeakingDistance : 1;    // Mask: 0x40, PropSize: 0x10x1E(0x1)(None)
	uint8                                        BitPad_322 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A07[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverride_LumenRayLightingMode : 1;                // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        bOverride_LumenFrontLayerTranslucencyReflections : 1; // Mask: 0x2, PropSize: 0x10x20(0x1)(None)
	uint8                                        bOverride_LumenSurfaceCacheResolution : 1;         // Mask: 0x4, PropSize: 0x10x20(0x1)(None)
	uint8                                        bOverride_LumenScreenTraceColor : 1;               // Mask: 0x8, PropSize: 0x10x20(0x1)(None)
	uint8                                        bOverride_LumenScreenTraceIntensity : 1;           // Mask: 0x10, PropSize: 0x10x20(0x1)(None)
	uint8                                        bOverride_LumenScreenTraceScaleStartDistance : 1;  // Mask: 0x20, PropSize: 0x10x20(0x1)(None)
	uint8                                        bOverride_LumenScreenTraceScaleFadeDistance : 1;   // Mask: 0x40, PropSize: 0x10x20(0x1)(None)
	uint8                                        BitPad_323 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverride_RayTracingGI : 1;                        // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_RayTracingGIMaxBounces : 1;              // Mask: 0x2, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_RayTracingGISamplesPerPixel : 1;         // Mask: 0x4, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_PathTracingMaxBounces : 1;               // Mask: 0x8, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_PathTracingSamplesPerPixel : 1;          // Mask: 0x10, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_PathTracingFilterWidth : 1;              // Mask: 0x20, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_PathTracingMaxPathExposure : 1;          // Mask: 0x40, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_PathTracingEnableReferenceDOF : 1;       // Mask: 0x80, PropSize: 0x10x24(0x1)(None)
	uint8                                        bOverride_PathTracingEnableReferenceAtmosphere : 1; // Mask: 0x1, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingEnableDenoiser : 1;           // Mask: 0x2, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeEmissive : 1;          // Mask: 0x4, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeIndirectEmissive : 1;  // Mask: 0x8, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeDiffuse : 1;           // Mask: 0x10, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeIndirectDiffuse : 1;   // Mask: 0x20, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeSpecular : 1;          // Mask: 0x40, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeIndirectSpecular : 1;  // Mask: 0x80, PropSize: 0x10x25(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeVolume : 1;            // Mask: 0x1, PropSize: 0x10x26(0x1)(None)
	uint8                                        bOverride_PathTracingIncludeIndirectVolume : 1;    // Mask: 0x2, PropSize: 0x10x26(0x1)(None)
	uint8                                        BitPad_324 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A0A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bMobileHQGaussian : 1;                             // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_325 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EBloomMethod                      BloomMethod;                                       // 0x29(0x1)(None)
	enum class EAutoExposureMethod               AutoExposureMethod;                                // 0x2A(0x1)(None)
	enum class ETemperatureMethod                TemperatureType;                                   // 0x2B(0x1)(None)
	float                                        WhiteTemp;                                         // 0x2C(0x4)(None)
	float                                        WhiteTint;                                         // 0x30(0x4)(None)
	uint8                                        Pad_3A0C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ColorSaturation;                                   // 0x40(0x20)(None)
	struct FVector4                              ColorContrast;                                     // 0x60(0x20)(None)
	struct FVector4                              ColorGamma;                                        // 0x80(0x20)(None)
	struct FVector4                              ColorGain;                                         // 0xA0(0x20)(None)
	struct FVector4                              ColorOffset;                                       // 0xC0(0x20)(None)
	struct FVector4                              ColorSaturationShadows;                            // 0xE0(0x20)(None)
	struct FVector4                              ColorContrastShadows;                              // 0x100(0x20)(None)
	struct FVector4                              ColorGammaShadows;                                 // 0x120(0x20)(None)
	struct FVector4                              ColorGainShadows;                                  // 0x140(0x20)(None)
	struct FVector4                              ColorOffsetShadows;                                // 0x160(0x20)(None)
	struct FVector4                              ColorSaturationMidtones;                           // 0x180(0x20)(None)
	struct FVector4                              ColorContrastMidtones;                             // 0x1A0(0x20)(None)
	struct FVector4                              ColorGammaMidtones;                                // 0x1C0(0x20)(None)
	struct FVector4                              ColorGainMidtones;                                 // 0x1E0(0x20)(None)
	struct FVector4                              ColorOffsetMidtones;                               // 0x200(0x20)(None)
	struct FVector4                              ColorSaturationHighlights;                         // 0x220(0x20)(None)
	struct FVector4                              ColorContrastHighlights;                           // 0x240(0x20)(None)
	struct FVector4                              ColorGammaHighlights;                              // 0x260(0x20)(None)
	struct FVector4                              ColorGainHighlights;                               // 0x280(0x20)(None)
	struct FVector4                              ColorOffsetHighlights;                             // 0x2A0(0x20)(None)
	float                                        ColorCorrectionHighlightsMin;                      // 0x2C0(0x4)(None)
	float                                        ColorCorrectionHighlightsMax;                      // 0x2C4(0x4)(None)
	float                                        ColorCorrectionShadowsMax;                         // 0x2C8(0x4)(None)
	float                                        BlueCorrection;                                    // 0x2CC(0x4)(None)
	float                                        ExpandGamut;                                       // 0x2D0(0x4)(None)
	float                                        ToneCurveAmount;                                   // 0x2D4(0x4)(None)
	float                                        FilmSlope;                                         // 0x2D8(0x4)(None)
	float                                        FilmToe;                                           // 0x2DC(0x4)(None)
	float                                        FilmShoulder;                                      // 0x2E0(0x4)(None)
	float                                        FilmBlackClip;                                     // 0x2E4(0x4)(None)
	float                                        FilmWhiteClip;                                     // 0x2E8(0x4)(None)
	struct FLinearColor                          SceneColorTint;                                    // 0x2EC(0x10)(None)
	float                                        SceneFringeIntensity;                              // 0x2FC(0x4)(None)
	float                                        ChromaticAberrationStartOffset;                    // 0x300(0x4)(None)
	float                                        BloomIntensity;                                    // 0x304(0x4)(None)
	float                                        BloomThreshold;                                    // 0x308(0x4)(None)
	float                                        BloomSizeScale;                                    // 0x30C(0x4)(None)
	float                                        Bloom1Size;                                        // 0x310(0x4)(None)
	float                                        Bloom2Size;                                        // 0x314(0x4)(None)
	float                                        Bloom3Size;                                        // 0x318(0x4)(None)
	float                                        Bloom4Size;                                        // 0x31C(0x4)(None)
	float                                        Bloom5Size;                                        // 0x320(0x4)(None)
	float                                        Bloom6Size;                                        // 0x324(0x4)(None)
	struct FLinearColor                          Bloom1Tint;                                        // 0x328(0x10)(None)
	struct FLinearColor                          Bloom2Tint;                                        // 0x338(0x10)(None)
	struct FLinearColor                          Bloom3Tint;                                        // 0x348(0x10)(None)
	struct FLinearColor                          Bloom4Tint;                                        // 0x358(0x10)(None)
	struct FLinearColor                          Bloom5Tint;                                        // 0x368(0x10)(None)
	struct FLinearColor                          Bloom6Tint;                                        // 0x378(0x10)(None)
	float                                        BloomConvolutionScatterDispersion;                 // 0x388(0x4)(None)
	float                                        BloomConvolutionSize;                              // 0x38C(0x4)(None)
	class UTexture2D*                            BloomConvolutionTexture;                           // 0x390(0x8)(ZeroConstructor)
	struct FVector2D                             BloomConvolutionCenterUV;                          // 0x398(0x10)(None)
	float                                        BloomConvolutionPreFilterMin;                      // 0x3A8(0x4)(None)
	float                                        BloomConvolutionPreFilterMax;                      // 0x3AC(0x4)(None)
	float                                        BloomConvolutionPreFilterMult;                     // 0x3B0(0x4)(None)
	float                                        BloomConvolutionBufferScale;                       // 0x3B4(0x4)(None)
	class UTexture*                              BloomDirtMask;                                     // 0x3B8(0x8)(ZeroConstructor)
	float                                        BloomDirtMaskIntensity;                            // 0x3C0(0x4)(None)
	struct FLinearColor                          BloomDirtMaskTint;                                 // 0x3C4(0x10)(None)
	enum class EDynamicGlobalIlluminationMethod  DynamicGlobalIlluminationMethod;                   // 0x3D4(0x1)(None)
	uint8                                        Pad_3A0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          IndirectLightingColor;                             // 0x3D8(0x10)(None)
	float                                        IndirectLightingIntensity;                         // 0x3E8(0x4)(None)
	float                                        LumenSceneLightingQuality;                         // 0x3EC(0x4)(None)
	float                                        LumenSceneDetail;                                  // 0x3F0(0x4)(None)
	float                                        LumenSceneViewDistance;                            // 0x3F4(0x4)(None)
	float                                        LumenSceneLightingUpdateSpeed;                     // 0x3F8(0x4)(None)
	float                                        LumenFinalGatherQuality;                           // 0x3FC(0x4)(None)
	float                                        LumenFinalGatherLightingUpdateSpeed;               // 0x400(0x4)(None)
	float                                        LumenMaxTraceDistance;                             // 0x404(0x4)(None)
	float                                        LumenDiffuseColorBoost;                            // 0x408(0x4)(None)
	float                                        LumenSkylightLeaking;                              // 0x40C(0x4)(None)
	float                                        LumenFullSkylightLeakingDistance;                  // 0x410(0x4)(None)
	float                                        LumenSurfaceCacheResolution;                       // 0x414(0x4)(None)
	struct FLinearColor                          LumenScreenTraceColor;                             // 0x418(0x10)(None)
	float                                        LumenScreenTraceIntensity;                         // 0x428(0x4)(None)
	float                                        LumenScreenTraceScaleStartDistance;                // 0x42C(0x4)(None)
	float                                        LumenScreenTraceScaleFadeDistance;                 // 0x430(0x4)(None)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType;                                  // 0x434(0x1)(None)
	uint8                                        Pad_3A0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RayTracingGIMaxBounces;                            // 0x438(0x4)(None)
	int32                                        RayTracingGISamplesPerPixel;                       // 0x43C(0x4)(None)
	enum class EReflectionMethod                 ReflectionMethod;                                  // 0x440(0x1)(None)
	enum class EReflectionsType                  ReflectionsType;                                   // 0x441(0x1)(None)
	uint8                                        Pad_3A10[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LumenReflectionQuality;                            // 0x444(0x4)(None)
	enum class ELumenRayLightingModeOverride     LumenRayLightingMode;                              // 0x448(0x1)(None)
	uint8                                        LumenFrontLayerTranslucencyReflections : 1;        // Mask: 0x1, PropSize: 0x10x449(0x1)(None)
	uint8                                        BitPad_326 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A11[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScreenSpaceReflectionIntensity;                    // 0x44C(0x4)(None)
	float                                        ScreenSpaceReflectionQuality;                      // 0x450(0x4)(None)
	float                                        ScreenSpaceReflectionMaxRoughness;                 // 0x454(0x4)(None)
	float                                        RayTracingReflectionsMaxRoughness;                 // 0x458(0x4)(None)
	int32                                        RayTracingReflectionsMaxBounces;                   // 0x45C(0x4)(None)
	int32                                        RayTracingReflectionsSamplesPerPixel;              // 0x460(0x4)(None)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;                      // 0x464(0x1)(None)
	uint8                                        RayTracingReflectionsTranslucency : 1;             // Mask: 0x1, PropSize: 0x10x465(0x1)(None)
	uint8                                        BitPad_327 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A12[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          AmbientCubemapTint;                                // 0x468(0x10)(None)
	float                                        AmbientCubemapIntensity;                           // 0x478(0x4)(None)
	uint8                                        Pad_3A13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureCube*                          AmbientCubemap;                                    // 0x480(0x8)(ZeroConstructor)
	float                                        CameraShutterSpeed;                                // 0x488(0x4)(None)
	float                                        CameraISO;                                         // 0x48C(0x4)(None)
	float                                        DepthOfFieldFstop;                                 // 0x490(0x4)(None)
	float                                        DepthOfFieldMinFstop;                              // 0x494(0x4)(None)
	int32                                        DepthOfFieldBladeCount;                            // 0x498(0x4)(None)
	float                                        AutoExposureBias;                                  // 0x49C(0x4)(None)
	float                                        AutoExposureBiasBackup;                            // 0x4A0(0x4)(None)
	uint8                                        bOverride_AutoExposureBiasBackup : 1;              // Mask: 0x1, PropSize: 0x10x4A4(0x1)(None)
	uint8                                        BitPad_328 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        AutoExposureApplyPhysicalCameraExposure : 1;       // Mask: 0x1, PropSize: 0x10x4A8(0x1)(None)
	uint8                                        BitPad_329 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AutoExposureBiasCurve;                             // 0x4B0(0x8)(ZeroConstructor)
	class UTexture*                              AutoExposureMeterMask;                             // 0x4B8(0x8)(ZeroConstructor)
	float                                        AutoExposureLowPercent;                            // 0x4C0(0x4)(None)
	float                                        AutoExposureHighPercent;                           // 0x4C4(0x4)(None)
	float                                        AutoExposureMinBrightness;                         // 0x4C8(0x4)(None)
	float                                        AutoExposureMaxBrightness;                         // 0x4CC(0x4)(None)
	float                                        AutoExposureSpeedUp;                               // 0x4D0(0x4)(None)
	float                                        AutoExposureSpeedDown;                             // 0x4D4(0x4)(None)
	float                                        HistogramLogMin;                                   // 0x4D8(0x4)(None)
	float                                        HistogramLogMax;                                   // 0x4DC(0x4)(None)
	float                                        AutoExposureCalibrationConstant;                   // 0x4E0(0x4)(None)
	float                                        LocalExposureContrastScale;                        // 0x4E4(0x4)(None)
	float                                        LocalExposureHighlightContrastScale;               // 0x4E8(0x4)(None)
	float                                        LocalExposureShadowContrastScale;                  // 0x4EC(0x4)(None)
	float                                        LocalExposureDetailStrength;                       // 0x4F0(0x4)(None)
	float                                        LocalExposureBlurredLuminanceBlend;                // 0x4F4(0x4)(None)
	float                                        LocalExposureBlurredLuminanceKernelSizePercent;    // 0x4F8(0x4)(None)
	float                                        LocalExposureMiddleGreyBias;                       // 0x4FC(0x4)(None)
	float                                        LensFlareIntensity;                                // 0x500(0x4)(None)
	struct FLinearColor                          LensFlareTint;                                     // 0x504(0x10)(None)
	float                                        LensFlareBokehSize;                                // 0x514(0x4)(None)
	float                                        LensFlareThreshold;                                // 0x518(0x4)(None)
	uint8                                        Pad_3A16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              LensFlareBokehShape;                               // 0x520(0x8)(ZeroConstructor)
	struct FLinearColor                          LensFlareTints[0x8];                               // 0x528(0x80)(None)
	float                                        VignetteIntensity;                                 // 0x5A8(0x4)(None)
	float                                        GrainJitter;                                       // 0x5AC(0x4)(None)
	float                                        GrainIntensity;                                    // 0x5B0(0x4)(None)
	float                                        FilmGrainIntensity;                                // 0x5B4(0x4)(None)
	float                                        FilmGrainIntensityShadows;                         // 0x5B8(0x4)(None)
	float                                        FilmGrainIntensityMidtones;                        // 0x5BC(0x4)(None)
	float                                        FilmGrainIntensityHighlights;                      // 0x5C0(0x4)(None)
	float                                        FilmGrainShadowsMax;                               // 0x5C4(0x4)(None)
	float                                        FilmGrainHighlightsMin;                            // 0x5C8(0x4)(None)
	float                                        FilmGrainHighlightsMax;                            // 0x5CC(0x4)(None)
	float                                        FilmGrainTexelSize;                                // 0x5D0(0x4)(None)
	uint8                                        Pad_3A17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            FilmGrainTexture;                                  // 0x5D8(0x8)(ZeroConstructor)
	float                                        AmbientOcclusionIntensity;                         // 0x5E0(0x4)(None)
	float                                        AmbientOcclusionStaticFraction;                    // 0x5E4(0x4)(None)
	float                                        AmbientOcclusionRadius;                            // 0x5E8(0x4)(None)
	uint8                                        AmbientOcclusionRadiusInWS : 1;                    // Mask: 0x1, PropSize: 0x10x5EC(0x1)(None)
	uint8                                        BitPad_32A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AmbientOcclusionFadeDistance;                      // 0x5F0(0x4)(None)
	float                                        AmbientOcclusionFadeRadius;                        // 0x5F4(0x4)(None)
	float                                        AmbientOcclusionMinDistance;                       // 0x5F8(0x4)(None)
	float                                        AmbientOcclusionNearFadeRadius;                    // 0x5FC(0x4)(None)
	float                                        AmbientOcclusionDirectLightingIntensity;           // 0x600(0x4)(None)
	float                                        AmbientOcclusionIndirectLightingIntensity;         // 0x604(0x4)(None)
	float                                        AmbientOcclusionDistance;                          // 0x608(0x4)(None)
	float                                        AmbientOcclusionPower;                             // 0x60C(0x4)(None)
	float                                        AmbientOcclusionBias;                              // 0x610(0x4)(None)
	float                                        AmbientOcclusionQuality;                           // 0x614(0x4)(None)
	float                                        AmbientOcclusionMipBlend;                          // 0x618(0x4)(None)
	float                                        AmbientOcclusionMipScale;                          // 0x61C(0x4)(None)
	float                                        AmbientOcclusionMipThreshold;                      // 0x620(0x4)(None)
	float                                        AmbientOcclusionTemporalBlendWeight;               // 0x624(0x4)(None)
	float                                        BentNormalDirectLightingIntensity;                 // 0x628(0x4)(None)
	uint8                                        RayTracingAO : 1;                                  // Mask: 0x1, PropSize: 0x10x62C(0x1)(None)
	uint8                                        BitPad_32B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RayTracingAOSamplesPerPixel;                       // 0x630(0x4)(None)
	float                                        RayTracingAOIntensity;                             // 0x634(0x4)(None)
	float                                        RayTracingAORadius;                                // 0x638(0x4)(None)
	float                                        ColorGradingIntensity;                             // 0x63C(0x4)(None)
	class UTexture*                              ColorGradingLUT;                                   // 0x640(0x8)(ZeroConstructor)
	float                                        DepthOfFieldSensorWidth;                           // 0x648(0x4)(None)
	float                                        DepthOfFieldSqueezeFactor;                         // 0x64C(0x4)(None)
	float                                        DepthOfFieldFocalDistance;                         // 0x650(0x4)(None)
	float                                        DepthOfFieldDepthBlurAmount;                       // 0x654(0x4)(None)
	float                                        DepthOfFieldDepthBlurRadius;                       // 0x658(0x4)(None)
	float                                        DepthOfFieldFocalRegion;                           // 0x65C(0x4)(None)
	float                                        DepthOfFieldNearTransitionRegion;                  // 0x660(0x4)(None)
	float                                        DepthOfFieldFarTransitionRegion;                   // 0x664(0x4)(None)
	float                                        DepthOfFieldScale;                                 // 0x668(0x4)(None)
	float                                        DepthOfFieldNearBlurSize;                          // 0x66C(0x4)(None)
	float                                        DepthOfFieldFarBlurSize;                           // 0x670(0x4)(None)
	float                                        DepthOfFieldOcclusion;                             // 0x674(0x4)(None)
	float                                        DepthOfFieldSkyFocusDistance;                      // 0x678(0x4)(None)
	float                                        DepthOfFieldVignetteSize;                          // 0x67C(0x4)(None)
	float                                        MotionBlurAmount;                                  // 0x680(0x4)(None)
	float                                        MotionBlurMax;                                     // 0x684(0x4)(None)
	int32                                        MotionBlurTargetFPS;                               // 0x688(0x4)(None)
	float                                        MotionBlurPerObjectSize;                           // 0x68C(0x4)(None)
	float                                        LPVIntensity;                                      // 0x690(0x4)(None)
	float                                        LPVVplInjectionBias;                               // 0x694(0x4)(None)
	float                                        LPVSize;                                           // 0x698(0x4)(None)
	float                                        LPVSecondaryOcclusionIntensity;                    // 0x69C(0x4)(None)
	float                                        LPVSecondaryBounceIntensity;                       // 0x6A0(0x4)(None)
	float                                        LPVGeometryVolumeBias;                             // 0x6A4(0x4)(None)
	float                                        LPVEmissiveInjectionIntensity;                     // 0x6A8(0x4)(None)
	float                                        LPVDirectionalOcclusionIntensity;                  // 0x6AC(0x4)(None)
	float                                        LPVDirectionalOcclusionRadius;                     // 0x6B0(0x4)(None)
	float                                        LPVDiffuseOcclusionExponent;                       // 0x6B4(0x4)(None)
	float                                        LPVSpecularOcclusionExponent;                      // 0x6B8(0x4)(None)
	float                                        LPVDiffuseOcclusionIntensity;                      // 0x6BC(0x4)(None)
	float                                        LPVSpecularOcclusionIntensity;                     // 0x6C0(0x4)(None)
	enum class ETranslucencyType                 TranslucencyType;                                  // 0x6C4(0x1)(None)
	uint8                                        Pad_3A1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RayTracingTranslucencyMaxRoughness;                // 0x6C8(0x4)(None)
	int32                                        RayTracingTranslucencyRefractionRays;              // 0x6CC(0x4)(None)
	int32                                        RayTracingTranslucencySamplesPerPixel;             // 0x6D0(0x4)(None)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;                     // 0x6D4(0x1)(None)
	uint8                                        RayTracingTranslucencyRefraction : 1;              // Mask: 0x1, PropSize: 0x10x6D5(0x1)(None)
	uint8                                        BitPad_32C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A1B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PathTracingMaxBounces;                             // 0x6D8(0x4)(None)
	int32                                        PathTracingSamplesPerPixel;                        // 0x6DC(0x4)(None)
	float                                        PathTracingFilterWidth;                            // 0x6E0(0x4)(None)
	float                                        PathTracingMaxPathExposure;                        // 0x6E4(0x4)(None)
	uint8                                        PathTracingEnableReferenceDOF : 1;                 // Mask: 0x1, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingEnableReferenceAtmosphere : 1;          // Mask: 0x2, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingEnableDenoiser : 1;                     // Mask: 0x4, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingIncludeEmissive : 1;                    // Mask: 0x8, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingIncludeIndirectEmissive : 1;            // Mask: 0x10, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingIncludeDiffuse : 1;                     // Mask: 0x20, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingIncludeIndirectDiffuse : 1;             // Mask: 0x40, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingIncludeSpecular : 1;                    // Mask: 0x80, PropSize: 0x10x6E8(0x1)(None)
	uint8                                        PathTracingIncludeIndirectSpecular : 1;            // Mask: 0x1, PropSize: 0x10x6E9(0x1)(None)
	uint8                                        PathTracingIncludeVolume : 1;                      // Mask: 0x2, PropSize: 0x10x6E9(0x1)(None)
	uint8                                        PathTracingIncludeIndirectVolume : 1;              // Mask: 0x4, PropSize: 0x10x6E9(0x1)(None)
	uint8                                        BitPad_32D : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A1C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LPVFadeRange;                                      // 0x6EC(0x4)(None)
	float                                        LPVDirectionalOcclusionFadeRange;                  // 0x6F0(0x4)(None)
	float                                        ScreenPercentage;                                  // 0x6F4(0x4)(None)
	struct FWeightedBlendables                   WeightedBlendables;                                // 0x6F8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FPostProcessSettingsMaterialAdjuster> PostProcessSettingsMaterialAdjusters;              // 0x708(0x10)(ZeroConstructor, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	class USoundBase*                            PostProcessAmbientSound;                           // 0x718(0x8)(ZeroConstructor)
	uint8                                        bOverride_ClutterLayers : 1;                       // Mask: 0x1, PropSize: 0x10x720(0x1)(None)
	uint8                                        bOverride_VignetteColor : 1;                       // Mask: 0x2, PropSize: 0x10x720(0x1)(None)
	uint8                                        bOverride_MinExposureFilmToeAmount : 1;            // Mask: 0x4, PropSize: 0x10x720(0x1)(None)
	uint8                                        bOverride_MinFilmToeAmount : 1;                    // Mask: 0x8, PropSize: 0x10x720(0x1)(None)
	uint8                                        bOverride_MaxExposureFilmToeAmount : 1;            // Mask: 0x10, PropSize: 0x10x720(0x1)(None)
	uint8                                        bOverride_MaxFilmToeAmount : 1;                    // Mask: 0x20, PropSize: 0x10x720(0x1)(None)
	uint8                                        BitPad_32E : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOverrideClutterLayer>         OverrideClutterLayers;                             // 0x728(0x10)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FClutterPropertyOverride>      ClutterPropertyOverrides;                          // 0x738(0x10)(None)
	uint8                                        bOverride_DirLightIntensityMultiplier : 1;         // Mask: 0x1, PropSize: 0x10x748(0x1)(None)
	uint8                                        BitPad_32F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirLightIntensityMultiplier;                       // 0x74C(0x4)(None)
	float                                        MinExposureFilmToeAmount;                          // 0x750(0x4)(None)
	float                                        MinFilmToeAmount;                                  // 0x754(0x4)(None)
	float                                        MaxExposureFilmToeAmount;                          // 0x758(0x4)(None)
	float                                        MaxFilmToeAmount;                                  // 0x75C(0x4)(None)
	struct FLinearColor                          VignetteColor;                                     // 0x760(0x10)(None)
};

// 0x860 (0x860 - 0x0)
// ScriptStruct Engine.MinimalViewInfo
struct FMinimalViewInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	float                                        FOV;                                               // 0x30(0x4)(None)
	float                                        DesiredFOV;                                        // 0x34(0x4)(None)
	float                                        OrthoWidth;                                        // 0x38(0x4)(None)
	float                                        OrthoNearClipPlane;                                // 0x3C(0x4)(None)
	float                                        OrthoFarClipPlane;                                 // 0x40(0x4)(None)
	float                                        PerspectiveNearClipPlane;                          // 0x44(0x4)(None)
	float                                        AspectRatio;                                       // 0x48(0x4)(None)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x4C(0x1)(None)
	uint8                                        bUseFieldOfViewForLOD : 1;                         // Mask: 0x2, PropSize: 0x10x4C(0x1)(None)
	uint8                                        bUseTPVAim : 1;                                    // Mask: 0x4, PropSize: 0x10x4C(0x1)(None)
	uint8                                        BitPad_330 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              AimRotation;                                       // 0x50(0x18)(None)
	enum class ECameraProjectionMode             ProjectionMode;                                    // 0x68(0x1)(None)
	uint8                                        Pad_3A20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PostProcessBlendWeight;                            // 0x6C(0x4)(None)
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x70(0x770)(None)
	struct FVector2D                             OffCenterProjectionOffset;                         // 0x7E0(0x10)(None)
	uint8                                        Pad_3A21[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.TextSizingParameters
struct FTextSizingParameters
{
public:
	float                                        DrawX;                                             // 0x0(0x4)(None)
	float                                        DrawY;                                             // 0x4(0x4)(None)
	float                                        DrawXL;                                            // 0x8(0x4)(None)
	float                                        DrawYL;                                            // 0xC(0x4)(None)
	struct FVector2D                             Scaling;                                           // 0x10(0x10)(None)
	class UFont*                                 DrawFont;                                          // 0x20(0x8)(None)
	struct FVector2D                             SpacingAdjust;                                     // 0x28(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.WrappedStringElement
struct FWrappedStringElement
{
public:
	class FString                                Value;                                             // 0x0(0x10)(None)
	struct FVector2D                             LineExtent;                                        // 0x10(0x10)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Engine.CharacterNetworkSerializationPackedBits
struct FCharacterNetworkSerializationPackedBits
{
public:
	uint8                                        Pad_3A23[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x98 - 0x98)
// ScriptStruct Engine.CharacterServerMovePackedBits
struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits
{
public:
};

// 0x0 (0x98 - 0x98)
// ScriptStruct Engine.CharacterMoveResponsePackedBits
struct FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.CustomAttributeSetting
struct FCustomAttributeSetting
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                Meaning;                                           // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.TimecodeCustomAttributeNameSettings
struct FTimecodeCustomAttributeNameSettings
{
public:
	class FName                                  HourAttributeName;                                 // 0x0(0x8)(None)
	class FName                                  MinuteAttributeName;                               // 0x8(0x8)(None)
	class FName                                  SecondAttributeName;                               // 0x10(0x8)(None)
	class FName                                  FrameAttributeName;                                // 0x18(0x8)(None)
	class FName                                  SubframeAttributeName;                             // 0x20(0x8)(None)
	class FName                                  RateAttributeName;                                 // 0x28(0x8)(None)
	class FName                                  TakenameAttributeName;                             // 0x30(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.CustomAttribute
struct FCustomAttribute
{
public:
	uint8                                        Pad_3A24[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.CustomAttributePerBoneData
struct FCustomAttributePerBoneData
{
public:
	uint8                                        Pad_3A25[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BakedStringCustomAttribute
struct FBakedStringCustomAttribute
{
public:
	uint8                                        Pad_3A26[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BakedIntegerCustomAttribute
struct FBakedIntegerCustomAttribute
{
public:
	uint8                                        Pad_3A28[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BakedFloatCustomAttribute
struct FBakedFloatCustomAttribute
{
public:
	uint8                                        Pad_3A29[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BakedCustomAttributePerBoneData
struct FBakedCustomAttributePerBoneData
{
public:
	uint8                                        Pad_3A2A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DebugDisplayProperty
struct FDebugDisplayProperty
{
public:
	class UObject*                               Obj;                                               // 0x0(0x8)(ZeroConstructor)
	class UClass*                                WithinClass;                                       // 0x8(0x8)(None)
	uint8                                        Pad_3A2B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.DebugTextInfo
struct FDebugTextInfo
{
public:
	class AActor*                                SrcActor;                                          // 0x0(0x8)(ZeroConstructor)
	struct FVector                               SrcActorOffset;                                    // 0x8(0x18)(None)
	struct FVector                               SrcActorDesiredOffset;                             // 0x20(0x18)(None)
	class FString                                DebugText;                                         // 0x38(0x10)(None)
	float                                        TimeRemaining;                                     // 0x48(0x4)(None)
	float                                        Duration;                                          // 0x4C(0x4)(None)
	struct FColor                                TextColor;                                         // 0x50(0x4)(None)
	uint8                                        bAbsoluteLocation : 1;                             // Mask: 0x1, PropSize: 0x10x54(0x1)(None)
	uint8                                        bKeepAttachedToActor : 1;                          // Mask: 0x2, PropSize: 0x10x54(0x1)(None)
	uint8                                        bDrawShadow : 1;                                   // Mask: 0x4, PropSize: 0x10x54(0x1)(None)
	uint8                                        BitPad_331 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OrigActorLocation;                                 // 0x58(0x18)(None)
	class UFont*                                 Font;                                              // 0x70(0x8)(None)
	float                                        FontScale;                                         // 0x78(0x4)(None)
	uint8                                        Pad_3A2D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x30 - 0x20)
// ScriptStruct Engine.RawDistributionFloat
struct FRawDistributionFloat : public FRawDistribution
{
public:
	float                                        MinValue;                                          // 0x20(0x4)(None)
	float                                        MaxValue;                                          // 0x24(0x4)(None)
	class UDistributionFloat*                    Distribution;                                      // 0x28(0x8)(None)
};

// 0x40 (0x60 - 0x20)
// ScriptStruct Engine.RawDistributionVector
struct FRawDistributionVector : public FRawDistribution
{
public:
	float                                        MinValue;                                          // 0x20(0x4)(None)
	float                                        MaxValue;                                          // 0x24(0x4)(None)
	struct FVector                               MinValueVec;                                       // 0x28(0x18)(None)
	struct FVector                               MaxValueVec;                                       // 0x40(0x18)(None)
	class UDistributionVector*                   Distribution;                                      // 0x58(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EdGraphPinReference
struct FEdGraphPinReference
{
public:
	TWeakObjectPtr<class UEdGraphNode>           OwningNode;                                        // 0x0(0x8)(None)
	struct FGuid                                 PinId;                                             // 0x8(0x10)(None)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Engine.EdGraphSchemaAction
struct FEdGraphSchemaAction
{
public:
	uint8                                        Pad_3A30[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MenuDescription;                                   // 0x8(0x18)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  TooltipDescription;                                // 0x20(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  Category;                                          // 0x38(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  Keywords;                                          // 0x50(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	int32                                        Grouping;                                          // 0x68(0x4)(None)
	int32                                        SectionID;                                         // 0x6C(0x4)(None)
	TArray<class FString>                        MenuDescriptionArray;                              // 0x70(0x10)(BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        FullSearchTitlesArray;                             // 0x80(0x10)(AutoWeak, ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        FullSearchKeywordsArray;                           // 0x90(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        FullSearchCategoryArray;                           // 0xA0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        LocalizedMenuDescriptionArray;                     // 0xB0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        LocalizedFullSearchTitlesArray;                    // 0xC0(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        LocalizedFullSearchKeywordsArray;                  // 0xD0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        LocalizedFullSearchCategoryArray;                  // 0xE0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                SearchText;                                        // 0xF0(0x10)(None)
};

// 0x8 (0x108 - 0x100)
// ScriptStruct Engine.EdGraphSchemaAction_NewNode
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
public:
	class UEdGraphNode*                          NodeTemplate;                                      // 0x100(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.FullyLoadedPackagesInfo
struct FFullyLoadedPackagesInfo
{
public:
	enum class EFullyLoadPackageType             FullyLoadType;                                     // 0x0(0x1)(None)
	uint8                                        Pad_3A31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Tag;                                               // 0x8(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FName>                          PackagesToLoad;                                    // 0x18(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class UObject*>                       LoadedObjects;                                     // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LevelStreamingStatus
struct FLevelStreamingStatus
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(None)
	uint8                                        bShouldBeLoaded : 1;                               // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bShouldBeVisible : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_332 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       LODIndex;                                          // 0xC(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.NetDriverDefinition
struct FNetDriverDefinition
{
public:
	class FName                                  DefName;                                           // 0x0(0x8)(None)
	class FName                                  DriverClassName;                                   // 0x8(0x8)(None)
	class FName                                  DriverClassNameFallback;                           // 0x10(0x8)(None)
	int32                                        MaxChannelsOverride;                               // 0x18(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.IrisNetDriverConfig
struct FIrisNetDriverConfig
{
public:
	class FName                                  NetDriverDefinition;                               // 0x0(0x8)(None)
	class FName                                  NetDriverName;                                     // 0x8(0x8)(None)
	class FString                                NetDriverWildcardName;                             // 0x10(0x10)(None)
	bool                                         bEnableIris;                                       // 0x20(0x1)(None)
	uint8                                        Pad_3A33[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NamedNetDriver
struct FNamedNetDriver
{
public:
	class UNetDriver*                            NetDriver;                                         // 0x0(0x8)(None)
	uint8                                        Pad_3A34[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.URL
struct FURL
{
public:
	class FString                                Protocol;                                          // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                Host;                                              // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Port;                                              // 0x20(0x4)(None)
	int32                                        Valid;                                             // 0x24(0x4)(None)
	class FString                                Map;                                               // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                RedirectURL;                                       // 0x38(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        Op;                                                // 0x48(0x10)(ContainsInstancedReference, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                Portal;                                            // 0x58(0x10)(None)
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct Engine.WorldContext
struct FWorldContext
{
public:
	uint8                                        Pad_3A35[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FURL                                  LastURL;                                           // 0xC0(0x68)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FURL                                  LastRemoteURL;                                     // 0x128(0x68)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	class UPendingNetGame*                       PendingNetGame;                                    // 0x190(0x8)(ZeroConstructor)
	TArray<struct FFullyLoadedPackagesInfo>      PackagesToFullyLoad;                               // 0x198(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	uint8                                        Pad_3A36[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULevel*>                        LoadedLevelsForPendingMapChange;                   // 0x1B8(0x10)(ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	uint8                                        Pad_3A37[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObjectReferencer*>             ObjectReferencers;                                 // 0x1E0(0x10)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FLevelStreamingStatus>         PendingLevelStreamingStatusUpdates;                // 0x1F0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	class UGameViewportClient*                   GameViewport;                                      // 0x200(0x8)(ZeroConstructor)
	class UGameInstance*                         OwningGameInstance;                                // 0x208(0x8)(ZeroConstructor)
	TArray<struct FNamedNetDriver>               ActiveNetDrivers;                                  // 0x210(0x10)(None)
	uint8                                        Pad_3A38[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.StatColorMapEntry
struct FStatColorMapEntry
{
public:
	float                                        In;                                                // 0x0(0x4)(None)
	struct FColor                                Out;                                               // 0x4(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.StatColorMapping
struct FStatColorMapping
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FStatColorMapEntry>            ColorMap;                                          // 0x10(0x10)(None)
	uint8                                        DisableBlend : 1;                                  // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        Pad_3A3A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.DropNoteInfo
struct FDropNoteInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	class FString                                Comment;                                           // 0x30(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.ScreenMessageString
struct FScreenMessageString
{
public:
	uint64                                       Key;                                               // 0x0(0x8)(None)
	class FString                                ScreenMessage;                                     // 0x8(0x10)(None)
	struct FColor                                DisplayColor;                                      // 0x18(0x4)(None)
	float                                        TimeToDisplay;                                     // 0x1C(0x4)(None)
	float                                        CurrentTimeDisplayed;                              // 0x20(0x4)(None)
	uint8                                        Pad_3A3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TextScale;                                         // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.GameNameRedirect
struct FGameNameRedirect
{
public:
	class FName                                  OldGameName;                                       // 0x0(0x8)(None)
	class FName                                  NewGameName;                                       // 0x8(0x8)(None)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Engine.ClassRedirect
struct FClassRedirect
{
public:
	class FName                                  ObjectName;                                        // 0x0(0x8)(None)
	class FName                                  OldClassName;                                      // 0x8(0x8)(None)
	class FName                                  NewClassName;                                      // 0x10(0x8)(None)
	class FName                                  OldSubobjName;                                     // 0x18(0x8)(None)
	class FName                                  NewSubobjName;                                     // 0x20(0x8)(None)
	class FName                                  NewClassClass;                                     // 0x28(0x8)(None)
	class FName                                  NewClassPackage;                                   // 0x30(0x8)(None)
	bool                                         InstanceOnly;                                      // 0x38(0x1)(None)
	uint8                                        Pad_3A3C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.StructRedirect
struct FStructRedirect
{
public:
	class FName                                  OldStructName;                                     // 0x0(0x8)(None)
	class FName                                  NewStructName;                                     // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.PluginRedirect
struct FPluginRedirect
{
public:
	class FString                                OldPluginName;                                     // 0x0(0x10)(Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class FString                                NewPluginName;                                     // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TickPrerequisite
struct FTickPrerequisite
{
public:
	uint8                                        Pad_3A3D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ExposureSettings
struct FExposureSettings
{
public:
	float                                        FixedEV100;                                        // 0x0(0x4)(None)
	bool                                         bFixed;                                            // 0x4(0x1)(None)
	uint8                                        Pad_3A3E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Engine.MaterialShadingModelField
struct FMaterialShadingModelField
{
public:
	uint16                                       ShadingModelField;                                 // 0x0(0x2)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.StrataMaterialInfo
struct FStrataMaterialInfo
{
public:
	uint16                                       ShadingModelField;                                 // 0x0(0x2)(None)
	uint8                                        bHasShadingModelFromExpression;                    // 0x2(0x1)(None)
	uint8                                        Pad_3A41[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ConnectedProperties;                               // 0x4(0x4)(None)
	TArray<class USubsurfaceProfile*>            SubsurfaceProfiles;                                // 0x8(0x10)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Engine.RigidBodyErrorCorrection
struct FRigidBodyErrorCorrection
{
public:
	float                                        PingExtrapolation;                                 // 0x0(0x4)(None)
	float                                        PingLimit;                                         // 0x4(0x4)(None)
	float                                        ErrorPerLinearDifference;                          // 0x8(0x4)(None)
	float                                        ErrorPerAngularDifference;                         // 0xC(0x4)(None)
	float                                        MaxRestoredStateError;                             // 0x10(0x4)(None)
	float                                        MaxLinearHardSnapDistance;                         // 0x14(0x4)(None)
	float                                        PositionLerp;                                      // 0x18(0x4)(None)
	float                                        AngleLerp;                                         // 0x1C(0x4)(None)
	float                                        LinearVelocityCoefficient;                         // 0x20(0x4)(None)
	float                                        AngularVelocityCoefficient;                        // 0x24(0x4)(None)
	float                                        ErrorAccumulationSeconds;                          // 0x28(0x4)(None)
	float                                        ErrorAccumulationDistanceSq;                       // 0x2C(0x4)(None)
	float                                        ErrorAccumulationSimilarity;                       // 0x30(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.RigidBodyContactInfo
struct FRigidBodyContactInfo
{
public:
	struct FVector                               ContactPosition;                                   // 0x0(0x18)(None)
	struct FVector                               ContactNormal;                                     // 0x18(0x18)(None)
	float                                        ContactPenetration;                                // 0x30(0x4)(None)
	bool                                         bContactProbe;                                     // 0x34(0x1)(None)
	uint8                                        Pad_3A42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysMaterial[0x2];                                 // 0x38(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.CollisionImpactData
struct FCollisionImpactData
{
public:
	TArray<struct FRigidBodyContactInfo>         ContactInfos;                                      // 0x0(0x10)(None)
	struct FVector                               TotalNormalImpulse;                                // 0x10(0x18)(None)
	struct FVector                               TotalFrictionImpulse;                              // 0x28(0x18)(None)
	bool                                         bIsVelocityDeltaUnderThreshold;                    // 0x40(0x1)(None)
	uint8                                        Pad_3A43[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.FractureEffect
struct FFractureEffect
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(ZeroConstructor)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.BasedPosition
struct FBasedPosition
{
public:
	class AActor*                                Base;                                              // 0x0(0x8)(None)
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FVector                               CachedBaseLocation;                                // 0x20(0x18)(None)
	struct FRotator                              CachedBaseRotation;                                // 0x38(0x18)(None)
	struct FVector                               CachedTransPosition;                               // 0x50(0x18)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.LightmassLightSettings
struct FLightmassLightSettings
{
public:
	float                                        IndirectLightingSaturation;                        // 0x0(0x4)(None)
	float                                        ShadowExponent;                                    // 0x4(0x4)(None)
	bool                                         bUseAreaShadowsForStationaryLight;                 // 0x8(0x1)(None)
	uint8                                        Pad_3A44[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0xC - 0xC)
// ScriptStruct Engine.LightmassPointLightSettings
struct FLightmassPointLightSettings : public FLightmassLightSettings
{
public:
};

// 0x4 (0x10 - 0xC)
// ScriptStruct Engine.LightmassDirectionalLightSettings
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
public:
	float                                        LightSourceAngle;                                  // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LightmassPrimitiveSettings
struct FLightmassPrimitiveSettings
{
public:
	uint8                                        bUseTwoSidedLighting : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bShadowIndirectOnly : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseEmissiveForStaticLighting : 1;                 // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseVertexNormalForHemisphereGather : 1;           // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_333 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmissiveLightFalloffExponent;                      // 0x4(0x4)(None)
	float                                        EmissiveLightExplicitInfluenceRadius;              // 0x8(0x4)(None)
	float                                        EmissiveBoost;                                     // 0xC(0x4)(None)
	float                                        DiffuseBoost;                                      // 0x10(0x4)(None)
	float                                        FullyOccludedSamplesFraction;                      // 0x14(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LightmassDebugOptions
struct FLightmassDebugOptions
{
public:
	uint8                                        bDebugMode : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bStatsEnabled : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGatherBSPSurfacesAcrossComponents : 1;            // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_334 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CoplanarTolerance;                                 // 0x4(0x4)(None)
	uint8                                        bUseImmediateImport : 1;                           // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bImmediateProcessMappings : 1;                     // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bSortMappings : 1;                                 // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bDumpBinaryFiles : 1;                              // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        bDebugMaterials : 1;                               // Mask: 0x10, PropSize: 0x10x8(0x1)(None)
	uint8                                        bPadMappings : 1;                                  // Mask: 0x20, PropSize: 0x10x8(0x1)(None)
	uint8                                        bDebugPaddings : 1;                                // Mask: 0x40, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOnlyCalcDebugTexelMappings : 1;                   // Mask: 0x80, PropSize: 0x10x8(0x1)(None)
	uint8                                        bUseRandomColors : 1;                              // Mask: 0x1, PropSize: 0x10x9(0x1)(None)
	uint8                                        bColorBordersGreen : 1;                            // Mask: 0x2, PropSize: 0x10x9(0x1)(None)
	uint8                                        bColorByExecutionTime : 1;                         // Mask: 0x4, PropSize: 0x10x9(0x1)(None)
	uint8                                        BitPad_335 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A47[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExecutionTimeDivisor;                              // 0xC(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.SwarmDebugOptions
struct FSwarmDebugOptions
{
public:
	uint8                                        bDistributionEnabled : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bForceContentExport : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bInitialized : 1;                                  // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_3A48[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.PrimitiveMaterialRef
struct FPrimitiveMaterialRef
{
public:
	class UPrimitiveComponent*                   Primitive;                                         // 0x0(0x8)(ZeroConstructor)
	class UDecalComponent*                       Decal;                                             // 0x8(0x8)(None)
	int32                                        ElementIndex;                                      // 0x10(0x4)(None)
	uint8                                        Pad_3A49[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.MTDResult
struct FMTDResult
{
public:
	struct FVector                               Direction;                                         // 0x0(0x18)(None)
	float                                        Distance;                                          // 0x18(0x4)(None)
	uint8                                        Pad_3A4A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimSlotInfo
struct FAnimSlotInfo
{
public:
	class FName                                  SlotName;                                          // 0x0(0x8)(None)
	TArray<float>                                ChannelWeights;                                    // 0x8(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.AnimSlotDesc
struct FAnimSlotDesc
{
public:
	class FName                                  SlotName;                                          // 0x0(0x8)(None)
	int32                                        NumChannels;                                       // 0x8(0x4)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.AnimUpdateRateParameters
struct FAnimUpdateRateParameters
{
public:
	uint8                                        Pad_3A4B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUpdateRateShiftBucket            ShiftBucket;                                       // 0x1(0x1)(None)
	uint8                                        bInterpolateSkippedFrames : 1;                     // Mask: 0x1, PropSize: 0x10x2(0x1)(None)
	uint8                                        bShouldUseLodMap : 1;                              // Mask: 0x2, PropSize: 0x10x2(0x1)(None)
	uint8                                        bShouldUseMinLod : 1;                              // Mask: 0x4, PropSize: 0x10x2(0x1)(None)
	uint8                                        bSkipUpdate : 1;                                   // Mask: 0x8, PropSize: 0x10x2(0x1)(None)
	uint8                                        bSkipEvaluation : 1;                               // Mask: 0x10, PropSize: 0x10x2(0x1)(None)
	uint8                                        BitPad_336 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A4C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UpdateRate;                                        // 0x4(0x4)(None)
	int32                                        EvaluationRate;                                    // 0x8(0x4)(None)
	float                                        TickedPoseOffestTime;                              // 0xC(0x4)(None)
	float                                        AdditionalTime;                                    // 0x10(0x4)(None)
	uint8                                        Pad_3A4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BaseNonRenderedUpdateRate;                         // 0x18(0x4)(None)
	int32                                        MaxEvalRateForInterpolation;                       // 0x1C(0x4)(None)
	TArray<float>                                BaseVisibleDistanceFactorThesholds;                // 0x20(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, PersistentInstance, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           LODToFrameSkipMap;                                 // 0x30(0x50)(None)
	int32                                        SkippedUpdateFrames;                               // 0x80(0x4)(None)
	int32                                        SkippedEvalFrames;                                 // 0x84(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.POV
struct FPOV
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	float                                        FOV;                                               // 0x30(0x4)(None)
	uint8                                        Pad_3A4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.MeshBuildSettings
struct FMeshBuildSettings
{
public:
	uint8                                        bUseMikkTSpace : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bRecomputeNormals : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bRecomputeTangents : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bComputeWeightedNormals : 1;                       // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bRemoveDegenerates : 1;                            // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bBuildReversedIndexBuffer : 1;                     // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseFullPrecisionUVs : 1;                          // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseBackwardsCompatibleF16TruncUVs : 1;            // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGenerateLightmapUVs : 1;                          // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGenerateDistanceFieldAsIfTwoSided : 1;            // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        bForceOneSidedDistanceField : 1;                   // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportFaceRemap : 1;                             // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
	uint8                                        BitPad_337 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A4F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLightmapResolution;                             // 0x4(0x4)(None)
	int32                                        SrcLightmapIndex;                                  // 0x8(0x4)(None)
	int32                                        DstLightmapIndex;                                  // 0xC(0x4)(None)
	float                                        BuildScale;                                        // 0x10(0x4)(None)
	uint8                                        Pad_3A50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BuildScale3D;                                      // 0x18(0x18)(None)
	float                                        DistanceFieldResolutionScale;                      // 0x30(0x4)(None)
	uint8                                        Pad_3A51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           DistanceFieldReplacementMesh;                      // 0x38(0x8)(None)
	int32                                        MaxLumenMeshCards;                                 // 0x40(0x4)(None)
	uint8                                        Pad_3A52[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SkeletalMeshBuildSettings
struct FSkeletalMeshBuildSettings
{
public:
	uint8                                        bRecomputeNormals : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bRecomputeTangents : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseMikkTSpace : 1;                                // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bComputeWeightedNormals : 1;                       // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bRemoveDegenerates : 1;                            // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseHighPrecisionSkinWeights : 1;                  // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseFullPrecisionUVs : 1;                          // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseBackwardsCompatibleF16TruncUVs : 1;            // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        BitPad_338 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A53[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThresholdPosition;                                 // 0x4(0x4)(None)
	float                                        ThresholdTangentNormal;                            // 0x8(0x4)(None)
	float                                        ThresholdUV;                                       // 0xC(0x4)(None)
	float                                        MorphThresholdPosition;                            // 0x10(0x4)(None)
	int32                                        BoneInfluenceLimit;                                // 0x14(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ConstrainComponentPropName
struct FConstrainComponentPropName
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(None)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct Engine.SoftComponentReference
struct FSoftComponentReference : public FBaseComponentReference
{
public:
	TSoftObjectPtr<class AActor>                 OtherActor;                                        // 0x20(0x30)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CollectionReference
struct FCollectionReference
{
public:
	class FName                                  CollectionName;                                    // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.Redirector
struct FRedirector
{
public:
	class FName                                  OldName;                                           // 0x0(0x8)(None)
	class FName                                  NewName;                                           // 0x8(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.DepthFieldGlowInfo
struct FDepthFieldGlowInfo
{
public:
	uint8                                        bEnableGlow : 1;                                   // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_339 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          GlowColor;                                         // 0x4(0x10)(None)
	uint8                                        Pad_3A55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             GlowOuterRadius;                                   // 0x18(0x10)(None)
	struct FVector2D                             GlowInnerRadius;                                   // 0x28(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.FontRenderInfo
struct FFontRenderInfo
{
public:
	uint8                                        bClipText : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bDownscaleWrappedTextToFit : 1;                    // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bEnableShadow : 1;                                 // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_33A : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDepthFieldGlowInfo                   GlowInfo;                                          // 0x8(0x38)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.CanvasUVTri
struct FCanvasUVTri
{
public:
	struct FVector2D                             V0_Pos;                                            // 0x0(0x10)(None)
	struct FVector2D                             V0_UV;                                             // 0x10(0x10)(None)
	struct FLinearColor                          V0_Color;                                          // 0x20(0x10)(None)
	struct FVector2D                             V1_Pos;                                            // 0x30(0x10)(None)
	struct FVector2D                             V1_UV;                                             // 0x40(0x10)(None)
	struct FLinearColor                          V1_Color;                                          // 0x50(0x10)(None)
	struct FVector2D                             V2_Pos;                                            // 0x60(0x10)(None)
	struct FVector2D                             V2_UV;                                             // 0x70(0x10)(None)
	struct FLinearColor                          V2_Color;                                          // 0x80(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ExponentialHeightFogData
struct FExponentialHeightFogData
{
public:
	float                                        FogDensity;                                        // 0x0(0x4)(None)
	float                                        FogHeightFalloff;                                  // 0x4(0x4)(None)
	float                                        FogHeightOffset;                                   // 0x8(0x4)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.FontImportOptionsData
struct FFontImportOptionsData
{
public:
	class FString                                FontName;                                          // 0x0(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x10(0x4)(None)
	uint8                                        bEnableAntialiasing : 1;                           // Mask: 0x1, PropSize: 0x10x14(0x1)(None)
	uint8                                        bEnableBold : 1;                                   // Mask: 0x2, PropSize: 0x10x14(0x1)(None)
	uint8                                        bEnableItalic : 1;                                 // Mask: 0x4, PropSize: 0x10x14(0x1)(None)
	uint8                                        bEnableUnderline : 1;                              // Mask: 0x8, PropSize: 0x10x14(0x1)(None)
	uint8                                        bAlphaOnly : 1;                                    // Mask: 0x10, PropSize: 0x10x14(0x1)(None)
	uint8                                        BitPad_33B : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFontImportCharacterSet           CharacterSet;                                      // 0x18(0x1)(None)
	uint8                                        Pad_3A58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Chars;                                             // 0x20(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                UnicodeRange;                                      // 0x30(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                CharsFilePath;                                     // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                CharsFileWildcard;                                 // 0x50(0x10)(None)
	uint8                                        bCreatePrintableOnly : 1;                          // Mask: 0x1, PropSize: 0x10x60(0x1)(None)
	uint8                                        bIncludeASCIIRange : 1;                            // Mask: 0x2, PropSize: 0x10x60(0x1)(None)
	uint8                                        BitPad_33C : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ForegroundColor;                                   // 0x64(0x10)(None)
	uint8                                        bEnableDropShadow : 1;                             // Mask: 0x1, PropSize: 0x10x74(0x1)(None)
	uint8                                        BitPad_33D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TexturePageWidth;                                  // 0x78(0x4)(None)
	int32                                        TexturePageMaxHeight;                              // 0x7C(0x4)(None)
	int32                                        XPadding;                                          // 0x80(0x4)(None)
	int32                                        YPadding;                                          // 0x84(0x4)(None)
	int32                                        ExtendBoxTop;                                      // 0x88(0x4)(None)
	int32                                        ExtendBoxBottom;                                   // 0x8C(0x4)(None)
	int32                                        ExtendBoxRight;                                    // 0x90(0x4)(None)
	int32                                        ExtendBoxLeft;                                     // 0x94(0x4)(None)
	uint8                                        bEnableLegacyMode : 1;                             // Mask: 0x1, PropSize: 0x10x98(0x1)(None)
	uint8                                        BitPad_33E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Kerning;                                           // 0x9C(0x4)(None)
	uint8                                        bUseDistanceFieldAlpha : 1;                        // Mask: 0x1, PropSize: 0x10xA0(0x1)(None)
	uint8                                        BitPad_33F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3A5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DistanceFieldScaleFactor;                          // 0xA4(0x4)(None)
	float                                        DistanceFieldScanRadiusScale;                      // 0xA8(0x4)(None)
	uint8                                        Pad_3A5E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Engine.BaseAttenuationSettings
struct FBaseAttenuationSettings
{
public:
	uint8                                        Pad_3A5F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAttenuationDistanceModel         DistanceAlgorithm;                                 // 0x8(0x1)(None)
	enum class EAttenuationShape                 AttenuationShape;                                  // 0x9(0x1)(None)
	enum class ENaturalSoundFalloffMode          FalloffMode;                                       // 0xA(0x1)(None)
	uint8                                        Pad_3A60[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DBAttenuationAtMax;                                // 0xC(0x4)(None)
	struct FVector                               AttenuationShapeExtents;                           // 0x10(0x18)(None)
	float                                        ConeOffset;                                        // 0x28(0x4)(None)
	float                                        FalloffDistance;                                   // 0x2C(0x4)(None)
	float                                        ConeSphereRadius;                                  // 0x30(0x4)(None)
	float                                        ConeSphereFalloffDistance;                         // 0x34(0x4)(None)
	struct FRuntimeFloatCurve                    CustomAttenuationCurve;                            // 0x38(0x88)(None)
};

// 0x0 (0xC0 - 0xC0)
// ScriptStruct Engine.ForceFeedbackAttenuationSettings
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ForceFeedbackParameters
struct FForceFeedbackParameters
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	bool                                         bLooping;                                          // 0x8(0x1)(None)
	bool                                         bIgnoreTimeDilation;                               // 0x9(0x1)(None)
	bool                                         bPlayWhilePaused;                                  // 0xA(0x1)(None)
	uint8                                        Pad_3A62[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.PredictProjectilePathParams
struct FPredictProjectilePathParams
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(None)
	struct FVector                               LaunchVelocity;                                    // 0x18(0x18)(None)
	bool                                         bTraceWithCollision;                               // 0x30(0x1)(None)
	uint8                                        Pad_3A63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProjectileRadius;                                  // 0x34(0x4)(None)
	float                                        MaxSimTime;                                        // 0x38(0x4)(None)
	bool                                         bTraceWithChannel;                                 // 0x3C(0x1)(None)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x3D(0x1)(None)
	uint8                                        Pad_3A64[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x40(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x50(0x10)(None)
	float                                        SimFrequency;                                      // 0x60(0x4)(None)
	float                                        OverrideGravityZ;                                  // 0x64(0x4)(None)
	enum class EDrawDebugTrace                   DrawDebugType;                                     // 0x68(0x1)(None)
	uint8                                        Pad_3A65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawDebugTime;                                     // 0x6C(0x4)(None)
	bool                                         bTraceComplex;                                     // 0x70(0x1)(None)
	uint8                                        Pad_3A66[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PredictProjectilePathPointData
struct FPredictProjectilePathPointData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               Velocity;                                          // 0x18(0x18)(None)
	float                                        Time;                                              // 0x30(0x4)(None)
	uint8                                        Pad_3A67[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Engine.PredictProjectilePathResult
struct FPredictProjectilePathResult
{
public:
	TArray<struct FPredictProjectilePathPointData> PathData;                                          // 0x0(0x10)(None)
	struct FPredictProjectilePathPointData       LastTraceDestination;                              // 0x10(0x38)(None)
	struct FHitResult                            HitResult;                                         // 0x48(0xF0)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.ActiveHapticFeedbackEffect
struct FActiveHapticFeedbackEffect
{
public:
	class UHapticFeedbackEffect_Base*            HapticEffect;                                      // 0x0(0x8)(None)
	uint8                                        Pad_3A69[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Engine.HapticFeedbackDetails_Curve
struct FHapticFeedbackDetails_Curve
{
public:
	struct FRuntimeFloatCurve                    Frequency;                                         // 0x0(0x88)(ZeroConstructor, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Amplitude;                                         // 0x88(0x88)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ClusterNode_DEPRECATED
struct FClusterNode_DEPRECATED
{
public:
	struct FVector3f                             BoundMin;                                          // 0x0(0xC)(None)
	int32                                        FirstChild;                                        // 0xC(0x4)(None)
	struct FVector3f                             BoundMax;                                          // 0x10(0xC)(None)
	int32                                        LastChild;                                         // 0x1C(0x4)(None)
	int32                                        FirstInstance;                                     // 0x20(0x4)(None)
	int32                                        LastInstance;                                      // 0x24(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.ClusterNode
struct FClusterNode
{
public:
	struct FVector3f                             BoundMin;                                          // 0x0(0xC)(None)
	int32                                        FirstChild;                                        // 0xC(0x4)(None)
	struct FVector3f                             BoundMax;                                          // 0x10(0xC)(None)
	int32                                        LastChild;                                         // 0x1C(0x4)(None)
	int32                                        FirstInstance;                                     // 0x20(0x4)(None)
	int32                                        LastInstance;                                      // 0x24(0x4)(None)
	struct FVector3f                             MinInstanceScale;                                  // 0x28(0xC)(None)
	struct FVector3f                             MaxInstanceScale;                                  // 0x34(0xC)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.HLODSubActorDesc
struct FHLODSubActorDesc
{
public:
	uint8                                        Pad_3A6B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.HLODSubActor
struct FHLODSubActor
{
public:
	uint8                                        Pad_3A6C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.BoneAnimationTrack
struct FBoneAnimationTrack
{
public:
	struct FRawAnimSequenceTrack                 InternalTrackData;                                 // 0x0(0x30)(None)
	int32                                        BoneTreeIndex;                                     // 0x30(0x4)(None)
	class FName                                  Name;                                              // 0x34(0x8)(None)
	uint8                                        Pad_3A6D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimationCurveData
struct FAnimationCurveData
{
public:
	TArray<struct FFloatCurve>                   FloatCurves;                                       // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FTransformCurve>               TransformCurves;                                   // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AttributeKey
struct FAttributeKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	uint8                                        Pad_3A70[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0xB0 - 0x68)
// ScriptStruct Engine.AttributeCurve
struct FAttributeCurve : public FIndexedCurve
{
public:
	TArray<struct FAttributeKey>                 Keys;                                              // 0x68(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ScriptStructPath;                                  // 0x78(0x20)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ScriptStruct;                                      // 0x98(0x8)(None)
	bool                                         bShouldInterpolate;                                // 0xA0(0x1)(None)
	uint8                                        Pad_3A72[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Engine.AnimatedBoneAttribute
struct FAnimatedBoneAttribute
{
public:
	struct FAnimationAttributeIdentifier         Identifier;                                        // 0x0(0x40)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	struct FAttributeCurve                       Curve;                                             // 0x40(0xB0)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.InputDevicePropertyHandle
struct FInputDevicePropertyHandle
{
public:
	uint32                                       InternalId;                                        // 0x0(0x4)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshInstanceDataDouble
struct FInstancedStaticMeshInstanceDataDouble
{
public:
	struct FMatrix                               Transform;                                         // 0x0(0x80)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshInstanceData
struct FInstancedStaticMeshInstanceData
{
public:
	struct FMatrix44f                            Transform;                                         // 0x0(0x40)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshMappingInfo
struct FInstancedStaticMeshMappingInfo
{
public:
	uint8                                        Pad_3A73[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshRandomSeed
struct FInstancedStaticMeshRandomSeed
{
public:
	int32                                        StartInstanceIndex;                                // 0x0(0x4)(None)
	int32                                        RandomSeed;                                        // 0x4(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
struct FInstancedStaticMeshLightMapInstanceData
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	TArray<struct FGuid>                         MapBuildDataIds;                                   // 0x60(0x10)(None)
};

// 0xD8 (0x190 - 0xB8)
// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xB8(0x8)(ZeroConstructor)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting;                              // 0xC0(0x70)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData;                                 // 0x130(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<float>                                PerInstanceSMCustomData;                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	uint8                                        Pad_3A80[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstancingRandomSeed;                              // 0x170(0x4)(None)
	uint8                                        Pad_3A81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstancedStaticMeshRandomSeed> AdditionalRandomSeeds;                             // 0x178(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash)
	bool                                         bHasPerInstanceHitProxies;                         // 0x188(0x1)(None)
	uint8                                        Pad_3A82[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.FoliageAttachmentOverride
struct FFoliageAttachmentOverride
{
public:
	class FName                                  ForFoliageTypeName;                                // 0x0(0x8)(None)
	class UClass*                                OverrideActorComponent;                            // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.UniqueNetIdReplNetSerializerStringStruct
struct FUniqueNetIdReplNetSerializerStringStruct
{
public:
	class FString                                String;                                            // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.UniqueNetIdReplNetSerializerNameStruct
struct FUniqueNetIdReplNetSerializerNameStruct
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.InterpEdSelKey
struct FInterpEdSelKey
{
public:
	class UInterpGroup*                          Group;                                             // 0x0(0x8)(ZeroConstructor)
	class UInterpTrack*                          Track;                                             // 0x8(0x8)(None)
	int32                                        KeyIndex;                                          // 0x10(0x4)(None)
	float                                        UnsnappedPosition;                                 // 0x14(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.CameraPreviewInfo
struct FCameraPreviewInfo
{
public:
	class UClass*                                PawnClass;                                         // 0x0(0x8)(ZeroConstructor)
	class UAnimSequence*                         AnimSeq;                                           // 0x8(0x8)(ZeroConstructor)
	struct FVector                               Location;                                          // 0x10(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(None)
	class APawn*                                 PawnInst;                                          // 0x40(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SupportedSubTrackInfo
struct FSupportedSubTrackInfo
{
public:
	class UClass*                                SupportedClass;                                    // 0x0(0x8)(None)
	class FString                                SubTrackName;                                      // 0x8(0x10)(None)
	int32                                        GroupIndex;                                        // 0x18(0x4)(None)
	uint8                                        Pad_3A83[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SubTrackGroup
struct FSubTrackGroup
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<int32>                                TrackIndices;                                      // 0x10(0x10)(None)
	uint8                                        bIsCollapsed : 1;                                  // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        bIsSelected : 1;                                   // Mask: 0x2, PropSize: 0x10x20(0x1)(None)
	uint8                                        Pad_3A84[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimControlTrackKey
struct FAnimControlTrackKey
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(None)
	uint8                                        Pad_3A85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         AnimSeq;                                           // 0x8(0x8)(None)
	float                                        AnimStartOffset;                                   // 0x10(0x4)(None)
	float                                        AnimEndOffset;                                     // 0x14(0x4)(None)
	float                                        AnimPlayRate;                                      // 0x18(0x4)(None)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        Pad_3A86[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.BoolTrackKey
struct FBoolTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	uint8                                        Value : 1;                                         // Mask: 0x1, PropSize: 0x10x4(0x1)(None)
	uint8                                        Pad_3A87[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.DirectorTrackCut
struct FDirectorTrackCut
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	float                                        TransitionTime;                                    // 0x4(0x4)(None)
	class FName                                  TargetCamGroup;                                    // 0x8(0x8)(None)
	int32                                        ShotNumber;                                        // 0x10(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.EventTrackKey
struct FEventTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	class FName                                  EventName;                                         // 0x4(0x8)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.InterpLookupPoint
struct FInterpLookupPoint
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(None)
	float                                        Time;                                              // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InterpLookupTrack
struct FInterpLookupTrack
{
public:
	TArray<struct FInterpLookupPoint>            Points;                                            // 0x0(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ParticleReplayTrackKey
struct FParticleReplayTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	float                                        Duration;                                          // 0x4(0x4)(None)
	int32                                        ClipIDNumber;                                      // 0x8(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SoundTrackKey
struct FSoundTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	float                                        Volume;                                            // 0x4(0x4)(None)
	float                                        Pitch;                                             // 0x8(0x4)(None)
	uint8                                        Pad_3A88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ToggleTrackKey
struct FToggleTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	enum class ETrackToggleAction                ToggleAction;                                      // 0x4(0x1)(None)
	uint8                                        Pad_3A8A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.VisibilityTrackKey
struct FVisibilityTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	enum class EVisibilityTrackAction            Action;                                            // 0x4(0x1)(None)
	enum class EVisibilityTrackCondition         ActiveCondition;                                   // 0x5(0x1)(None)
	uint8                                        Pad_3A8D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.ISMClientHandle
struct FISMClientHandle
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	struct FGuid                                 Guid;                                              // 0x4(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ISMClientInstanceManagerData
struct FISMClientInstanceManagerData
{
public:
	uint8                                        Pad_3A8E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.NewLevelInstanceParams
struct FNewLevelInstanceParams
{
public:
	enum class ELevelInstanceCreationType        Type;                                              // 0x0(0x1)(None)
	enum class ELevelInstancePivotType           PivotType;                                         // 0x1(0x1)(None)
	uint8                                        Pad_3A8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PivotActor;                                        // 0x8(0x8)(ZeroConstructor)
	bool                                         bAlwaysShowDialog;                                 // 0x10(0x1)(None)
	uint8                                        Pad_3A90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                TemplateWorld;                                     // 0x18(0x8)(ZeroConstructor)
	class FString                                LevelPackageName;                                  // 0x20(0x10)(None)
	bool                                         bPromptForSave;                                    // 0x30(0x1)(None)
	uint8                                        Pad_3A91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                LevelInstanceClass;                                // 0x38(0x8)(None)
	bool                                         bExternalActors;                                   // 0x40(0x1)(None)
	bool                                         bForceExternalActors;                              // 0x41(0x1)(None)
	bool                                         bHideCreationType;                                 // 0x42(0x1)(None)
	uint8                                        Pad_3A92[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ExpressionExecOutput
struct FExpressionExecOutput
{
public:
	class UMaterialExpression*                   Expression;                                        // 0x0(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.CustomFloatInput
struct FCustomFloatInput
{
public:
	struct FExpressionInput                      Input;                                             // 0x0(0x28)(None)
	enum class ECustomDataInputType              Type;                                              // 0x28(0x1)(None)
	uint8                                        Pad_3A95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       IndexOffset;                                       // 0x2C(0x4)(None)
	class FName                                  Name;                                              // 0x30(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.MaterialExpressionCollection
struct FMaterialExpressionCollection
{
public:
	TArray<class UMaterialExpression*>           Expressions;                                       // 0x0(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class UMaterialExpressionComment*>    EditorComments;                                    // 0x10(0x10)(ZeroConstructor)
	class UMaterialExpressionExecBegin*          ExpressionExecBegin;                               // 0x20(0x8)(ZeroConstructor)
	class UMaterialExpressionExecEnd*            ExpressionExecEnd;                                 // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.CustomInput
struct FCustomInput
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(None)
	struct FExpressionInput                      Input;                                             // 0x8(0x28)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.CustomOutput
struct FCustomOutput
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(None)
	enum class ECustomMaterialOutputType         OutputType;                                        // 0x8(0x1)(None)
	uint8                                        Pad_3A98[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.CustomDefine
struct FCustomDefine
{
public:
	class FString                                DefineName;                                        // 0x0(0x10)(SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                DefineValue;                                       // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.DataDrivenShaderPlatformInfoInput
struct FDataDrivenShaderPlatformInfoInput
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(None)
	enum class EDataDrivenShaderPlatformInfoCondition PropertyCondition;                                 // 0x8(0x1)(None)
	uint8                                        Pad_3A99[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.FunctionExpressionInput
struct FFunctionExpressionInput
{
public:
	class UMaterialExpressionFunctionInput*      ExpressionInput;                                   // 0x0(0x8)(ZeroConstructor)
	struct FGuid                                 ExpressionInputId;                                 // 0x8(0x10)(None)
	struct FExpressionInput                      Input;                                             // 0x18(0x28)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.FunctionExpressionOutput
struct FFunctionExpressionOutput
{
public:
	class UMaterialExpressionFunctionOutput*     ExpressionOutput;                                  // 0x0(0x8)(None)
	struct FGuid                                 ExpressionOutputId;                                // 0x8(0x10)(None)
	struct FExpressionOutput                     Output;                                            // 0x18(0x1C)(None)
	uint8                                        Pad_3A9A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CompositeReroute
struct FCompositeReroute
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class UMaterialExpressionReroute*            Expression;                                        // 0x8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.SwitchCustomInput
struct FSwitchCustomInput
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(None)
	struct FExpressionInput                      Input;                                             // 0x8(0x28)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
struct FMaterialInstanceBasePropertyOverrides
{
public:
	uint8                                        bOverride_OpacityMaskClipValue : 1;                // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_BlendMode : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_ShadingModel : 1;                        // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_DitheredLODTransition : 1;               // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_CastDynamicShadowAsMasked : 1;           // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_TwoSided : 1;                            // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_bIsThinSurface : 1;                      // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_OutputTranslucentVelocity : 1;           // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverride_MaxWorldPositionOffsetDisplacement : 1;  // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        TwoSided : 1;                                      // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bIsThinSurface : 1;                                // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        DitheredLODTransition : 1;                         // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        bCastDynamicShadowAsMasked : 1;                    // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
	uint8                                        bOutputTranslucentVelocity : 1;                    // Mask: 0x20, PropSize: 0x10x1(0x1)(None)
	uint8                                        BitPad_347 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EBlendMode                        BlendMode;                                         // 0x2(0x1)(None)
	enum class EMaterialShadingModel             ShadingModel;                                      // 0x3(0x1)(None)
	float                                        OpacityMaskClipValue;                              // 0x4(0x4)(None)
	float                                        MaxWorldPositionOffsetDisplacement;                // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LightmassMaterialInterfaceSettings
struct FLightmassMaterialInterfaceSettings
{
public:
	float                                        EmissiveBoost;                                     // 0x0(0x4)(None)
	float                                        DiffuseBoost;                                      // 0x4(0x4)(None)
	float                                        ExportResolutionScale;                             // 0x8(0x4)(None)
	uint8                                        bCastShadowAsMasked : 1;                           // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverrideCastShadowAsMasked : 1;                   // Mask: 0x2, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverrideEmissiveBoost : 1;                        // Mask: 0x4, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverrideDiffuseBoost : 1;                         // Mask: 0x8, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOverrideExportResolutionScale : 1;                // Mask: 0x10, PropSize: 0x10xC(0x1)(None)
	uint8                                        Pad_3A9B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MaterialTextureInfo
struct FMaterialTextureInfo
{
public:
	float                                        SamplingScale;                                     // 0x0(0x4)(None)
	int32                                        UVChannelIndex;                                    // 0x4(0x4)(None)
	class FName                                  TextureName;                                       // 0x8(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.MaterialLayersFunctionsEditorOnlyData
struct FMaterialLayersFunctionsEditorOnlyData
{
public:
	TArray<bool>                                 LayerStates;                                       // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FText>                          LayerNames;                                        // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 RestrictToLayerRelatives;                          // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 RestrictToBlendRelatives;                          // 0x30(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FGuid>                         LayerGuids;                                        // 0x40(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<enum class EMaterialLayerLinkState>   LayerLinkStates;                                   // 0x50(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FGuid>                         DeletedParentLayerGuids;                           // 0x60(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.MaterialLayersFunctionsRuntimeData
struct FMaterialLayersFunctionsRuntimeData
{
public:
	TArray<class UMaterialFunctionInterface*>    Layers;                                            // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class UMaterialFunctionInterface*>    Blends;                                            // 0x10(0x10)(None)
};

// 0xE0 (0x100 - 0x20)
// ScriptStruct Engine.MaterialLayersFunctions
struct FMaterialLayersFunctions : public FMaterialLayersFunctionsRuntimeData
{
public:
	struct FMaterialLayersFunctionsEditorOnlyData EditorOnly;                                        // 0x20(0x70)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 LayerStates;                                       // 0x90(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class FText>                          LayerNames;                                        // 0xA0(0x10)(AutoWeak, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 RestrictToLayerRelatives;                          // 0xB0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 RestrictToBlendRelatives;                          // 0xC0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FGuid>                         LayerGuids;                                        // 0xD0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<enum class EMaterialLayerLinkState>   LayerLinkStates;                                   // 0xE0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FGuid>                         DeletedParentLayerGuids;                           // 0xF0(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.MaterialProxySettings
struct FMaterialProxySettings
{
public:
	enum class ETextureSizingType                TextureSizingType;                                 // 0x0(0x1)(None)
	uint8                                        Pad_3A9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             TextureSize;                                       // 0x4(0x8)(None)
	float                                        TargetTexelDensityPerMeter;                        // 0xC(0x4)(None)
	float                                        MeshMaxScreenSizePercent;                          // 0x10(0x4)(None)
	uint8                                        Pad_3A9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MeshMinDrawDistance;                               // 0x18(0x8)(None)
	float                                        GutterSpace;                                       // 0x20(0x4)(None)
	float                                        MetallicConstant;                                  // 0x24(0x4)(None)
	float                                        RoughnessConstant;                                 // 0x28(0x4)(None)
	float                                        AnisotropyConstant;                                // 0x2C(0x4)(None)
	float                                        SpecularConstant;                                  // 0x30(0x4)(None)
	float                                        OpacityConstant;                                   // 0x34(0x4)(None)
	float                                        OpacityMaskConstant;                               // 0x38(0x4)(None)
	float                                        AmbientOcclusionConstant;                          // 0x3C(0x4)(None)
	enum class EMaterialMergeType                MaterialMergeType;                                 // 0x40(0x1)(None)
	enum class EBlendMode                        BlendMode;                                         // 0x41(0x1)(None)
	uint8                                        bAllowTwoSidedMaterial : 1;                        // Mask: 0x1, PropSize: 0x10x42(0x1)(None)
	uint8                                        bNormalMap : 1;                                    // Mask: 0x2, PropSize: 0x10x42(0x1)(None)
	uint8                                        bTangentMap : 1;                                   // Mask: 0x4, PropSize: 0x10x42(0x1)(None)
	uint8                                        bMetallicMap : 1;                                  // Mask: 0x8, PropSize: 0x10x42(0x1)(None)
	uint8                                        bRoughnessMap : 1;                                 // Mask: 0x10, PropSize: 0x10x42(0x1)(None)
	uint8                                        bAnisotropyMap : 1;                                // Mask: 0x20, PropSize: 0x10x42(0x1)(None)
	uint8                                        bSpecularMap : 1;                                  // Mask: 0x40, PropSize: 0x10x42(0x1)(None)
	uint8                                        bEmissiveMap : 1;                                  // Mask: 0x80, PropSize: 0x10x42(0x1)(None)
	uint8                                        bOpacityMap : 1;                                   // Mask: 0x1, PropSize: 0x10x43(0x1)(None)
	uint8                                        bOpacityMaskMap : 1;                               // Mask: 0x2, PropSize: 0x10x43(0x1)(None)
	uint8                                        bAmbientOcclusionMap : 1;                          // Mask: 0x4, PropSize: 0x10x43(0x1)(None)
	uint8                                        BitPad_348 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	struct FIntPoint                             DiffuseTextureSize;                                // 0x44(0x8)(None)
	struct FIntPoint                             NormalTextureSize;                                 // 0x4C(0x8)(None)
	struct FIntPoint                             TangentTextureSize;                                // 0x54(0x8)(None)
	struct FIntPoint                             MetallicTextureSize;                               // 0x5C(0x8)(None)
	struct FIntPoint                             RoughnessTextureSize;                              // 0x64(0x8)(None)
	struct FIntPoint                             AnisotropyTextureSize;                             // 0x6C(0x8)(None)
	struct FIntPoint                             SpecularTextureSize;                               // 0x74(0x8)(None)
	struct FIntPoint                             EmissiveTextureSize;                               // 0x7C(0x8)(None)
	struct FIntPoint                             OpacityTextureSize;                                // 0x84(0x8)(None)
	struct FIntPoint                             OpacityMaskTextureSize;                            // 0x8C(0x8)(None)
	struct FIntPoint                             AmbientOcclusionTextureSize;                       // 0x94(0x8)(None)
	uint8                                        Pad_3AA0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MaterialParameterInfo
struct FMaterialParameterInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	enum class EMaterialParameterAssociation     Association;                                       // 0x8(0x1)(None)
	uint8                                        Pad_3AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0xC(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.ParameterChannelNames
struct FParameterChannelNames
{
public:
	class FText                                  R;                                                 // 0x0(0x18)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FText                                  G;                                                 // 0x18(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FText                                  B;                                                 // 0x30(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FText                                  A;                                                 // 0x48(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.StaticComponentMaskValue
struct FStaticComponentMaskValue
{
public:
	bool                                         R;                                                 // 0x0(0x1)(None)
	bool                                         G;                                                 // 0x1(0x1)(None)
	bool                                         B;                                                 // 0x2(0x1)(None)
	bool                                         A;                                                 // 0x3(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.CustomDataRowCount
struct FCustomDataRowCount
{
public:
	uint16                                       ConstValue;                                        // 0x0(0x2)(None)
	uint8                                        Method;                                            // 0x2(0x1)(None)
	uint8                                        ParamType;                                         // 0x3(0x1)(None)
	class FName                                  ParamName;                                         // 0x4(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.CameraCutInfo
struct FCameraCutInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	float                                        Timestamp;                                         // 0x18(0x4)(None)
	uint8                                        Pad_3AA3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.InterpGroupActorInfo
struct FInterpGroupActorInfo
{
public:
	class FName                                  ObjectName;                                        // 0x0(0x8)(None)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.StaticMeshBudgetInfo
struct FStaticMeshBudgetInfo
{
public:
	class FName                                  LodGroupName;                                      // 0x0(0x8)(None)
	double                                       MinimumExtent;                                     // 0x8(0x8)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.MeshUVChannelInfo
struct FMeshUVChannelInfo
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(None)
	bool                                         bOverrideDensities;                                // 0x1(0x1)(None)
	uint8                                        Pad_3AA5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocalUVDensities[0x4];                             // 0x4(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.PurchaseInfo
struct FPurchaseInfo
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                DisplayDescription;                                // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
	class FString                                DisplayPrice;                                      // 0x30(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.NavAgentSelector
struct FNavAgentSelector
{
public:
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x1(0x1)(None)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x1(0x1)(None)
	uint8                                        Pad_3AA8[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.NavAvoidanceMask
struct FNavAvoidanceMask
{
public:
	uint8                                        bGroup0 : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup1 : 1;                                       // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup2 : 1;                                       // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup3 : 1;                                       // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup4 : 1;                                       // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup5 : 1;                                       // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup6 : 1;                                       // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup7 : 1;                                       // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bGroup8 : 1;                                       // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup9 : 1;                                       // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup10 : 1;                                      // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup11 : 1;                                      // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup12 : 1;                                      // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup13 : 1;                                      // Mask: 0x20, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup14 : 1;                                      // Mask: 0x40, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup15 : 1;                                      // Mask: 0x80, PropSize: 0x10x1(0x1)(None)
	uint8                                        bGroup16 : 1;                                      // Mask: 0x1, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup17 : 1;                                      // Mask: 0x2, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup18 : 1;                                      // Mask: 0x4, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup19 : 1;                                      // Mask: 0x8, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup20 : 1;                                      // Mask: 0x10, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup21 : 1;                                      // Mask: 0x20, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup22 : 1;                                      // Mask: 0x40, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup23 : 1;                                      // Mask: 0x80, PropSize: 0x10x2(0x1)(None)
	uint8                                        bGroup24 : 1;                                      // Mask: 0x1, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup25 : 1;                                      // Mask: 0x2, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup26 : 1;                                      // Mask: 0x4, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup27 : 1;                                      // Mask: 0x8, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup28 : 1;                                      // Mask: 0x10, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup29 : 1;                                      // Mask: 0x20, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup30 : 1;                                      // Mask: 0x40, PropSize: 0x10x3(0x1)(None)
	uint8                                        bGroup31 : 1;                                      // Mask: 0x80, PropSize: 0x10x3(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.NavigationLinkBase
struct FNavigationLinkBase
{
public:
	float                                        LeftProjectHeight;                                 // 0x0(0x4)(None)
	float                                        MaxFallDownLength;                                 // 0x4(0x4)(None)
	uint8                                        Pad_3AB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapRadius;                                        // 0xC(0x4)(None)
	float                                        SnapHeight;                                        // 0x10(0x4)(None)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x14(0x4)(None)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x18(0x1)(None)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x19(0x1)(None)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x19(0x1)(None)
	uint8                                        Pad_3AB2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENavLinkDirection                 Direction;                                         // 0x1C(0x1)(None)
	uint8                                        bUseSnapHeight : 1;                                // Mask: 0x1, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bSnapToCheapestArea : 1;                           // Mask: 0x2, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag0 : 1;                                  // Mask: 0x4, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag1 : 1;                                  // Mask: 0x8, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag2 : 1;                                  // Mask: 0x10, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag3 : 1;                                  // Mask: 0x20, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag4 : 1;                                  // Mask: 0x40, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag5 : 1;                                  // Mask: 0x80, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bCustomFlag6 : 1;                                  // Mask: 0x1, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bCustomFlag7 : 1;                                  // Mask: 0x2, PropSize: 0x10x1E(0x1)(None)
	uint8                                        BitPad_349 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AB3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AreaClass;                                         // 0x20(0x8)(None)
	uint8                                        Pad_3AB4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x60 - 0x30)
// ScriptStruct Engine.NavigationLink
struct FNavigationLink : public FNavigationLinkBase
{
public:
	struct FVector                               Left;                                              // 0x30(0x18)(None)
	struct FVector                               Right;                                             // 0x48(0x18)(None)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct Engine.NavigationSegmentLink
struct FNavigationSegmentLink : public FNavigationLinkBase
{
public:
	struct FVector                               LeftStart;                                         // 0x30(0x18)(None)
	struct FVector                               LeftEnd;                                           // 0x48(0x18)(None)
	struct FVector                               RightStart;                                        // 0x60(0x18)(None)
	struct FVector                               RightEnd;                                          // 0x78(0x18)(None)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.Vector_NetQuantize10
struct FVector_NetQuantize10 : public FVector
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.OverlapResult
struct FOverlapResult
{
public:
	struct FActorInstanceHandle                  OverlapObjectHandle;                               // 0x0(0x18)(ZeroConstructor)
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0x18(0x8)(None)
	int32                                        ItemIndex;                                         // 0x20(0x4)(None)
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        Pad_3ABA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ParticleBurst
struct FParticleBurst
{
public:
	int32                                        Count;                                             // 0x0(0x4)(None)
	int32                                        CountLow;                                          // 0x4(0x4)(None)
	float                                        Time;                                              // 0x8(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ParticleCurvePair
struct FParticleCurvePair
{
public:
	class FString                                CurveName;                                         // 0x0(0x10)(None)
	class UObject*                               CurveObject;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ParticleRandomSeedInfo
struct FParticleRandomSeedInfo
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	uint8                                        bGetSeedFromInstance : 1;                          // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bInstanceSeedIsIndex : 1;                          // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bResetSeedOnEmitterLooping : 1;                    // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bRandomlySelectSeedArray : 1;                      // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_34A : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3ABB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RandomSeeds;                                       // 0x10(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.BeamModifierOptions
struct FBeamModifierOptions
{
public:
	uint8                                        bModify : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bScale : 1;                                        // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bLock : 1;                                         // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_3ABC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ParticleEvent_GenerateInfo
struct FParticleEvent_GenerateInfo
{
public:
	enum class EParticleEventType                Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_3ABD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frequency;                                         // 0x4(0x4)(None)
	int32                                        ParticleFrequency;                                 // 0x8(0x4)(None)
	uint8                                        FirstTimeOnly : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        LastTimeOnly : 1;                                  // Mask: 0x2, PropSize: 0x10xC(0x1)(None)
	uint8                                        UseReflectedImpactVector : 1;                      // Mask: 0x4, PropSize: 0x10xC(0x1)(None)
	uint8                                        bUseOrbitOffset : 1;                               // Mask: 0x8, PropSize: 0x10xC(0x1)(None)
	uint8                                        BitPad_34B : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3ABE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomName;                                        // 0x10(0x8)(None)
	TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;                  // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LocationBoneSocketInfo
struct FLocationBoneSocketInfo
{
public:
	class FName                                  BoneSocketName;                                    // 0x0(0x8)(None)
	struct FVector                               Offset;                                            // 0x8(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.OrbitOptions
struct FOrbitOptions
{
public:
	uint8                                        bProcessDuringSpawn : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bProcessDuringUpdate : 1;                          // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseEmitterTime : 1;                               // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_3ABF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.EmitterDynamicParameter
struct FEmitterDynamicParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(None)
	uint8                                        bUseEmitterTime : 1;                               // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bSpawnTimeOnly : 1;                                // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_34C : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EEmitterDynamicParameterValue     ValueMethod;                                       // 0xC(0x1)(None)
	uint8                                        Pad_3AC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bScaleVelocityByParamValue : 1;                    // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_34D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionFloat                 ParamValue;                                        // 0x18(0x30)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.BeamTargetData
struct FBeamTargetData
{
public:
	class FName                                  TargetName;                                        // 0x0(0x8)(None)
	float                                        TargetPercentage;                                  // 0x8(0x4)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
struct FGPUSpriteLocalVectorFieldInfo
{
public:
	class UVectorField*                          Field;                                             // 0x0(0x8)(None)
	uint8                                        Pad_3AC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	struct FRotator                              MinInitialRotation;                                // 0x70(0x18)(None)
	struct FRotator                              MaxInitialRotation;                                // 0x88(0x18)(None)
	struct FRotator                              RotationRate;                                      // 0xA0(0x18)(None)
	float                                        Intensity;                                         // 0xB8(0x4)(None)
	float                                        Tightness;                                         // 0xBC(0x4)(None)
	uint8                                        bIgnoreComponentTransform : 1;                     // Mask: 0x1, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bTileX : 1;                                        // Mask: 0x2, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bTileY : 1;                                        // Mask: 0x4, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bTileZ : 1;                                        // Mask: 0x8, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bUseFixDT : 1;                                     // Mask: 0x10, PropSize: 0x10xC0(0x1)(None)
	uint8                                        Pad_3AC5[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x350 (0x350 - 0x0)
// ScriptStruct Engine.GPUSpriteEmitterInfo
struct FGPUSpriteEmitterInfo
{
public:
	class UParticleModuleRequired*               RequiredModule;                                    // 0x0(0x8)(ZeroConstructor)
	class UParticleModuleSpawn*                  SpawnModule;                                       // 0x8(0x8)(ZeroConstructor)
	class UParticleModuleSpawnPerUnit*           SpawnPerUnitModule;                                // 0x10(0x8)(ZeroConstructor)
	TArray<class UParticleModule*>               SpawnModules;                                      // 0x18(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGPUSpriteLocalVectorFieldInfo        LocalVectorField;                                  // 0x30(0xD0)(ZeroConstructor)
	struct FFloatDistribution                    VectorFieldScale;                                  // 0x100(0x20)(AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    DragCoefficient;                                   // 0x120(0x20)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    PointAttractorStrength;                            // 0x140(0x20)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    Resilience;                                        // 0x160(0x20)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                               ConstantAcceleration;                              // 0x180(0x18)(None)
	struct FVector                               PointAttractorPosition;                            // 0x198(0x18)(None)
	float                                        PointAttractorRadiusSq;                            // 0x1B0(0x4)(None)
	uint8                                        Pad_3AC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OrbitOffsetBase;                                   // 0x1B8(0x18)(None)
	struct FVector                               OrbitOffsetRange;                                  // 0x1D0(0x18)(None)
	struct FVector2D                             InvMaxSize;                                        // 0x1E8(0x10)(None)
	float                                        InvRotationRateScale;                              // 0x1F8(0x4)(None)
	float                                        MaxLifetime;                                       // 0x1FC(0x4)(None)
	int32                                        MaxParticleCount;                                  // 0x200(0x4)(None)
	enum class EParticleScreenAlignment          ScreenAlignment;                                   // 0x204(0x1)(None)
	enum class EParticleAxisLock                 LockAxisFlag;                                      // 0x205(0x1)(None)
	uint8                                        Pad_3AC9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableCollision : 1;                              // Mask: 0x1, PropSize: 0x10x208(0x1)(None)
	uint8                                        BitPad_34E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3ACA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EParticleCollisionMode            CollisionMode;                                     // 0x20C(0x1)(None)
	uint8                                        Pad_3ACB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRemoveHMDRoll : 1;                                // Mask: 0x1, PropSize: 0x10x210(0x1)(None)
	uint8                                        BitPad_34F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3ACC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFacingCameraBlendDistance;                      // 0x214(0x4)(None)
	float                                        MaxFacingCameraBlendDistance;                      // 0x218(0x4)(None)
	uint8                                        Pad_3ACD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionVector                DynamicColor;                                      // 0x220(0x60)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                 DynamicAlpha;                                      // 0x280(0x30)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                DynamicColorScale;                                 // 0x2B0(0x60)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                 DynamicAlphaScale;                                 // 0x310(0x30)(None)
	uint8                                        Pad_3ACE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x240 (0x240 - 0x0)
// ScriptStruct Engine.GPUSpriteResourceData
struct FGPUSpriteResourceData
{
public:
	TArray<struct FColor>                        QuantizedColorSamples;                             // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FColor>                        QuantizedMiscSamples;                              // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FColor>                        QuantizedSimulationAttrSamples;                    // 0x20(0x10)(None)
	struct FVector4                              ColorScale;                                        // 0x30(0x20)(None)
	struct FVector4                              ColorBias;                                         // 0x50(0x20)(None)
	struct FVector4                              MiscScale;                                         // 0x70(0x20)(None)
	struct FVector4                              MiscBias;                                          // 0x90(0x20)(None)
	struct FVector4                              SimulationAttrCurveScale;                          // 0xB0(0x20)(None)
	struct FVector4                              SimulationAttrCurveBias;                           // 0xD0(0x20)(None)
	struct FVector4                              SubImageSize;                                      // 0xF0(0x20)(None)
	struct FVector4                              SizeBySpeed;                                       // 0x110(0x20)(None)
	struct FVector                               ConstantAcceleration;                              // 0x130(0x18)(None)
	struct FVector                               OrbitOffsetBase;                                   // 0x148(0x18)(None)
	struct FVector                               OrbitOffsetRange;                                  // 0x160(0x18)(None)
	struct FVector                               OrbitFrequencyBase;                                // 0x178(0x18)(None)
	struct FVector                               OrbitFrequencyRange;                               // 0x190(0x18)(None)
	struct FVector                               OrbitPhaseBase;                                    // 0x1A8(0x18)(None)
	struct FVector                               OrbitPhaseRange;                                   // 0x1C0(0x18)(None)
	float                                        GlobalVectorFieldScale;                            // 0x1D8(0x4)(None)
	float                                        GlobalVectorFieldTightness;                        // 0x1DC(0x4)(None)
	float                                        PerParticleVectorFieldScale;                       // 0x1E0(0x4)(None)
	float                                        PerParticleVectorFieldBias;                        // 0x1E4(0x4)(None)
	float                                        DragCoefficientScale;                              // 0x1E8(0x4)(None)
	float                                        DragCoefficientBias;                               // 0x1EC(0x4)(None)
	float                                        ResilienceScale;                                   // 0x1F0(0x4)(None)
	float                                        ResilienceBias;                                    // 0x1F4(0x4)(None)
	float                                        CollisionRadiusScale;                              // 0x1F8(0x4)(None)
	float                                        CollisionRadiusBias;                               // 0x1FC(0x4)(None)
	float                                        CollisionTimeBias;                                 // 0x200(0x4)(None)
	float                                        CollisionRandomSpread;                             // 0x204(0x4)(None)
	float                                        CollisionRandomDistribution;                       // 0x208(0x4)(None)
	float                                        OneMinusFriction;                                  // 0x20C(0x4)(None)
	float                                        RotationRateScale;                                 // 0x210(0x4)(None)
	float                                        CameraMotionBlurAmount;                            // 0x214(0x4)(None)
	enum class EParticleScreenAlignment          ScreenAlignment;                                   // 0x218(0x1)(None)
	enum class EParticleAxisLock                 LockAxisFlag;                                      // 0x219(0x1)(None)
	uint8                                        Pad_3ACF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PivotOffset;                                       // 0x220(0x10)(None)
	uint8                                        bRemoveHMDRoll : 1;                                // Mask: 0x1, PropSize: 0x10x230(0x1)(None)
	uint8                                        BitPad_350 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFacingCameraBlendDistance;                      // 0x234(0x4)(None)
	float                                        MaxFacingCameraBlendDistance;                      // 0x238(0x4)(None)
	uint8                                        Pad_3AD1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.ParticleSystemLOD
struct FParticleSystemLOD
{
public:
	uint8                                        Pad_3AD2[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LODSoloTrack
struct FLODSoloTrack
{
public:
	TArray<uint8>                                SoloEnableSetting;                                 // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NamedEmitterMaterial
struct FNamedEmitterMaterial
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Engine.ParticleSysParam
struct FParticleSysParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	enum class EParticleSysParamType             ParamType;                                         // 0x8(0x1)(None)
	uint8                                        Pad_3AD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scalar;                                            // 0xC(0x4)(None)
	float                                        Scalar_Low;                                        // 0x10(0x4)(None)
	uint8                                        Pad_3AD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x18(0x18)(None)
	struct FVector                               Vector_Low;                                        // 0x30(0x18)(None)
	struct FColor                                Color;                                             // 0x48(0x4)(None)
	uint8                                        Pad_3AD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x50(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Material;                                          // 0x58(0x8)(None)
	uint8                                        Pad_3AD6[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.FXSystemSpawnParameters
struct FFXSystemSpawnParameters
{
public:
	uint8                                        Pad_3AD7[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ParticleEmitterReplayFrame
struct FParticleEmitterReplayFrame
{
public:
	uint8                                        Pad_3AD8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ParticleSystemReplayFrame
struct FParticleSystemReplayFrame
{
public:
	uint8                                        Pad_3AD9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DelegateArray
struct FDelegateArray
{
public:
	TArray<FDelegateProperty_>                   Delegates;                                         // 0x0(0x10)(None)
};

// 0x870 (0x870 - 0x0)
// ScriptStruct Engine.CameraCacheEntry
struct FCameraCacheEntry
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(None)
	uint8                                        Pad_3ADA[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x860)(None)
};

// 0x880 (0x880 - 0x0)
// ScriptStruct Engine.TViewTarget
struct FTViewTarget
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_3ADB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x860)(ZeroConstructor)
	class APlayerState*                          PlayerState;                                       // 0x870(0x8)(None)
	uint8                                        Pad_3ADC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ViewTargetTransitionParams
struct FViewTargetTransitionParams
{
public:
	float                                        BlendTime;                                         // 0x0(0x4)(None)
	enum class EViewTargetBlendFunction          BlendFunction;                                     // 0x4(0x1)(None)
	uint8                                        Pad_3ADD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendExp;                                          // 0x8(0x4)(None)
	uint8                                        bLockOutgoing : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        Pad_3ADE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.BlueprintDouble
struct FBlueprintDouble
{
public:
	int32                                        PartA;                                             // 0x0(0x4)(None)
	int32                                        PartB;                                             // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.NetExecParams
struct FNetExecParams
{
public:
	int32                                        IntParam1;                                         // 0x0(0x4)(None)
	int32                                        IntParam2;                                         // 0x4(0x4)(None)
	float                                        FloatParam1;                                       // 0x8(0x4)(None)
	uint8                                        Pad_3ADF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ObjParam1;                                         // 0x10(0x8)(None)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.Rotator_NetQuantizeSmartPitch
struct FRotator_NetQuantizeSmartPitch : public FRotator
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.SpriteCategoryInfo
struct FSpriteCategoryInfo
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(None)
	class FText                                  DisplayName;                                       // 0x8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(None)
};

// 0x78 (0x130 - 0xB8)
// ScriptStruct Engine.PrimitiveComponentInstanceData
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
public:
	uint8                                        Pad_3AE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComponentTransform;                                // 0xC0(0x60)(None)
	int32                                        VisibilityId;                                      // 0x120(0x4)(None)
	uint8                                        Pad_3AE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   LODParent;                                         // 0x128(0x8)(ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LevelNameAndTime
struct FLevelNameAndTime
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(None)
	uint32                                       LevelChangeTimeInMS;                               // 0x10(0x4)(None)
	uint8                                        Pad_3AE2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ReverbSettings
struct FReverbSettings
{
public:
	bool                                         bApplyReverb;                                      // 0x0(0x1)(None)
	uint8                                        Pad_3AE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReverbEffect*                         ReverbEffect;                                      // 0x8(0x8)(ZeroConstructor)
	class USoundEffectSubmixPreset*              ReverbPluginEffect;                                // 0x10(0x8)(None)
	float                                        Volume;                                            // 0x18(0x4)(None)
	float                                        FadeTime;                                          // 0x1C(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CompressedRichCurve
struct FCompressedRichCurve
{
public:
	uint8                                        Pad_3AE4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.ColorGradePerRangeSettings
struct FColorGradePerRangeSettings
{
public:
	struct FVector4                              Saturation;                                        // 0x0(0x20)(None)
	struct FVector4                              Contrast;                                          // 0x20(0x20)(None)
	struct FVector4                              Gamma;                                             // 0x40(0x20)(None)
	struct FVector4                              Gain;                                              // 0x60(0x20)(None)
	struct FVector4                              Offset;                                            // 0x80(0x20)(None)
};

// 0x290 (0x290 - 0x0)
// ScriptStruct Engine.ColorGradingSettings
struct FColorGradingSettings
{
public:
	struct FColorGradePerRangeSettings           Global;                                            // 0x0(0xA0)(None)
	struct FColorGradePerRangeSettings           Shadows;                                           // 0xA0(0xA0)(None)
	struct FColorGradePerRangeSettings           Midtones;                                          // 0x140(0xA0)(None)
	struct FColorGradePerRangeSettings           Highlights;                                        // 0x1E0(0xA0)(None)
	float                                        ShadowsMax;                                        // 0x280(0x4)(None)
	float                                        HighlightsMin;                                     // 0x284(0x4)(None)
	float                                        HighlightsMax;                                     // 0x288(0x4)(None)
	uint8                                        Pad_3AE5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.FilmStockSettings
struct FFilmStockSettings
{
public:
	float                                        Slope;                                             // 0x0(0x4)(None)
	float                                        Toe;                                               // 0x4(0x4)(None)
	float                                        Shoulder;                                          // 0x8(0x4)(None)
	float                                        BlackClip;                                         // 0xC(0x4)(None)
	float                                        WhiteClip;                                         // 0x10(0x4)(None)
};

// 0x84 (0x84 - 0x0)
// ScriptStruct Engine.GaussianSumBloomSettings
struct FGaussianSumBloomSettings
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(None)
	float                                        Threshold;                                         // 0x4(0x4)(None)
	float                                        SizeScale;                                         // 0x8(0x4)(None)
	float                                        Filter1Size;                                       // 0xC(0x4)(None)
	float                                        Filter2Size;                                       // 0x10(0x4)(None)
	float                                        Filter3Size;                                       // 0x14(0x4)(None)
	float                                        Filter4Size;                                       // 0x18(0x4)(None)
	float                                        Filter5Size;                                       // 0x1C(0x4)(None)
	float                                        Filter6Size;                                       // 0x20(0x4)(None)
	struct FLinearColor                          Filter1Tint;                                       // 0x24(0x10)(None)
	struct FLinearColor                          Filter2Tint;                                       // 0x34(0x10)(None)
	struct FLinearColor                          Filter3Tint;                                       // 0x44(0x10)(None)
	struct FLinearColor                          Filter4Tint;                                       // 0x54(0x10)(None)
	struct FLinearColor                          Filter5Tint;                                       // 0x64(0x10)(None)
	struct FLinearColor                          Filter6Tint;                                       // 0x74(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.ConvolutionBloomSettings
struct FConvolutionBloomSettings
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(None)
	float                                        ScatterDispersion;                                 // 0x8(0x4)(None)
	float                                        Size;                                              // 0xC(0x4)(None)
	struct FVector2D                             CenterUV;                                          // 0x10(0x10)(None)
	float                                        PreFilterMin;                                      // 0x20(0x4)(None)
	float                                        PreFilterMax;                                      // 0x24(0x4)(None)
	float                                        PreFilterMult;                                     // 0x28(0x4)(None)
	float                                        BufferScale;                                       // 0x2C(0x4)(None)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Engine.LensBloomSettings
struct FLensBloomSettings
{
public:
	struct FGaussianSumBloomSettings             GaussianSum;                                       // 0x0(0x84)(None)
	uint8                                        Pad_3AE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConvolutionBloomSettings             Convolution;                                       // 0x88(0x30)(None)
	enum class EBloomMethod                      Method;                                            // 0xB8(0x1)(None)
	uint8                                        Pad_3AE7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LensImperfectionSettings
struct FLensImperfectionSettings
{
public:
	class UTexture*                              DirtMask;                                          // 0x0(0x8)(None)
	float                                        DirtMaskIntensity;                                 // 0x8(0x4)(None)
	struct FLinearColor                          DirtMaskTint;                                      // 0xC(0x10)(None)
	uint8                                        Pad_3AE8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct Engine.LensSettings
struct FLensSettings
{
public:
	struct FLensBloomSettings                    Bloom;                                             // 0x0(0xC0)(ZeroConstructor)
	struct FLensImperfectionSettings             Imperfections;                                     // 0xC0(0x20)(None)
	float                                        ChromaticAberration;                               // 0xE0(0x4)(None)
	uint8                                        Pad_3AE9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.CameraExposureSettings
struct FCameraExposureSettings
{
public:
	enum class EAutoExposureMethod               Method;                                            // 0x0(0x1)(None)
	uint8                                        Pad_3AEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowPercent;                                        // 0x4(0x4)(None)
	float                                        HighPercent;                                       // 0x8(0x4)(None)
	float                                        MinBrightness;                                     // 0xC(0x4)(None)
	float                                        MaxBrightness;                                     // 0x10(0x4)(None)
	float                                        SpeedUp;                                           // 0x14(0x4)(None)
	float                                        SpeedDown;                                         // 0x18(0x4)(None)
	float                                        Bias;                                              // 0x1C(0x4)(None)
	class UCurveFloat*                           BiasCurve;                                         // 0x20(0x8)(ZeroConstructor)
	class UTexture*                              MeterMask;                                         // 0x28(0x8)(None)
	float                                        HistogramLogMin;                                   // 0x30(0x4)(None)
	float                                        HistogramLogMax;                                   // 0x34(0x4)(None)
	float                                        CalibrationConstant;                               // 0x38(0x4)(None)
	uint8                                        ApplyPhysicalCameraExposure : 1;                   // Mask: 0x1, PropSize: 0x10x3C(0x1)(None)
	uint8                                        Pad_3AEB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SplatCapsuleBounds
struct FSplatCapsuleBounds
{
public:
	struct FVector3f                             P1;                                                // 0x0(0xC)(None)
	float                                        InnerRadius;                                       // 0xC(0x4)(None)
	struct FVector3f                             P2;                                                // 0x10(0xC)(None)
	float                                        OuterRadius;                                       // 0x1C(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
struct FSceneViewExtensionIsActiveFunctor
{
public:
	uint8                                        Pad_3AEC[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Engine.SkeletalMeshOptimizationSettings
struct FSkeletalMeshOptimizationSettings
{
public:
	enum class ESkeletalMeshTerminationCriterion TerminationCriterion;                              // 0x0(0x1)(None)
	uint8                                        Pad_3AED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NumOfTrianglesPercentage;                          // 0x4(0x4)(None)
	float                                        NumOfVertPercentage;                               // 0x8(0x4)(None)
	uint32                                       MaxNumOfTriangles;                                 // 0xC(0x4)(None)
	uint32                                       MaxNumOfVerts;                                     // 0x10(0x4)(None)
	float                                        MaxDeviationPercentage;                            // 0x14(0x4)(None)
	enum class ESkeletalMeshOptimizationType     ReductionMethod;                                   // 0x18(0x1)(None)
	enum class ESkeletalMeshOptimizationImportance SilhouetteImportance;                              // 0x19(0x1)(None)
	enum class ESkeletalMeshOptimizationImportance TextureImportance;                                 // 0x1A(0x1)(None)
	enum class ESkeletalMeshOptimizationImportance ShadingImportance;                                 // 0x1B(0x1)(None)
	enum class ESkeletalMeshOptimizationImportance SkinningImportance;                                // 0x1C(0x1)(None)
	uint8                                        bRemapMorphTargets : 1;                            // Mask: 0x1, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bRecalcNormals : 1;                                // Mask: 0x2, PropSize: 0x10x1D(0x1)(None)
	uint8                                        BitPad_351 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AEE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeldingThreshold;                                  // 0x20(0x4)(None)
	float                                        NormalsThreshold;                                  // 0x24(0x4)(None)
	int32                                        MaxBonesPerVertex;                                 // 0x28(0x4)(None)
	uint8                                        bEnforceBoneBoundaries : 1;                        // Mask: 0x1, PropSize: 0x10x2C(0x1)(None)
	uint8                                        bMergeCoincidentVertBones : 1;                     // Mask: 0x2, PropSize: 0x10x2C(0x1)(None)
	uint8                                        BitPad_352 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeImportance;                                  // 0x30(0x4)(None)
	uint8                                        bLockEdges : 1;                                    // Mask: 0x1, PropSize: 0x10x34(0x1)(None)
	uint8                                        bLockColorBounaries : 1;                           // Mask: 0x2, PropSize: 0x10x34(0x1)(None)
	uint8                                        BitPad_353 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BaseLOD;                                           // 0x38(0x4)(None)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Engine.SkelMeshSkinWeightInfo
struct FSkelMeshSkinWeightInfo
{
public:
	int32                                        Bones[0xC];                                        // 0x0(0x30)(None)
	uint8                                        Weights[0xC];                                      // 0x30(0xC)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SkelMeshComponentLODInfo
struct FSkelMeshComponentLODInfo
{
public:
	TArray<bool>                                 HiddenMaterials;                                   // 0x0(0x10)(None)
	uint8                                        Pad_3AF1[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.VertexOffsetUsage
struct FVertexOffsetUsage
{
public:
	int32                                        Usage;                                             // 0x0(0x4)(None)
};

// 0xB8 (0x170 - 0xB8)
// ScriptStruct Engine.PrecomputedSkyLightInstanceData
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
public:
	struct FGuid                                 LightGuid;                                         // 0xB8(0x10)(None)
	float                                        AverageBrightness;                                 // 0xC8(0x4)(None)
	uint8                                        Pad_3AF2[0xA4];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.SoundAttenuationPluginSettings
struct FSoundAttenuationPluginSettings
{
public:
	TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;                 // 0x0(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;                      // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;                         // 0x20(0x10)(ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<class USourceDataOverridePluginSourceSettingsBase*> SourceDataOverridePluginSettingsArray;             // 0x30(0x10)(None)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Engine.AttenuationSubmixSendSettings
struct FAttenuationSubmixSendSettings
{
public:
	class USoundSubmixBase*                      Submix;                                            // 0x0(0x8)(ZeroConstructor)
	enum class ESubmixSendMethod                 SubmixSendMethod;                                  // 0x8(0x1)(None)
	uint8                                        Pad_3AF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubmixSendLevelMin;                                // 0xC(0x4)(None)
	float                                        SubmixSendLevelMax;                                // 0x10(0x4)(None)
	float                                        SubmixSendDistanceMin;                             // 0x14(0x4)(None)
	float                                        SubmixSendDistanceMax;                             // 0x18(0x4)(None)
	float                                        ManualSubmixSendLevel;                             // 0x1C(0x4)(None)
	struct FRuntimeFloatCurve                    CustomSubmixSendCurve;                             // 0x20(0x88)(None)
};

// 0x308 (0x3C8 - 0xC0)
// ScriptStruct Engine.SoundAttenuationSettings
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
public:
	uint8                                        bAttenuate : 1;                                    // Mask: 0x1, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bSpatialize : 1;                                   // Mask: 0x2, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bAttenuateWithLPF : 1;                             // Mask: 0x4, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bEnableListenerFocus : 1;                          // Mask: 0x8, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bEnableFocusInterpolation : 1;                     // Mask: 0x10, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bEnableOcclusion : 1;                              // Mask: 0x20, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bUseComplexCollisionForOcclusion : 1;              // Mask: 0x40, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bEnableReverbSend : 1;                             // Mask: 0x80, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bEnablePriorityAttenuation : 1;                    // Mask: 0x1, PropSize: 0x10xC1(0x1)(None)
	uint8                                        bApplyNormalizationToStereoSounds : 1;             // Mask: 0x2, PropSize: 0x10xC1(0x1)(None)
	uint8                                        bEnableLogFrequencyScaling : 1;                    // Mask: 0x4, PropSize: 0x10xC1(0x1)(None)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x8, PropSize: 0x10xC1(0x1)(None)
	uint8                                        bEnableSourceDataOverride : 1;                     // Mask: 0x10, PropSize: 0x10xC1(0x1)(None)
	uint8                                        bEnableSendToAudioLink : 1;                        // Mask: 0x20, PropSize: 0x10xC1(0x1)(None)
	uint8                                        BitPad_354 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESoundSpatializationAlgorithm     SpatializationAlgorithm;                           // 0xC2(0x1)(None)
	uint8                                        Pad_3AF4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioLinkSettingsAbstract*            AudioLinkSettingsOverride;                         // 0xC8(0x8)(ZeroConstructor)
	float                                        BinauralRadius;                                    // 0xD0(0x4)(None)
	uint8                                        Pad_3AF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    CustomLowpassAirAbsorptionCurve;                   // 0xD8(0x88)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    CustomHighpassAirAbsorptionCurve;                  // 0x160(0x88)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EAirAbsorptionMethod              AbsorptionMethod;                                  // 0x1E8(0x1)(None)
	enum class ECollisionChannel                 OcclusionTraceChannel;                             // 0x1E9(0x1)(None)
	enum class EReverbSendMethod                 ReverbSendMethod;                                  // 0x1EA(0x1)(None)
	enum class EPriorityAttenuationMethod        PriorityAttenuationMethod;                         // 0x1EB(0x1)(None)
	float                                        OmniRadius;                                        // 0x1EC(0x4)(None)
	float                                        StereoSpread;                                      // 0x1F0(0x4)(None)
	float                                        LPFRadiusMin;                                      // 0x1F4(0x4)(None)
	float                                        LPFRadiusMax;                                      // 0x1F8(0x4)(None)
	float                                        LPFFrequencyAtMin;                                 // 0x1FC(0x4)(None)
	float                                        LPFFrequencyAtMax;                                 // 0x200(0x4)(None)
	float                                        HPFFrequencyAtMin;                                 // 0x204(0x4)(None)
	float                                        HPFFrequencyAtMax;                                 // 0x208(0x4)(None)
	float                                        FocusAzimuth;                                      // 0x20C(0x4)(None)
	float                                        NonFocusAzimuth;                                   // 0x210(0x4)(None)
	float                                        FocusDistanceScale;                                // 0x214(0x4)(None)
	float                                        NonFocusDistanceScale;                             // 0x218(0x4)(None)
	float                                        FocusPriorityScale;                                // 0x21C(0x4)(None)
	float                                        NonFocusPriorityScale;                             // 0x220(0x4)(None)
	float                                        FocusVolumeAttenuation;                            // 0x224(0x4)(None)
	float                                        NonFocusVolumeAttenuation;                         // 0x228(0x4)(None)
	float                                        FocusAttackInterpSpeed;                            // 0x22C(0x4)(None)
	float                                        FocusReleaseInterpSpeed;                           // 0x230(0x4)(None)
	float                                        OcclusionLowPassFilterFrequency;                   // 0x234(0x4)(None)
	float                                        OcclusionVolumeAttenuation;                        // 0x238(0x4)(None)
	float                                        OcclusionInterpolationTime;                        // 0x23C(0x4)(None)
	float                                        ReverbWetLevelMin;                                 // 0x240(0x4)(None)
	float                                        ReverbWetLevelMax;                                 // 0x244(0x4)(None)
	float                                        ReverbDistanceMin;                                 // 0x248(0x4)(None)
	float                                        ReverbDistanceMax;                                 // 0x24C(0x4)(None)
	float                                        ManualReverbSendLevel;                             // 0x250(0x4)(None)
	float                                        PriorityAttenuationMin;                            // 0x254(0x4)(None)
	float                                        PriorityAttenuationMax;                            // 0x258(0x4)(None)
	float                                        PriorityAttenuationDistanceMin;                    // 0x25C(0x4)(None)
	float                                        PriorityAttenuationDistanceMax;                    // 0x260(0x4)(None)
	float                                        ManualPriorityAttenuation;                         // 0x264(0x4)(None)
	struct FRuntimeFloatCurve                    CustomReverbSendCurve;                             // 0x268(0x88)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings;                                // 0x2F0(0x10)(ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    CustomPriorityAttenuationCurve;                    // 0x300(0x88)(ZeroConstructor, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSoundAttenuationPluginSettings       PluginSettings;                                    // 0x388(0x40)(ZeroConstructor, ContainsInstancedReference, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SourceEffectChainEntry
struct FSourceEffectChainEntry
{
public:
	class USoundEffectSourcePreset*              Preset;                                            // 0x0(0x8)(None)
	uint8                                        bBypass : 1;                                       // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        Pad_3AF6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SoundGroup
struct FSoundGroup
{
public:
	enum class ESoundGroup                       SoundGroup;                                        // 0x0(0x1)(None)
	uint8                                        Pad_3AF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisplayName;                                       // 0x8(0x10)(None)
	uint8                                        bAlwaysDecompressOnLoad : 1;                       // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_355 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3AF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DecompressedDuration;                              // 0x1C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ModulatorContinuousParams
struct FModulatorContinuousParams
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	float                                        Default;                                           // 0x8(0x4)(None)
	float                                        MinInput;                                          // 0xC(0x4)(None)
	float                                        MaxInput;                                          // 0x10(0x4)(None)
	float                                        MinOutput;                                         // 0x14(0x4)(None)
	float                                        MaxOutput;                                         // 0x18(0x4)(None)
	enum class EModulationParamMode              ParamMode;                                         // 0x1C(0x1)(None)
	uint8                                        Pad_3AF9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Engine.SoundSourceBusSendInfo
struct FSoundSourceBusSendInfo
{
public:
	enum class ESourceBusSendLevelControlMethod  SourceBusSendLevelControlMethod;                   // 0x0(0x1)(None)
	uint8                                        Pad_3AFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundSourceBus*                       SoundSourceBus;                                    // 0x8(0x8)(ZeroConstructor)
	class UAudioBus*                             AudioBus;                                          // 0x10(0x8)(ZeroConstructor)
	float                                        SendLevel;                                         // 0x18(0x4)(None)
	float                                        MinSendLevel;                                      // 0x1C(0x4)(None)
	float                                        MaxSendLevel;                                      // 0x20(0x4)(None)
	float                                        MinSendDistance;                                   // 0x24(0x4)(None)
	float                                        MaxSendDistance;                                   // 0x28(0x4)(None)
	uint8                                        Pad_3AFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    CustomSendLevelCurve;                              // 0x30(0x88)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundTimecodeOffset
struct FSoundTimecodeOffset
{
public:
	double                                       NumOfSecondsSinceMidnight;                         // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.StreamedAudioPlatformData
struct FStreamedAudioPlatformData
{
public:
	uint8                                        Pad_3AFC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.SoundWaveSpectralData
struct FSoundWaveSpectralData
{
public:
	float                                        FrequencyHz;                                       // 0x0(0x4)(None)
	float                                        Magnitude;                                         // 0x4(0x4)(None)
	float                                        NormalizedMagnitude;                               // 0x8(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SoundWaveSpectralDataPerSound
struct FSoundWaveSpectralDataPerSound
{
public:
	TArray<struct FSoundWaveSpectralData>        SpectralData;                                      // 0x0(0x10)(None)
	float                                        PlaybackTime;                                      // 0x10(0x4)(None)
	uint8                                        Pad_3AFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            SoundWave;                                         // 0x18(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
struct FSoundWaveEnvelopeDataPerSound
{
public:
	float                                        Envelope;                                          // 0x0(0x4)(None)
	float                                        PlaybackTime;                                      // 0x4(0x4)(None)
	class USoundWave*                            SoundWave;                                         // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundWaveSpectralDataEntry
struct FSoundWaveSpectralDataEntry
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	float                                        NormalizedMagnitude;                               // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SoundWaveSpectralTimeData
struct FSoundWaveSpectralTimeData
{
public:
	TArray<struct FSoundWaveSpectralDataEntry>   Data;                                              // 0x0(0x10)(None)
	float                                        TimeSec;                                           // 0x10(0x4)(None)
	uint8                                        Pad_3AFE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundWaveEnvelopeTimeData
struct FSoundWaveEnvelopeTimeData
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(None)
	float                                        TimeSec;                                           // 0x4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SoundWaveCuePoint
struct FSoundWaveCuePoint
{
public:
	int32                                        CuePointID;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3AFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Label;                                             // 0x8(0x10)(None)
	int32                                        FramePosition;                                     // 0x18(0x4)(None)
	int32                                        FrameLength;                                       // 0x1C(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.SoundWaveTimecodeInfo
struct FSoundWaveTimecodeInfo
{
public:
	uint64                                       NumSamplesSinceMidnight;                           // 0x0(0x8)(None)
	uint32                                       NumSamplesPerSecond;                               // 0x8(0x4)(None)
	uint8                                        Pad_3B00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                OriginatorTime;                                    // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                OriginatorDate;                                    // 0x30(0x10)(Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                OriginatorDescription;                             // 0x40(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                OriginatorReference;                               // 0x50(0x10)(None)
	struct FFrameRate                            TimecodeRate;                                      // 0x60(0x8)(None)
	bool                                         bTimecodeIsDropFrame;                              // 0x68(0x1)(None)
	uint8                                        Pad_3B01[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.StaticMeshComponentLODInfo
struct FStaticMeshComponentLODInfo
{
public:
	uint8                                        Pad_3B02[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.StaticParameterBase
struct FStaticParameterBase
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	bool                                         bOverride;                                         // 0x10(0x1)(None)
	uint8                                        Pad_3B03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ExpressionGUID;                                    // 0x14(0x10)(None)
};

// 0x4 (0x28 - 0x24)
// ScriptStruct Engine.StaticSwitchParameter
struct FStaticSwitchParameter : public FStaticParameterBase
{
public:
	bool                                         Value;                                             // 0x24(0x1)(None)
	uint8                                        Pad_3B04[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x28 - 0x24)
// ScriptStruct Engine.StaticComponentMaskParameter
struct FStaticComponentMaskParameter : public FStaticParameterBase
{
public:
	bool                                         R;                                                 // 0x24(0x1)(None)
	bool                                         G;                                                 // 0x25(0x1)(None)
	bool                                         B;                                                 // 0x26(0x1)(None)
	bool                                         A;                                                 // 0x27(0x1)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Engine.StaticTerrainLayerWeightParameter
struct FStaticTerrainLayerWeightParameter
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x10(0x10)(None)
	bool                                         bOverride;                                         // 0x20(0x1)(None)
	uint8                                        Pad_3B05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LayerName;                                         // 0x24(0x8)(None)
	int32                                        WeightmapIndex;                                    // 0x2C(0x4)(None)
	bool                                         bWeightBasedBlend;                                 // 0x30(0x1)(None)
	uint8                                        Pad_3B06[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x104 (0x128 - 0x24)
// ScriptStruct Engine.StaticMaterialLayersParameter
struct FStaticMaterialLayersParameter : public FStaticParameterBase
{
public:
	uint8                                        Pad_3B07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaterialLayersFunctions              Value;                                             // 0x28(0x100)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.StaticParameterSetRuntimeData
struct FStaticParameterSetRuntimeData
{
public:
	TArray<struct FStaticSwitchParameter>        StaticSwitchParameters;                            // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMaterialLayersFunctionsRuntimeData   MaterialLayers;                                    // 0x10(0x20)(None)
	uint8                                        bHasMaterialLayers : 1;                            // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        Pad_3B08[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.StaticParameterSetEditorOnlyData
struct FStaticParameterSetEditorOnlyData
{
public:
	TArray<struct FStaticSwitchParameter>        StaticSwitchParameters;                            // 0x0(0x10)(ContainsInstancedReference, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters;                     // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;                      // 0x20(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMaterialLayersFunctionsEditorOnlyData MaterialLayers;                                    // 0x30(0x70)(None)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct Engine.StaticParameterSet
struct FStaticParameterSet : public FStaticParameterSetRuntimeData
{
public:
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.EquirectProps
struct FEquirectProps
{
public:
	struct FBox2D                                LeftUVRect;                                        // 0x0(0x28)(None)
	struct FBox2D                                RightUVRect;                                       // 0x28(0x28)(None)
	struct FVector2D                             LeftScale;                                         // 0x50(0x10)(None)
	struct FVector2D                             RightScale;                                        // 0x60(0x10)(None)
	struct FVector2D                             LeftBias;                                          // 0x70(0x10)(None)
	struct FVector2D                             RightBias;                                         // 0x80(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
struct FStreamingRenderAssetPrimitiveInfo
{
public:
	class UStreamableRenderAsset*                RenderAsset;                                       // 0x0(0x8)(None)
	struct FBoxSphereBounds                      Bounds;                                            // 0x8(0x38)(None)
	float                                        TexelFactor;                                       // 0x40(0x4)(None)
	uint32                                       PackedRelativeBox;                                 // 0x44(0x4)(None)
	uint8                                        bAllowInvalidTexelFactorWhenUnregistered : 1;      // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        bAffectedByComponentScale : 1;                     // Mask: 0x2, PropSize: 0x10x48(0x1)(None)
	uint8                                        Pad_3B09[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.StreamingTextureBuildInfo
struct FStreamingTextureBuildInfo
{
public:
	uint32                                       PackedRelativeBox;                                 // 0x0(0x4)(None)
	int32                                        TextureLevelIndex;                                 // 0x4(0x4)(None)
	float                                        TexelFactor;                                       // 0x8(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.TimelineEventEntry
struct FTimelineEventEntry
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	FDelegateProperty_                           EventFunc;                                         // 0x4(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.TimelineVectorTrack
struct FTimelineVectorTrack
{
public:
	class UCurveVector*                          VectorCurve;                                       // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           InterpFunc;                                        // 0x8(0x10)(None)
	class FName                                  TrackName;                                         // 0x18(0x8)(None)
	class FName                                  VectorPropertyName;                                // 0x20(0x8)(None)
	uint8                                        Pad_3B0A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.TimelineFloatTrack
struct FTimelineFloatTrack
{
public:
	class UCurveFloat*                           FloatCurve;                                        // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           InterpFunc;                                        // 0x8(0x10)(None)
	class FName                                  TrackName;                                         // 0x18(0x8)(None)
	class FName                                  FloatPropertyName;                                 // 0x20(0x8)(None)
	uint8                                        Pad_3B0B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.TimelineLinearColorTrack
struct FTimelineLinearColorTrack
{
public:
	class UCurveLinearColor*                     LinearColorCurve;                                  // 0x0(0x8)(ZeroConstructor)
	FDelegateProperty_                           InterpFunc;                                        // 0x8(0x10)(None)
	class FName                                  TrackName;                                         // 0x18(0x8)(None)
	class FName                                  LinearColorPropertyName;                           // 0x20(0x8)(None)
	uint8                                        Pad_3B0C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Engine.Timeline
struct FTimeline
{
public:
	enum class ETimelineLengthMode               LengthMode;                                        // 0x0(0x1)(None)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        bReversePlayback : 1;                              // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bPlaying : 1;                                      // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        BitPad_356 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3B0D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Length;                                            // 0x4(0x4)(None)
	float                                        PlayRate;                                          // 0x8(0x4)(None)
	float                                        Position;                                          // 0xC(0x4)(None)
	TArray<struct FTimelineEventEntry>           Events;                                            // 0x10(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FTimelineVectorTrack>          InterpVectors;                                     // 0x20(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FTimelineFloatTrack>           InterpFloats;                                      // 0x30(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FTimelineLinearColorTrack>     InterpLinearColors;                                // 0x40(0x10)(ZeroConstructor)
	FDelegateProperty_                           TimelinePostUpdateFunc;                            // 0x50(0x10)(ZeroConstructor)
	FDelegateProperty_                           TimelineFinishedFunc;                              // 0x60(0x10)(ZeroConstructor)
	TWeakObjectPtr<class UObject>                PropertySetObject;                                 // 0x70(0x8)(None)
	class FName                                  DirectionPropertyName;                             // 0x78(0x8)(None)
	uint8                                        Pad_3B0E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ActorContainerID
struct FActorContainerID
{
public:
	uint64                                       ID;                                                // 0x0(0x8)(None)
};

// 0x4C (0x4C - 0x0)
// ScriptStruct Engine.LightmassWorldInfoSettings
struct FLightmassWorldInfoSettings
{
public:
	float                                        StaticLightingLevelScale;                          // 0x0(0x4)(None)
	int32                                        NumIndirectLightingBounces;                        // 0x4(0x4)(None)
	int32                                        NumSkyLightingBounces;                             // 0x8(0x4)(None)
	float                                        IndirectLightingQuality;                           // 0xC(0x4)(None)
	float                                        IndirectLightingSmoothness;                        // 0x10(0x4)(None)
	struct FColor                                EnvironmentColor;                                  // 0x14(0x4)(None)
	float                                        EnvironmentIntensity;                              // 0x18(0x4)(None)
	float                                        EmissiveBoost;                                     // 0x1C(0x4)(None)
	float                                        DiffuseBoost;                                      // 0x20(0x4)(None)
	enum class EVolumeLightingMethod             VolumeLightingMethod;                              // 0x24(0x1)(None)
	uint8                                        bUseAmbientOcclusion : 1;                          // Mask: 0x1, PropSize: 0x10x25(0x1)(None)
	uint8                                        bGenerateAmbientOcclusionMaterialMask : 1;         // Mask: 0x2, PropSize: 0x10x25(0x1)(None)
	uint8                                        bVisualizeMaterialDiffuse : 1;                     // Mask: 0x4, PropSize: 0x10x25(0x1)(None)
	uint8                                        bVisualizeAmbientOcclusion : 1;                    // Mask: 0x8, PropSize: 0x10x25(0x1)(None)
	uint8                                        bCompressLightmaps : 1;                            // Mask: 0x10, PropSize: 0x10x25(0x1)(None)
	uint8                                        BitPad_357 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3B0F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumetricLightmapDetailCellSize;                  // 0x28(0x4)(None)
	float                                        VolumetricLightmapMaximumBrickMemoryMb;            // 0x2C(0x4)(None)
	float                                        VolumetricLightmapSphericalHarmonicSmoothing;      // 0x30(0x4)(None)
	float                                        VolumeLightSamplePlacementScale;                   // 0x34(0x4)(None)
	float                                        DirectIlluminationOcclusionFraction;               // 0x38(0x4)(None)
	float                                        IndirectIlluminationOcclusionFraction;             // 0x3C(0x4)(None)
	float                                        OcclusionExponent;                                 // 0x40(0x4)(None)
	float                                        FullyOccludedSamplesFraction;                      // 0x44(0x4)(None)
	float                                        MaxOcclusionDistance;                              // 0x48(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.NetViewer
struct FNetViewer
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(ZeroConstructor)
	class AActor*                                InViewer;                                          // 0x8(0x8)(ZeroConstructor)
	class AActor*                                ViewTarget;                                        // 0x10(0x8)(None)
	struct FVector                               ViewLocation;                                      // 0x18(0x18)(None)
	struct FVector                               ViewDir;                                           // 0x30(0x18)(None)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Engine.MeshProxySettings
struct FMeshProxySettings
{
public:
	int32                                        ScreenSize;                                        // 0x0(0x4)(None)
	float                                        VoxelSize;                                         // 0x4(0x4)(None)
	struct FMaterialProxySettings                MaterialSettings;                                  // 0x8(0xA0)(None)
	float                                        MergeDistance;                                     // 0xA8(0x4)(None)
	struct FColor                                UnresolvedGeometryColor;                           // 0xAC(0x4)(None)
	float                                        MaxRayCastDist;                                    // 0xB0(0x4)(None)
	float                                        HardAngleThreshold;                                // 0xB4(0x4)(None)
	int32                                        LightMapResolution;                                // 0xB8(0x4)(None)
	enum class EProxyNormalComputationMethod     NormalCalculationMethod;                           // 0xBC(0x1)(None)
	enum class ELandscapeCullingPrecision        LandscapeCullingPrecision;                         // 0xBD(0x1)(None)
	uint8                                        bCalculateCorrectLODModel : 1;                     // Mask: 0x1, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bOverrideVoxelSize : 1;                            // Mask: 0x2, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bOverrideTransferDistance : 1;                     // Mask: 0x4, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bUseHardAngleThreshold : 1;                        // Mask: 0x8, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bComputeLightMapResolution : 1;                    // Mask: 0x10, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bRecalculateNormals : 1;                           // Mask: 0x20, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bUseLandscapeCulling : 1;                          // Mask: 0x40, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bSupportRayTracing : 1;                            // Mask: 0x80, PropSize: 0x10xBE(0x1)(None)
	uint8                                        bAllowDistanceField : 1;                           // Mask: 0x1, PropSize: 0x10xBF(0x1)(None)
	uint8                                        bReuseMeshLightmapUVs : 1;                         // Mask: 0x2, PropSize: 0x10xBF(0x1)(None)
	uint8                                        bGroupIdenticalMeshesForBaking : 1;                // Mask: 0x4, PropSize: 0x10xBF(0x1)(None)
	uint8                                        bCreateCollision : 1;                              // Mask: 0x8, PropSize: 0x10xBF(0x1)(None)
	uint8                                        bAllowVertexColors : 1;                            // Mask: 0x10, PropSize: 0x10xBF(0x1)(None)
	uint8                                        bGenerateLightmapUVs : 1;                          // Mask: 0x20, PropSize: 0x10xBF(0x1)(None)
	uint8                                        BitPad_358 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	struct FMeshNaniteSettings                   NaniteSettings;                                    // 0xC0(0x38)(None)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Engine.MeshMergingSettings
struct FMeshMergingSettings
{
public:
	int32                                        TargetLightMapResolution;                          // 0x0(0x4)(None)
	enum class EUVOutput                         OutputUVs[0x8];                                    // 0x4(0x8)(None)
	uint8                                        Pad_3B10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaterialProxySettings                MaterialSettings;                                  // 0x10(0xA0)(None)
	int32                                        GutterSize;                                        // 0xB0(0x4)(None)
	enum class EMeshLODSelectionType             LODSelectionType;                                  // 0xB4(0x1)(None)
	uint8                                        Pad_3B11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpecificLOD;                                       // 0xB8(0x4)(None)
	uint8                                        bGenerateLightMapUV : 1;                           // Mask: 0x1, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bComputedLightMapResolution : 1;                   // Mask: 0x2, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bPivotPointAtZero : 1;                             // Mask: 0x4, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bMergePhysicsData : 1;                             // Mask: 0x8, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bMergeMeshSockets : 1;                             // Mask: 0x10, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bMergeMaterials : 1;                               // Mask: 0x20, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bCreateMergedMaterial : 1;                         // Mask: 0x40, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bBakeVertexDataToMesh : 1;                         // Mask: 0x80, PropSize: 0x10xBC(0x1)(None)
	uint8                                        bUseVertexDataForBakingMaterial : 1;               // Mask: 0x1, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bUseTextureBinning : 1;                            // Mask: 0x2, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bReuseMeshLightmapUVs : 1;                         // Mask: 0x4, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bMergeEquivalentMaterials : 1;                     // Mask: 0x8, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bUseLandscapeCulling : 1;                          // Mask: 0x10, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bIncludeImposters : 1;                             // Mask: 0x20, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bSupportRayTracing : 1;                            // Mask: 0x40, PropSize: 0x10xBD(0x1)(None)
	uint8                                        bAllowDistanceField : 1;                           // Mask: 0x80, PropSize: 0x10xBD(0x1)(None)
	uint8                                        Pad_3B12[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMeshNaniteSettings                   NaniteSettings;                                    // 0xC0(0x38)(None)
	uint8                                        Pad_3B13[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct Engine.MeshApproximationSettings
struct FMeshApproximationSettings
{
public:
	enum class EMeshApproximationType            OutputType;                                        // 0x0(0x1)(None)
	uint8                                        Pad_3B14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ApproximationAccuracy;                             // 0x4(0x4)(None)
	int32                                        ClampVoxelDimension;                               // 0x8(0x4)(None)
	bool                                         bAttemptAutoThickening;                            // 0xC(0x1)(None)
	uint8                                        Pad_3B15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetMinThicknessMultiplier;                      // 0x10(0x4)(None)
	bool                                         bIgnoreTinyParts;                                  // 0x14(0x1)(None)
	uint8                                        Pad_3B16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TinyPartSizeMultiplier;                            // 0x18(0x4)(None)
	enum class EMeshApproximationBaseCappingType BaseCapping;                                       // 0x1C(0x1)(None)
	uint8                                        Pad_3B17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0x20(0x4)(None)
	bool                                         bFillGaps;                                         // 0x24(0x1)(None)
	uint8                                        Pad_3B18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GapDistance;                                       // 0x28(0x4)(None)
	enum class EOccludedGeometryFilteringPolicy  OcclusionMethod;                                   // 0x2C(0x1)(None)
	bool                                         bOccludeFromBottom;                                // 0x2D(0x1)(None)
	enum class EMeshApproximationSimplificationPolicy SimplifyMethod;                                    // 0x2E(0x1)(None)
	uint8                                        Pad_3B19[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetTriCount;                                    // 0x30(0x4)(None)
	float                                        TrianglesPerM;                                     // 0x34(0x4)(None)
	float                                        GeometricDeviation;                                // 0x38(0x4)(None)
	enum class EMeshApproximationGroundPlaneClippingPolicy GroundClipping;                                    // 0x3C(0x1)(None)
	uint8                                        Pad_3B1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GroundClippingZHeight;                             // 0x40(0x4)(None)
	bool                                         bEstimateHardNormals;                              // 0x44(0x1)(None)
	uint8                                        Pad_3B1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HardNormalAngle;                                   // 0x48(0x4)(None)
	enum class EMeshApproximationUVGenerationPolicy UVGenerationMethod;                                // 0x4C(0x1)(None)
	uint8                                        Pad_3B1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitialPatchCount;                                 // 0x50(0x4)(None)
	float                                        CurvatureAlignment;                                // 0x54(0x4)(None)
	float                                        MergingThreshold;                                  // 0x58(0x4)(None)
	float                                        MaxAngleDeviation;                                 // 0x5C(0x4)(None)
	bool                                         bGenerateNaniteEnabledMesh;                        // 0x60(0x1)(None)
	uint8                                        Pad_3B1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NaniteProxyTrianglePercent;                        // 0x64(0x4)(None)
	bool                                         bSupportRayTracing;                                // 0x68(0x1)(None)
	bool                                         bAllowDistanceField;                               // 0x69(0x1)(None)
	uint8                                        Pad_3B1E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MultiSamplingAA;                                   // 0x6C(0x4)(None)
	int32                                        RenderCaptureResolution;                           // 0x70(0x4)(None)
	uint8                                        Pad_3B1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaterialProxySettings                MaterialSettings;                                  // 0x78(0xA0)(None)
	float                                        CaptureFieldOfView;                                // 0x118(0x4)(None)
	float                                        NearPlaneDist;                                     // 0x11C(0x4)(None)
	bool                                         bUseRenderLODMeshes;                               // 0x120(0x1)(None)
	bool                                         bEnableSimplifyPrePass;                            // 0x121(0x1)(None)
	bool                                         bEnableParallelBaking;                             // 0x122(0x1)(None)
	bool                                         bPrintDebugMessages;                               // 0x123(0x1)(None)
	bool                                         bEmitFullDebugMesh;                                // 0x124(0x1)(None)
	uint8                                        Pad_3B20[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x340 (0x340 - 0x0)
// ScriptStruct Engine.HierarchicalSimplification
struct FHierarchicalSimplification
{
public:
	float                                        TransitionScreenSize;                              // 0x0(0x4)(None)
	float                                        OverrideDrawDistance;                              // 0x4(0x4)(None)
	uint8                                        bUseOverrideDrawDistance : 1;                      // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bAllowSpecificExclusion : 1;                       // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bOnlyGenerateClustersForVolumes : 1;               // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bReusePreviousLevelClusters : 1;                   // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_359 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EHierarchicalSimplificationMethod SimplificationMethod;                              // 0x9(0x1)(None)
	uint8                                        Pad_3B21[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMeshProxySettings                    ProxySetting;                                      // 0x10(0xF8)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMeshMergingSettings                  MergeSetting;                                      // 0x108(0x100)(None)
	struct FMeshApproximationSettings            ApproximateSettings;                               // 0x208(0x128)(None)
	float                                        DesiredBoundRadius;                                // 0x330(0x4)(None)
	float                                        DesiredFillingPercentage;                          // 0x334(0x4)(None)
	int32                                        MinNumberOfActorsToBuild;                          // 0x338(0x4)(None)
	uint8                                        Pad_3B22[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.BroadphaseSettings
struct FBroadphaseSettings
{
public:
	bool                                         bUseMBPOnClient;                                   // 0x0(0x1)(None)
	bool                                         bUseMBPOnServer;                                   // 0x1(0x1)(None)
	bool                                         bUseMBPOuterBounds;                                // 0x2(0x1)(None)
	uint8                                        Pad_3B23[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  MBPBounds;                                         // 0x8(0x38)(None)
	struct FBox                                  MBPOuterBounds;                                    // 0x40(0x38)(None)
	uint32                                       MBPNumSubdivs;                                     // 0x78(0x4)(None)
	uint8                                        Pad_3B24[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.QuartzPulseOverrideStep
struct FQuartzPulseOverrideStep
{
public:
	int32                                        NumberOfPulses;                                    // 0x0(0x4)(None)
	enum class EQuartzCommandQuantization        PulseDuration;                                     // 0x4(0x1)(None)
	uint8                                        Pad_3B25[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.QuartzTimeSignature
struct FQuartzTimeSignature
{
public:
	int32                                        NumBeats;                                          // 0x0(0x4)(None)
	enum class EQuartzTimeSignatureQuantization  BeatType;                                          // 0x4(0x1)(None)
	uint8                                        Pad_3B26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuartzPulseOverrideStep>      OptionalPulseOverride;                             // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.QuartzTransportTimeStamp
struct FQuartzTransportTimeStamp
{
public:
	int32                                        Bars;                                              // 0x0(0x4)(None)
	int32                                        Beat;                                              // 0x4(0x4)(None)
	float                                        BeatFraction;                                      // 0x8(0x4)(None)
	float                                        Seconds;                                           // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.QuartzClockSettings
struct FQuartzClockSettings
{
public:
	struct FQuartzTimeSignature                  TimeSignature;                                     // 0x0(0x18)(None)
	bool                                         bIgnoreLevelChange;                                // 0x18(0x1)(None)
	uint8                                        Pad_3B27[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.QuartzQuantizationBoundary
struct FQuartzQuantizationBoundary
{
public:
	enum class EQuartzCommandQuantization        Quantization;                                      // 0x0(0x1)(None)
	uint8                                        Pad_3B28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Multiplier;                                        // 0x4(0x4)(None)
	enum class EQuarztQuantizationReference      CountingReferencePoint;                            // 0x8(0x1)(None)
	bool                                         bFireOnClockStart;                                 // 0x9(0x1)(None)
	bool                                         bCancelCommandIfClockIsNotRunning;                 // 0xA(0x1)(None)
	bool                                         bResetClockOnQueued;                               // 0xB(0x1)(None)
	bool                                         bResumeClockOnQueued;                              // 0xC(0x1)(None)
	uint8                                        Pad_3B29[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.NavAvoidanceData
struct FNavAvoidanceData
{
public:
	uint8                                        Pad_3B2A[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.MovementProperties
struct FMovementProperties
{
public:
	uint8                                        bCanCrouch : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bCanJump : 1;                                      // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bCanWalk : 1;                                      // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bCanSwim : 1;                                      // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bCanFly : 1;                                       // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
};

// 0x37 (0x38 - 0x1)
// ScriptStruct Engine.NavAgentProperties
struct FNavAgentProperties : public FMovementProperties
{
public:
	uint8                                        Pad_3B2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AgentRadius;                                       // 0x4(0x4)(None)
	float                                        AgentHeight;                                       // 0x8(0x4)(None)
	float                                        AgentStepHeight;                                   // 0xC(0x4)(None)
	float                                        NavWalkingSearchHeightScale;                       // 0x10(0x4)(None)
	uint8                                        Pad_3B2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        PreferredNavData;                                  // 0x18(0x20)(None)
};

// 0x60 (0x98 - 0x38)
// ScriptStruct Engine.NavDataConfig
struct FNavDataConfig : public FNavAgentProperties
{
public:
	class FName                                  Name;                                              // 0x38(0x8)(None)
	struct FColor                                Color;                                             // 0x40(0x4)(None)
	uint8                                        Pad_3B2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultQueryExtent;                                // 0x48(0x18)(None)
	class UClass*                                NavigationDataClass;                               // 0x60(0x8)(ZeroConstructor)
	TSoftClassPtr<class AActor>                  NavDataClass;                                      // 0x68(0x30)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AlphaBlendArgs
struct FAlphaBlendArgs
{
public:
	class UCurveFloat*                           CustomCurve;                                       // 0x0(0x8)(None)
	float                                        BlendTime;                                         // 0x8(0x4)(None)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xC(0x1)(None)
	uint8                                        Pad_3B2E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.BlendSampleData
struct FBlendSampleData
{
public:
	int32                                        SampleDataIndex;                                   // 0x0(0x4)(None)
	uint8                                        Pad_3B2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Animation;                                         // 0x8(0x8)(None)
	float                                        TotalWeight;                                       // 0x10(0x4)(None)
	float                                        WeightRate;                                        // 0x14(0x4)(None)
	float                                        Time;                                              // 0x18(0x4)(None)
	float                                        PreviousTime;                                      // 0x1C(0x4)(None)
	float                                        SamplePlayRate;                                    // 0x20(0x4)(None)
	uint8                                        Pad_3B30[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BlendFilter
struct FBlendFilter
{
public:
	uint8                                        Pad_3B31[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.MarkerSyncAnimPosition
struct FMarkerSyncAnimPosition
{
public:
	class FName                                  PreviousMarkerName;                                // 0x0(0x8)(None)
	class FName                                  NextMarkerName;                                    // 0x8(0x8)(None)
	float                                        PositionBetweenMarkers;                            // 0x10(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.AnimTickRecord
struct FAnimTickRecord
{
public:
	class UAnimationAsset*                       SourceAsset;                                       // 0x0(0x8)(None)
	uint8                                        Pad_3B32[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.AnimGroupInstance
struct FAnimGroupInstance
{
public:
	uint8                                        Pad_3B33[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.RootMotionMovementParams
struct FRootMotionMovementParams
{
public:
	bool                                         bHasRootMotion;                                    // 0x0(0x1)(None)
	uint8                                        Pad_3B34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x4(0x4)(None)
	uint8                                        Pad_3B35[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RootMotionTransform;                               // 0x10(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimationGroupReference
struct FAnimationGroupReference
{
public:
	enum class EAnimSyncMethod                   Method;                                            // 0x0(0x1)(None)
	uint8                                        Pad_3B36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GroupName;                                         // 0x4(0x8)(None)
	enum class EAnimGroupRole                    GroupRole;                                         // 0xC(0x1)(None)
	uint8                                        Pad_3B37[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.EncounteredStateMachineStack
struct FEncounteredStateMachineStack
{
public:
	uint8                                        Pad_3B38[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.AnimationRecordingSettings
struct FAnimationRecordingSettings
{
public:
	bool                                         bRecordInWorldSpace;                               // 0x0(0x1)(None)
	bool                                         bRemoveRootAnimation;                              // 0x1(0x1)(None)
	bool                                         bAutoSaveAsset;                                    // 0x2(0x1)(None)
	uint8                                        Pad_3B39[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            SampleFrameRate;                                   // 0x4(0x8)(None)
	float                                        Length;                                            // 0xC(0x4)(None)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x10(0x1)(None)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x11(0x1)(None)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x12(0x1)(None)
	uint8                                        Pad_3B3A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRecordTransforms;                                 // 0x14(0x1)(None)
	bool                                         bRecordMorphTargets;                               // 0x15(0x1)(None)
	bool                                         bRecordAttributeCurves;                            // 0x16(0x1)(None)
	bool                                         bRecordMaterialCurves;                             // 0x17(0x1)(None)
	bool                                         bTransactRecording;                                // 0x18(0x1)(None)
	uint8                                        Pad_3B3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        IncludeAnimationNames;                             // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExcludeAnimationNames;                             // 0x30(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.StateMachineStateDebugData
struct FStateMachineStateDebugData
{
public:
	uint8                                        Pad_3B3C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// ScriptStruct Engine.StateMachineDebugData
struct FStateMachineDebugData
{
public:
	uint8                                        Pad_3B3D[0x150];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AnimationFrameSnapshot
struct FAnimationFrameSnapshot
{
public:
	uint8                                        Pad_3B3E[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AnimBlueprintDebugData
struct FAnimBlueprintDebugData
{
public:
	uint8                                        Pad_3B3F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AnimBlueprintMutableData
struct FAnimBlueprintMutableData
{
public:
	uint8                                        Pad_3B40[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AnimBlueprintConstantData
struct FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_3B41[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.AnimBlueprintFunctionData
struct FAnimBlueprintFunctionData
{
public:
	FFieldPathProperty_                          OutputPoseNodeProperty;                            // 0x0(0x20)(ZeroConstructor, AutoWeak, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<FFieldPathProperty_>                  InputPoseNodeProperties;                           // 0x20(0x10)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<FFieldPathProperty_>                  InputProperties;                                   // 0x30(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.AnimBlueprintFunction
struct FAnimBlueprintFunction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  Group;                                             // 0x8(0x8)(None)
	int32                                        OutputPoseNodeIndex;                               // 0x10(0x4)(None)
	uint8                                        Pad_3B42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          InputPoseNames;                                    // 0x18(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                InputPoseNodeIndices;                              // 0x28(0x10)(None)
	uint8                                        Pad_3B43[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bImplemented;                                      // 0x70(0x1)(None)
	uint8                                        Pad_3B44[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CachedPoseIndices
struct FCachedPoseIndices
{
public:
	TArray<int32>                                OrderedSavedPoseNodeIndices;                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.GraphAssetPlayerInformation
struct FGraphAssetPlayerInformation
{
public:
	TArray<int32>                                PlayerNodeIndices;                                 // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimGraphBlendOptions
struct FAnimGraphBlendOptions
{
public:
	float                                        BlendInTime;                                       // 0x0(0x4)(None)
	uint8                                        Pad_3B45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         BlendInProfile;                                    // 0x8(0x8)(ZeroConstructor)
	float                                        BlendOutTime;                                      // 0x10(0x4)(None)
	uint8                                        Pad_3B46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         BlendOutProfile;                                   // 0x18(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.RootMotionExtractionStep
struct FRootMotionExtractionStep
{
public:
	class UAnimSequence*                         AnimSequence;                                      // 0x0(0x8)(None)
	float                                        StartPosition;                                     // 0x8(0x4)(None)
	float                                        EndPosition;                                       // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimSegment
struct FAnimSegment
{
public:
	class UAnimSequenceBase*                     AnimReference;                                     // 0x0(0x8)(None)
	float                                        StartPos;                                          // 0x8(0x4)(None)
	float                                        AnimStartTime;                                     // 0xC(0x4)(None)
	float                                        AnimEndTime;                                       // 0x10(0x4)(None)
	float                                        AnimPlayRate;                                      // 0x14(0x4)(None)
	int32                                        LoopingCount;                                      // 0x18(0x4)(None)
	uint8                                        Pad_3B48[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimTrack
struct FAnimTrack
{
public:
	TArray<struct FAnimSegment>                  AnimSegments;                                      // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimExecutionContext
struct FAnimExecutionContext
{
public:
	uint8                                        Pad_3B49[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.AnimInitializationContext
struct FAnimInitializationContext : public FAnimExecutionContext
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.AnimUpdateContext
struct FAnimUpdateContext : public FAnimExecutionContext
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.AnimPoseContext
struct FAnimPoseContext : public FAnimExecutionContext
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct Engine.AnimComponentSpacePoseContext
struct FAnimComponentSpacePoseContext : public FAnimExecutionContext
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.A2Pose
struct FA2Pose
{
public:
	TArray<struct FTransform>                    Bones;                                             // 0x0(0x10)(None)
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Engine.A2CSPose
struct FA2CSPose : public FA2Pose
{
public:
	uint8                                        Pad_3B4A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ComponentSpaceFlags;                               // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x50 - 0x30)
// ScriptStruct Engine.CompositeSection
struct FCompositeSection : public FAnimLinkableElement
{
public:
	class FName                                  SectionName;                                       // 0x30(0x8)(None)
	class FName                                  NextSectionName;                                   // 0x38(0x8)(None)
	TArray<class UAnimMetaData*>                 MetaData;                                          // 0x40(0x10)(ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SlotAnimationTrack
struct FSlotAnimationTrack
{
public:
	class FName                                  SlotName;                                          // 0x0(0x8)(None)
	struct FAnimTrack                            AnimTrack;                                         // 0x8(0x10)(None)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Engine.BranchingPoint
struct FBranchingPoint : public FAnimLinkableElement
{
public:
	class FName                                  EventName;                                         // 0x30(0x8)(None)
	float                                        TriggerTimeOffset;                                 // 0x38(0x4)(None)
	uint8                                        Pad_3B4C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.BranchingPointMarker
struct FBranchingPointMarker
{
public:
	int32                                        NotifyIndex;                                       // 0x0(0x4)(None)
	float                                        TriggerTime;                                       // 0x4(0x4)(None)
	enum class EAnimNotifyEventType              NotifyEventType;                                   // 0x8(0x1)(None)
	uint8                                        Pad_3B4D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.MontageBlendSettings
struct FMontageBlendSettings
{
public:
	class UBlendProfile*                         BlendProfile;                                      // 0x0(0x8)(ZeroConstructor)
	struct FAlphaBlendArgs                       Blend;                                             // 0x8(0x10)(None)
	enum class EMontageBlendMode                 BlendMode;                                         // 0x18(0x1)(None)
	uint8                                        Pad_3B4E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct Engine.AnimMontageInstance
struct FAnimMontageInstance
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_3B4F[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlaying;                                          // 0x28(0x1)(None)
	uint8                                        Pad_3B50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultBlendTimeMultiplier;                        // 0x2C(0x4)(None)
	uint8                                        Pad_3B51[0xC8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                NextSections;                                      // 0xF8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                PrevSections;                                      // 0x108(0x10)(SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B52[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimNotifyEvent>              ActiveStateBranchingPoints;                        // 0x128(0x10)(ZeroConstructor)
	float                                        Position;                                          // 0x138(0x4)(None)
	float                                        PlayRate;                                          // 0x13C(0x4)(None)
	struct FAlphaBlend                           Blend;                                             // 0x140(0x30)(None)
	uint8                                        Pad_3B53[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DisableRootMotionCount;                            // 0x1A4(0x4)(None)
	bool                                         bPauseOnFinish;                                    // 0x1A8(0x1)(None)
	uint8                                        Pad_3B54[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.AnimNodeData
struct FAnimNodeData
{
public:
	TScriptInterface<class IAnimClassInterface>  AnimClassInterface;                                // 0x0(0x10)(None)
	TArray<uint32>                               Entries;                                           // 0x10(0x10)(None)
	int32                                        NodeIndex;                                         // 0x20(0x4)(None)
	uint32                                       Flags;                                             // 0x24(0x4)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.AnimNodeStructData
struct FAnimNodeStructData
{
public:
	TMap<class FName, int32>                     NameToIndexMap;                                    // 0x0(0x50)(None)
	int32                                        NumProperties;                                     // 0x50(0x4)(None)
	uint8                                        Pad_3B56[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimNodeFunctionRef
struct FAnimNodeFunctionRef
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(None)
	class FName                                  FunctionName;                                      // 0x8(0x8)(None)
	class UClass*                                Class;                                             // 0x10(0x8)(ZeroConstructor)
	class UFunction*                             Function;                                          // 0x18(0x8)(None)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(None)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
public:
	struct FPoseLink                             LocalPose;                                         // 0x10(0x10)(None)
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(None)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(None)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x30(0x1)(None)
	uint8                                        Pad_3B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x34(0x4)(None)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        BitPad_35A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3B58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(None)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x90(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x98(0x30)(None)
	int32                                        LODThreshold;                                      // 0xC8(0x4)(None)
	uint8                                        Pad_3B59[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InertializationRequest
struct FInertializationRequest
{
public:
	float                                        Duration;                                          // 0x0(0x4)(None)
	uint8                                        Pad_3B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         BlendProfile;                                      // 0x8(0x8)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Engine.InertializationPose
struct FInertializationPose
{
public:
	uint8                                        Pad_3B5B[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.InertializationBoneDiff
struct FInertializationBoneDiff
{
public:
	uint8                                        Pad_3B5C[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InertializationCurveDiff
struct FInertializationCurveDiff
{
public:
	uint8                                        Pad_3B5D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.InertializationPoseDiff
struct FInertializationPoseDiff
{
public:
	uint8                                        Pad_3B5E[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct Engine.AnimNode_Inertialization
struct FAnimNode_Inertialization : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(None)
	class UBlendProfile*                         DefaultBlendProfile;                               // 0x20(0x8)(ZeroConstructor)
	TArray<class FName>                          FilteredCurves;                                    // 0x28(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5F[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInertializationRequest>       RequestQueue;                                      // 0xA0(0x10)(None)
	uint8                                        Pad_3B60[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0xB8 - 0x58)
// ScriptStruct Engine.AnimNode_LinkedAnimGraph
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty
{
public:
	TArray<struct FPoseLink>                     InputPoses;                                        // 0x58(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          InputPoseNames;                                    // 0x68(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UClass*                                InstanceClass;                                     // 0x78(0x8)(ZeroConstructor)
	uint8                                        Pad_3B61[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         PendingBlendOutProfile;                            // 0x98(0x8)(ZeroConstructor)
	uint8                                        Pad_3B62[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         PendingBlendInProfile;                             // 0xA8(0x8)(ZeroConstructor)
	uint8                                        bReceiveNotifiesFromLinkedInstances : 1;           // Mask: 0x1, PropSize: 0x10xB0(0x1)(None)
	uint8                                        bPropagateNotifiesToLinkedInstances : 1;           // Mask: 0x2, PropSize: 0x10xB0(0x1)(None)
	uint8                                        Pad_3B63[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC8 - 0xB8)
// ScriptStruct Engine.AnimNode_LinkedAnimLayer
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph
{
public:
	class UClass*                                Interface;                                         // 0xB8(0x8)(ZeroConstructor)
	class FName                                  Layer;                                             // 0xC0(0x8)(None)
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct Engine.AnimNode_LinkedInputPose
struct FAnimNode_LinkedInputPose : public FAnimNode_Base
{
public:
	class FName                                  Name;                                              // 0x10(0x8)(None)
	class FName                                  Graph;                                             // 0x18(0x8)(None)
	struct FPoseLink                             InputPose;                                         // 0x20(0x10)(None)
	uint8                                        Pad_3B64[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x108 - 0x10)
// ScriptStruct Engine.AnimNode_SaveCachedPose
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             Pose;                                              // 0x10(0x10)(None)
	class FName                                  CachePoseName;                                     // 0x20(0x8)(None)
	uint8                                        Pad_3B65[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InputScaleBiasClampState
struct FInputScaleBiasClampState
{
public:
	uint8                                        Pad_3B66[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Engine.AnimNode_SequencePlayerBase
struct FAnimNode_SequencePlayerBase : public FAnimNode_AssetPlayerBase
{
public:
	struct FInputScaleBiasClampState             PlayRateScaleBiasClampState;                       // 0x38(0x8)(None)
};

// 0x8 (0x48 - 0x40)
// ScriptStruct Engine.AnimNode_SequencePlayer
struct FAnimNode_SequencePlayer : public FAnimNode_SequencePlayerBase
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x40(0x8)(None)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Engine.InputScaleBiasClampConstants
struct FInputScaleBiasClampConstants
{
public:
	bool                                         bMapRange;                                         // 0x0(0x1)(None)
	bool                                         bClampResult;                                      // 0x1(0x1)(None)
	bool                                         bInterpResult;                                     // 0x2(0x1)(None)
	uint8                                        Pad_3B69[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x4(0x8)(None)
	struct FInputRange                           OutRange;                                          // 0xC(0x8)(None)
	float                                        Scale;                                             // 0x14(0x4)(None)
	float                                        Bias;                                              // 0x18(0x4)(None)
	float                                        ClampMin;                                          // 0x1C(0x4)(None)
	float                                        ClampMax;                                          // 0x20(0x4)(None)
	float                                        InterpSpeedIncreasing;                             // 0x24(0x4)(None)
	float                                        InterpSpeedDecreasing;                             // 0x28(0x4)(None)
};

// 0x58 (0x98 - 0x40)
// ScriptStruct Engine.AnimNode_SequencePlayer_Standalone
struct FAnimNode_SequencePlayer_Standalone : public FAnimNode_SequencePlayerBase
{
public:
	class FName                                  GroupName;                                         // 0x40(0x8)(None)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x48(0x1)(None)
	enum class EAnimSyncMethod                   Method;                                            // 0x49(0x1)(None)
	bool                                         bIgnoreForRelevancyTest;                           // 0x4A(0x1)(None)
	uint8                                        Pad_3B6B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Sequence;                                          // 0x50(0x8)(None)
	float                                        PlayRateBasis;                                     // 0x58(0x4)(None)
	float                                        PlayRate;                                          // 0x5C(0x4)(None)
	struct FInputScaleBiasClampConstants         PlayRateScaleBiasClampConstants;                   // 0x60(0x2C)(None)
	float                                        StartPosition;                                     // 0x8C(0x4)(None)
	bool                                         bLoopAnimation;                                    // 0x90(0x1)(None)
	bool                                         bStartFromMatchingPose;                            // 0x91(0x1)(None)
	uint8                                        Pad_3B6C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Engine.AnimationActiveTransitionEntry
struct FAnimationActiveTransitionEntry
{
public:
	uint8                                        Pad_3B6E[0xB8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         BlendProfile;                                      // 0xB8(0x8)(None)
	uint8                                        Pad_3B71[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AnimationPotentialTransition
struct FAnimationPotentialTransition
{
public:
	uint8                                        Pad_3B72[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct Engine.AnimNode_StateMachine
struct FAnimNode_StateMachine : public FAnimNode_Base
{
public:
	int32                                        StateMachineIndexInClass;                          // 0x10(0x4)(None)
	int32                                        MaxTransitionsPerFrame;                            // 0x14(0x4)(None)
	int32                                        MaxTransitionsRequests;                            // 0x18(0x4)(None)
	bool                                         bSkipFirstUpdateTransition;                        // 0x1C(0x1)(None)
	bool                                         bReinitializeOnBecomingRelevant;                   // 0x1D(0x1)(None)
	bool                                         bCreateNotifyMetaData;                             // 0x1E(0x1)(None)
	bool                                         bAllowConduitEntryStates;                          // 0x1F(0x1)(None)
	uint8                                        Pad_3B73[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB8 - 0x10)
// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
public:
	uint8                                        Pad_3B74[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FramesToCachePose;                                 // 0x98(0x4)(None)
	uint8                                        Pad_3B75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EEvaluatorDataSource              DataSource;                                        // 0xA0(0x1)(None)
	enum class EEvaluatorMode                    EvaluatorMode;                                     // 0xA1(0x1)(None)
	uint8                                        Pad_3B76[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Engine.AnimNode_TransitionResult
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
public:
	bool                                         bCanEnterTransition;                               // 0x10(0x1)(None)
	uint8                                        Pad_3B77[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Engine.AnimNode_UseCachedPose
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             LinkToCachingNode;                                 // 0x10(0x10)(None)
	class FName                                  CachePoseName;                                     // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.AnimNotifyEventReference
struct FAnimNotifyEventReference
{
public:
	uint8                                        Pad_3B78[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorDataTable*                      MirrorTable;                                       // 0x18(0x8)(ZeroConstructor)
	class UObject*                               NotifySource;                                      // 0x20(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimNotifyArray
struct FAnimNotifyArray
{
public:
	TArray<struct FAnimNotifyEventReference>     Notifies;                                          // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimNotifyContext
struct FAnimNotifyContext
{
public:
	uint8                                        Pad_3B79[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.AnimNotifyQueue
struct FAnimNotifyQueue
{
public:
	uint8                                        Pad_3B7A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimNotifyEventReference>     AnimNotifies;                                      // 0x10(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAnimNotifyArray>   UnfilteredMontageAnimNotifies;                     // 0x20(0x50)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimSequenceTrackContainer
struct FAnimSequenceTrackContainer
{
public:
	TArray<struct FRawAnimSequenceTrack>         AnimationTracks;                                   // 0x0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          TrackNames;                                        // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.TranslationTrack
struct FTranslationTrack
{
public:
	TArray<struct FVector3f>                     PosKeys;                                           // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.RotationTrack
struct FRotationTrack
{
public:
	TArray<struct FQuat4f>                       RotKeys;                                           // 0x0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ScaleTrack
struct FScaleTrack
{
public:
	TArray<struct FVector3f>                     ScaleKeys;                                         // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CurveTrack
struct FCurveTrack
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(None)
	TArray<float>                                CurveWeights;                                      // 0x8(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.CompressedTrack
struct FCompressedTrack
{
public:
	TArray<uint8>                                ByteStream;                                        // 0x0(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(None)
	float                                        Mins[0x3];                                         // 0x20(0xC)(None)
	float                                        Ranges[0x3];                                       // 0x2C(0xC)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimSetMeshLinkup
struct FAnimSetMeshLinkup
{
public:
	TArray<int32>                                BoneToTrackTable;                                  // 0x0(0x10)(None)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct Engine.AnimNode_SingleNode
struct FAnimNode_SingleNode : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(None)
	uint8                                        Pad_3B7F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x980 - 0x878)
// ScriptStruct Engine.AnimSingleNodeInstanceProxy
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_3B80[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimationTransitionRule
struct FAnimationTransitionRule
{
public:
	class FName                                  RuleToExecute;                                     // 0x0(0x8)(None)
	bool                                         TransitionReturnVal;                               // 0x8(0x1)(None)
	uint8                                        Pad_3B81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TransitionIndex;                                   // 0xC(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AnimationStateBase
struct FAnimationStateBase
{
public:
	class FName                                  StateName;                                         // 0x0(0x8)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Engine.AnimationState
struct FAnimationState : public FAnimationStateBase
{
public:
	TArray<struct FAnimationTransitionRule>      Transitions;                                       // 0x8(0x10)(None)
	int32                                        StateRootNodeIndex;                                // 0x18(0x4)(None)
	int32                                        StartNotify;                                       // 0x1C(0x4)(None)
	int32                                        EndNotify;                                         // 0x20(0x4)(None)
	int32                                        FullyBlendedNotify;                                // 0x24(0x4)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Engine.AnimationTransitionBetweenStates
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
public:
	int32                                        PreviousState;                                     // 0x8(0x4)(None)
	int32                                        NextState;                                         // 0xC(0x4)(None)
	float                                        CrossfadeDuration;                                 // 0x10(0x4)(None)
	int32                                        StartNotify;                                       // 0x14(0x4)(None)
	int32                                        EndNotify;                                         // 0x18(0x4)(None)
	int32                                        InterruptNotify;                                   // 0x1C(0x4)(None)
	enum class EAlphaBlendOption                 BlendMode;                                         // 0x20(0x1)(None)
	uint8                                        Pad_3B83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0x28(0x8)(ZeroConstructor)
	class UBlendProfile*                         BlendProfile;                                      // 0x30(0x8)(None)
	enum class ETransitionLogicType              LogicType;                                         // 0x38(0x1)(None)
	uint8                                        Pad_3B84[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BakedStateExitTransition
struct FBakedStateExitTransition
{
public:
	int32                                        CanTakeDelegateIndex;                              // 0x0(0x4)(None)
	int32                                        CustomResultNodeIndex;                             // 0x4(0x4)(None)
	int32                                        TransitionIndex;                                   // 0x8(0x4)(None)
	bool                                         bDesiredTransitionReturnValue;                     // 0xC(0x1)(None)
	bool                                         bAutomaticRemainingTimeRule;                       // 0xD(0x1)(None)
	uint8                                        Pad_3B85[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SyncGroupNameToRequireValidMarkersRule;            // 0x10(0x8)(None)
	TArray<int32>                                PoseEvaluatorLinks;                                // 0x18(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.BakedAnimationState
struct FBakedAnimationState
{
public:
	class FName                                  StateName;                                         // 0x0(0x8)(None)
	TArray<struct FBakedStateExitTransition>     Transitions;                                       // 0x8(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        StateRootNodeIndex;                                // 0x18(0x4)(None)
	int32                                        StartNotify;                                       // 0x1C(0x4)(None)
	int32                                        EndNotify;                                         // 0x20(0x4)(None)
	int32                                        FullyBlendedNotify;                                // 0x24(0x4)(None)
	bool                                         bIsAConduit;                                       // 0x28(0x1)(None)
	uint8                                        Pad_3B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EntryRuleNodeIndex;                                // 0x2C(0x4)(None)
	TArray<int32>                                PlayerNodeIndices;                                 // 0x30(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                LayerNodeIndices;                                  // 0x40(0x10)(None)
	bool                                         bAlwaysResetOnEntry;                               // 0x50(0x1)(None)
	uint8                                        Pad_3B87[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.BakedAnimationStateMachine
struct FBakedAnimationStateMachine
{
public:
	class FName                                  MachineName;                                       // 0x0(0x8)(None)
	int32                                        InitialState;                                      // 0x8(0x4)(None)
	uint8                                        Pad_3B88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBakedAnimationState>          States;                                            // 0x10(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FAnimationTransitionBetweenStates> Transitions;                                       // 0x20(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ExposedValueCopyRecord
struct FExposedValueCopyRecord
{
public:
	int32                                        CopyIndex;                                         // 0x0(0x4)(None)
	enum class EPostCopyOperation                PostCopyOperation;                                 // 0x4(0x1)(None)
	uint8                                        Pad_3B89[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ExposedValueHandler
struct FExposedValueHandler
{
public:
	TArray<struct FExposedValueCopyRecord>       CopyRecords;                                       // 0x0(0x10)(None)
	class UFunction*                             Function;                                          // 0x10(0x8)(None)
	uint8                                        Pad_3B8A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoundFunction;                                     // 0x20(0x8)(None)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Engine.AnimSubsystem_Base
struct FAnimSubsystem_Base : public FAnimSubsystem
{
public:
	TArray<struct FExposedValueHandler>          ExposedValueHandlers;                              // 0x8(0x10)(None)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct Engine.AnimSubsystemInstance_NodeRelevancy
struct FAnimSubsystemInstance_NodeRelevancy : public FAnimSubsystemInstance
{
public:
	uint8                                        Pad_3B8B[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.PropertyAccessSegment
struct FPropertyAccessSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class UStruct*                               Struct;                                            // 0x8(0x8)(ZeroConstructor)
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(ZeroConstructor)
	class UFunction*                             Function;                                          // 0x30(0x8)(None)
	int32                                        ArrayIndex;                                        // 0x38(0x4)(None)
	uint16                                       Flags;                                             // 0x3C(0x2)(None)
	uint8                                        Pad_3B8C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PropertyAccessPath
struct FPropertyAccessPath
{
public:
	int32                                        PathSegmentStartIndex;                             // 0x0(0x4)(None)
	int32                                        PathSegmentCount;                                  // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PropertyAccessCopy
struct FPropertyAccessCopy
{
public:
	int32                                        AccessIndex;                                       // 0x0(0x4)(None)
	int32                                        DestAccessStartIndex;                              // 0x4(0x4)(None)
	int32                                        DestAccessEndIndex;                                // 0x8(0x4)(None)
	enum class EPropertyAccessCopyType           Type;                                              // 0xC(0x1)(None)
	uint8                                        Pad_3B8D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PropertyAccessCopyBatch
struct FPropertyAccessCopyBatch
{
public:
	TArray<struct FPropertyAccessCopy>           Copies;                                            // 0x0(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.PropertyAccessLibrary
struct FPropertyAccessLibrary
{
public:
	TArray<struct FPropertyAccessSegment>        PathSegments;                                      // 0x0(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FPropertyAccessPath>           SrcPaths;                                          // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FPropertyAccessPath>           DestPaths;                                         // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FPropertyAccessCopyBatch>      CopyBatchArray;                                    // 0x30(0x10)(None)
	uint8                                        Pad_3B8E[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct Engine.AnimSubsystem_PropertyAccess
struct FAnimSubsystem_PropertyAccess : public FAnimSubsystem
{
public:
	struct FPropertyAccessLibrary                Library;                                           // 0x8(0x78)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.LinkedAnimLayerInstanceData
struct FLinkedAnimLayerInstanceData
{
public:
	class UAnimInstance*                         Instance;                                          // 0x0(0x8)(ZeroConstructor)
	TMap<class FName, TWeakObjectPtr<class UAnimInstance>> LinkedFunctions;                                   // 0x8(0x50)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LinkedAnimLayerClassData
struct FLinkedAnimLayerClassData
{
public:
	uint8                                        Pad_3B8F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinkedAnimLayerInstanceData>  InstancesData;                                     // 0x8(0x10)(None)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Engine.AnimSubsystem_SharedLinkedAnimLayers
struct FAnimSubsystem_SharedLinkedAnimLayers : public FAnimSubsystemInstance
{
public:
	TArray<struct FLinkedAnimLayerClassData>     ClassesData;                                       // 0x8(0x10)(None)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct Engine.AnimSubsystem_Tag
struct FAnimSubsystem_Tag : public FAnimSubsystem
{
public:
	TMap<class FName, int32>                     NodeIndices;                                       // 0x8(0x50)(None)
	uint8                                        Pad_3B90[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AssetMapping
struct FAssetMapping
{
public:
	class UAnimationAsset*                       SourceAsset;                                       // 0x0(0x8)(ZeroConstructor)
	class UAnimationAsset*                       TargetAsset;                                       // 0x8(0x8)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.BlendProfileBoneEntry
struct FBlendProfileBoneEntry
{
public:
	struct FBoneReference                        BoneReference;                                     // 0x0(0x10)(None)
	float                                        BlendScale;                                        // 0x10(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.CachedAnimStateData
struct FCachedAnimStateData
{
public:
	class FName                                  StateMachineName;                                  // 0x0(0x8)(None)
	class FName                                  StateName;                                         // 0x8(0x8)(None)
	uint8                                        Pad_3B91[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CachedAnimStateArray
struct FCachedAnimStateArray
{
public:
	TArray<struct FCachedAnimStateData>          States;                                            // 0x0(0x10)(None)
	uint8                                        Pad_3B92[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CachedAnimAssetPlayerData
struct FCachedAnimAssetPlayerData
{
public:
	class FName                                  StateMachineName;                                  // 0x0(0x8)(None)
	class FName                                  StateName;                                         // 0x8(0x8)(None)
	uint8                                        Pad_3B93[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.CachedAnimRelevancyData
struct FCachedAnimRelevancyData
{
public:
	class FName                                  StateMachineName;                                  // 0x0(0x8)(None)
	class FName                                  StateName;                                         // 0x8(0x8)(None)
	uint8                                        Pad_3B95[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.CachedAnimTransitionData
struct FCachedAnimTransitionData
{
public:
	class FName                                  StateMachineName;                                  // 0x0(0x8)(None)
	class FName                                  FromStateName;                                     // 0x8(0x8)(None)
	class FName                                  ToStateName;                                       // 0x10(0x8)(None)
	uint8                                        Pad_3B97[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.NamedCurveValue
struct FNamedCurveValue
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	float                                        Value;                                             // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InputClampState
struct FInputClampState
{
public:
	uint8                                        Pad_3B98[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Engine.MirrorTableRow
struct FMirrorTableRow : public FTableRowBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(None)
	class FName                                  MirroredName;                                      // 0x10(0x8)(None)
	enum class EMirrorRowType                    MirrorEntryType;                                   // 0x18(0x1)(None)
	uint8                                        Pad_3B99[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.MirrorFindReplaceExpression
struct FMirrorFindReplaceExpression
{
public:
	class FName                                  FindExpression;                                    // 0x0(0x8)(None)
	class FName                                  ReplaceExpression;                                 // 0x8(0x8)(None)
	enum class EMirrorFindReplaceMethod          FindReplaceMethod;                                 // 0x10(0x1)(None)
	uint8                                        Pad_3B9C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.TrajectorySample
struct FTrajectorySample
{
public:
	float                                        AccumulatedSeconds;                                // 0x0(0x4)(None)
	uint8                                        Pad_3B9D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	struct FVector                               LinearVelocity;                                    // 0x70(0x18)(None)
	uint8                                        Pad_3B9E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TrajectorySampleRange
struct FTrajectorySampleRange
{
public:
	TArray<struct FTrajectorySample>             Samples;                                           // 0x0(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.NodeItem
struct FNodeItem
{
public:
	class FName                                  ParentName;                                        // 0x0(0x8)(None)
	uint8                                        Pad_3B9F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.PoseData
struct FPoseData
{
public:
	TArray<struct FTransform>                    LocalSpacePose;                                    // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                CurveData;                                         // 0x10(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PoseAssetInfluence
struct FPoseAssetInfluence
{
public:
	int32                                        PoseIndex;                                         // 0x0(0x4)(None)
	int32                                        BoneTransformIndex;                                // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PoseAssetInfluences
struct FPoseAssetInfluences
{
public:
	TArray<struct FPoseAssetInfluence>           Influences;                                        // 0x0(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.PoseDataContainer
struct FPoseDataContainer
{
public:
	TArray<struct FSmartName>                    PoseNames;                                         // 0x0(0x10)(AutoWeak, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tracks;                                            // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                TrackBoneIndices;                                  // 0x20(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FPoseAssetInfluences>          TrackPoseInfluenceIndices;                         // 0x30(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FPoseData>                     Poses;                                             // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FAnimCurveBase>                Curves;                                            // 0x50(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PreviewAttachedObjectPair
struct FPreviewAttachedObjectPair
{
public:
	TSoftObjectPtr<class UObject>                AttachedObject;                                    // 0x0(0x30)(None)
	class FName                                  AttachedTo;                                        // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PreviewAssetAttachContainer
struct FPreviewAssetAttachContainer
{
public:
	TArray<struct FPreviewAttachedObjectPair>    AttachedObjects;                                   // 0x0(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.PreviewMeshCollectionEntry
struct FPreviewMeshCollectionEntry
{
public:
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x0(0x30)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimBlueprint>         AnimBlueprint;                                     // 0x30(0x30)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.Node
struct FNode
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  ParentName;                                        // 0x8(0x8)(None)
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	class FString                                DisplayName;                                       // 0x70(0x10)(None)
	bool                                         bAdvanced;                                         // 0x80(0x1)(None)
	uint8                                        Pad_3BA0[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.RigTransformConstraint
struct FRigTransformConstraint
{
public:
	enum class EConstraintTransform              TranformType;                                      // 0x0(0x1)(None)
	uint8                                        Pad_3BA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParentSpace;                                       // 0x4(0x8)(None)
	float                                        Weight;                                            // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TransformBaseConstraint
struct FTransformBaseConstraint
{
public:
	TArray<struct FRigTransformConstraint>       TransformConstraints;                              // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.TransformBase
struct FTransformBase
{
public:
	class FName                                  Node;                                              // 0x0(0x8)(None)
	struct FTransformBaseConstraint              Constraints[0x2];                                  // 0x8(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SkeletonToMeshLinkup
struct FSkeletonToMeshLinkup
{
public:
	TArray<int32>                                SkeletonToMeshTable;                               // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                MeshToSkeletonTable;                               // 0x10(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BoneNode
struct FBoneNode
{
public:
	enum class EBoneTranslationRetargetingMode   TranslationRetargetingMode;                        // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ReferencePose
struct FReferencePose
{
public:
	class FName                                  PoseName;                                          // 0x0(0x8)(None)
	TArray<struct FTransform>                    ReferencePose;                                     // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BoneReductionSetting
struct FBoneReductionSetting
{
public:
	TArray<class FName>                          BonesToRemove;                                     // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NameMapping
struct FNameMapping
{
public:
	class FName                                  NodeName;                                          // 0x0(0x8)(None)
	class FName                                  BoneName;                                          // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.RigConfiguration
struct FRigConfiguration
{
public:
	class URig*                                  Rig;                                               // 0x0(0x8)(None)
	TArray<struct FNameMapping>                  BoneMappingTable;                                  // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimSlotGroup
struct FAnimSlotGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(None)
	TArray<class FName>                          SlotNames;                                         // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.VirtualBone
struct FVirtualBone
{
public:
	class FName                                  SourceBoneName;                                    // 0x0(0x8)(None)
	class FName                                  TargetBoneName;                                    // 0x8(0x8)(None)
	class FName                                  VirtualBoneName;                                   // 0x10(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.PerPlatformBool
struct FPerPlatformBool
{
public:
	bool                                         Default;                                           // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SkinWeightProfileInfo
struct FSkinWeightProfileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	struct FPerPlatformBool                      DefaultProfile;                                    // 0x8(0x1)(None)
	uint8                                        Pad_3BA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerPlatformInt                       DefaultProfileFromLODIndex;                        // 0xC(0x4)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.SkinWeightProfileManagerTickFunction
struct FSkinWeightProfileManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3BA3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Engine.AnimCurveType
struct FAnimCurveType
{
public:
	bool                                         bMaterial;                                         // 0x0(0x1)(None)
	bool                                         bMorphtarget;                                      // 0x1(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CurveMetaData
struct FCurveMetaData
{
public:
	TArray<struct FBoneReference>                LinkedBones;                                       // 0x0(0x10)(None)
	uint8                                        MaxLOD;                                            // 0x10(0x1)(None)
	struct FAnimCurveType                        Type;                                              // 0x11(0x2)(None)
	uint8                                        Pad_3BA4[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.SmartNameMapping
struct FSmartNameMapping
{
public:
	uint8                                        Pad_3BA5[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.SmartNameContainer
struct FSmartNameContainer
{
public:
	uint8                                        Pad_3BA6[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TimeStretchCurveMarker
struct FTimeStretchCurveMarker
{
public:
	float                                        Time[0x3];                                         // 0x0(0xC)(None)
	float                                        Alpha;                                             // 0xC(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.TimeStretchCurve
struct FTimeStretchCurve
{
public:
	float                                        SamplingRate;                                      // 0x0(0x4)(None)
	float                                        CurveValueMinPrecision;                            // 0x4(0x4)(None)
	TArray<struct FTimeStretchCurveMarker>       Markers;                                           // 0x8(0x10)(None)
	float                                        Sum_dT_i_by_C_i[0x3];                              // 0x18(0xC)(None)
	uint8                                        Pad_3BA7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.TimeStretchCurveInstance
struct FTimeStretchCurveInstance
{
public:
	bool                                         bHasValidData;                                     // 0x0(0x1)(None)
	uint8                                        Pad_3BA8[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimGroupInfo
struct FAnimGroupInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimParentNodeAssetOverride
struct FAnimParentNodeAssetOverride
{
public:
	class UAnimationAsset*                       NewAsset;                                          // 0x0(0x8)(None)
	struct FGuid                                 ParentNodeGuid;                                    // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AssetCompileData
struct FAssetCompileData
{
public:
	TWeakObjectPtr<class UObject>                Asset;                                             // 0x0(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.PrimaryAssetTypeInfo
struct FPrimaryAssetTypeInfo
{
public:
	class FName                                  PrimaryAssetType;                                  // 0x0(0x8)(None)
	TSoftClassPtr<class UObject>                 AssetBaseClass;                                    // 0x8(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                AssetBaseClassLoaded;                              // 0x38(0x8)(None)
	bool                                         bHasBlueprintClasses;                              // 0x40(0x1)(None)
	bool                                         bIsEditorOnly;                                     // 0x41(0x1)(None)
	uint8                                        Pad_3BA9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDirectoryPath>                Directories;                                       // 0x48(0x10)(SimpleDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               SpecificAssets;                                    // 0x58(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FPrimaryAssetRules                    Rules;                                             // 0x68(0xC)(None)
	uint8                                        Pad_3BAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        AssetScanPaths;                                    // 0x78(0x10)(None)
	bool                                         bIsDynamicAsset;                                   // 0x88(0x1)(None)
	uint8                                        Pad_3BAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfAssets;                                    // 0x8C(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.AssetManagerSearchRules
struct FAssetManagerSearchRules
{
public:
	TArray<class FString>                        AssetScanPaths;                                    // 0x0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        IncludePatterns;                                   // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExcludePatterns;                                   // 0x20(0x10)(None)
	class UClass*                                AssetBaseClass;                                    // 0x30(0x8)(None)
	bool                                         bHasBlueprintClasses;                              // 0x38(0x1)(None)
	bool                                         bForceSynchronousScan;                             // 0x39(0x1)(None)
	bool                                         bSkipVirtualPathExpansion;                         // 0x3A(0x1)(None)
	bool                                         bSkipManagerIncludeCheck;                          // 0x3B(0x1)(None)
	uint8                                        Pad_3BAC[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AudioEffectParameters
struct FAudioEffectParameters
{
public:
	uint8                                        Pad_3BAD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Engine.AudioReverbEffect
struct FAudioReverbEffect : public FAudioEffectParameters
{
public:
	uint8                                        Pad_3BAE[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AudioQualitySettings
struct FAudioQualitySettings
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(None)
	int32                                        MaxChannels;                                       // 0x18(0x4)(None)
	uint8                                        Pad_3BAF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SoundDebugEntry
struct FSoundDebugEntry
{
public:
	class FName                                  DebugName;                                         // 0x0(0x8)(None)
	struct FSoftObjectPath                       Sound;                                             // 0x8(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DefaultAudioBusSettings
struct FDefaultAudioBusSettings
{
public:
	struct FSoftObjectPath                       AudioBus;                                          // 0x0(0x20)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.SoundSubmixSendInfo
struct FSoundSubmixSendInfo
{
public:
	enum class ESendLevelControlMethod           SendLevelControlMethod;                            // 0x0(0x1)(None)
	enum class ESubmixSendStage                  SendStage;                                         // 0x1(0x1)(None)
	uint8                                        Pad_3BB0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x8(0x8)(ZeroConstructor)
	float                                        SendLevel;                                         // 0x10(0x4)(None)
	bool                                         DisableManualSendClamp;                            // 0x14(0x1)(None)
	uint8                                        Pad_3BB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSendLevel;                                      // 0x18(0x4)(None)
	float                                        MaxSendLevel;                                      // 0x1C(0x4)(None)
	float                                        MinSendDistance;                                   // 0x20(0x4)(None)
	float                                        MaxSendDistance;                                   // 0x24(0x4)(None)
	struct FRuntimeFloatCurve                    CustomSendLevelCurve;                              // 0x28(0x88)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AudioVolumeSubmixSendSettings
struct FAudioVolumeSubmixSendSettings
{
public:
	enum class EAudioVolumeLocationState         ListenerLocationState;                             // 0x0(0x1)(None)
	enum class EAudioVolumeLocationState         SourceLocationState;                               // 0x1(0x1)(None)
	uint8                                        Pad_3BB2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoundSubmixSendInfo>          SubmixSends;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AudioVolumeSubmixOverrideSettings
struct FAudioVolumeSubmixOverrideSettings
{
public:
	class USoundSubmix*                          Submix;                                            // 0x0(0x8)(ZeroConstructor)
	TArray<class USoundEffectSubmixPreset*>      SubmixEffectChain;                                 // 0x8(0x10)(None)
	float                                        CrossfadeTime;                                     // 0x18(0x4)(None)
	uint8                                        Pad_3BB3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.InteriorSettings
struct FInteriorSettings
{
public:
	bool                                         bIsWorldSettings;                                  // 0x0(0x1)(None)
	uint8                                        Pad_3BB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExteriorVolume;                                    // 0x4(0x4)(None)
	float                                        ExteriorTime;                                      // 0x8(0x4)(None)
	float                                        ExteriorLPF;                                       // 0xC(0x4)(None)
	float                                        ExteriorLPFTime;                                   // 0x10(0x4)(None)
	float                                        InteriorVolume;                                    // 0x14(0x4)(None)
	float                                        InteriorTime;                                      // 0x18(0x4)(None)
	float                                        InteriorLPF;                                       // 0x1C(0x4)(None)
	float                                        InteriorLPFTime;                                   // 0x20(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.NodeToCodeAssociation
struct FNodeToCodeAssociation
{
public:
	uint8                                        Pad_3BB5[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// ScriptStruct Engine.DebuggingInfoForSingleFunction
struct FDebuggingInfoForSingleFunction
{
public:
	uint8                                        Pad_3BB6[0x190];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PointerToUberGraphFrame
struct FPointerToUberGraphFrame
{
public:
	uint8                                        Pad_3BB7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BlueprintDebugData
struct FBlueprintDebugData
{
public:
	uint8                                        Pad_3BB8[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.EventGraphFastCallPair
struct FEventGraphFastCallPair
{
public:
	class UFunction*                             FunctionToPatch;                                   // 0x0(0x8)(None)
	int32                                        EventGraphCallOffset;                              // 0x8(0x4)(None)
	uint8                                        Pad_3BB9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
struct FBlueprintComponentChangedPropertyInfo
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(None)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_3BBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStruct*                               PropertyScope;                                     // 0x10(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.BlueprintCookedComponentInstancingData
struct FBlueprintCookedComponentInstancingData
{
public:
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                               // 0x0(0x10)(None)
	uint8                                        Pad_3BBB[0x11];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasValidCookedData;                               // 0x21(0x1)(None)
	uint8                                        Pad_3BBC[0x26];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BPComponentClassOverride
struct FBPComponentClassOverride
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(None)
	class UClass*                                ComponentClass;                                    // 0x8(0x8)(None)
};

// 0x0 (0x1 - 0x1)
// ScriptStruct Engine.BookmarkJumpToSettings
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BuilderPoly
struct FBuilderPoly
{
public:
	TArray<int32>                                VertexIndices;                                     // 0x0(0x10)(None)
	int32                                        Direction;                                         // 0x10(0x4)(None)
	class FName                                  ItemName;                                          // 0x14(0x8)(None)
	int32                                        PolyFlags;                                         // 0x1C(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CameraLensInterfaceClassSupport
struct FCameraLensInterfaceClassSupport
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PooledCameraShakes
struct FPooledCameraShakes
{
public:
	TArray<class UCameraShakeBase*>              PooledShakes;                                      // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ActiveCameraShakeInfo
struct FActiveCameraShakeInfo
{
public:
	class UCameraShakeBase*                      ShakeInstance;                                     // 0x0(0x8)(ZeroConstructor)
	TWeakObjectPtr<class UCameraShakeSourceComponent> ShakeSource;                                       // 0x8(0x8)(None)
	bool                                         bIsCustomInitialized;                              // 0x10(0x1)(None)
	uint8                                        Pad_3BBD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.CameraShakeStartParams
struct FCameraShakeStartParams
{
public:
	bool                                         bIsRestarting;                                     // 0x0(0x1)(None)
};

// 0x870 (0x870 - 0x0)
// ScriptStruct Engine.CameraShakeUpdateParams
struct FCameraShakeUpdateParams
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
	float                                        ShakeScale;                                        // 0x4(0x4)(None)
	float                                        DynamicScale;                                      // 0x8(0x4)(None)
	float                                        BlendingWeight;                                    // 0xC(0x4)(None)
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x860)(None)
};

// 0x870 (0x870 - 0x0)
// ScriptStruct Engine.CameraShakeScrubParams
struct FCameraShakeScrubParams
{
public:
	float                                        AbsoluteTime;                                      // 0x0(0x4)(None)
	float                                        ShakeScale;                                        // 0x4(0x4)(None)
	float                                        DynamicScale;                                      // 0x8(0x4)(None)
	float                                        BlendingWeight;                                    // 0xC(0x4)(None)
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x860)(None)
};

// 0x7C0 (0x7C0 - 0x0)
// ScriptStruct Engine.CameraShakeUpdateResult
struct FCameraShakeUpdateResult
{
public:
	uint8                                        Pad_3BBE[0x7C0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.CameraShakeStopParams
struct FCameraShakeStopParams
{
public:
	bool                                         bImmediately;                                      // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CameraShakeDuration
struct FCameraShakeDuration
{
public:
	float                                        Duration;                                          // 0x0(0x4)(None)
	enum class ECameraShakeDurationType          Type;                                              // 0x4(0x1)(None)
	uint8                                        Pad_3BBF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CameraShakeInfo
struct FCameraShakeInfo
{
public:
	struct FCameraShakeDuration                  Duration;                                          // 0x0(0x8)(None)
	float                                        BlendIn;                                           // 0x8(0x4)(None)
	float                                        BlendOut;                                          // 0xC(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.DummySpacerCameraTypes
struct FDummySpacerCameraTypes
{
public:
	uint8                                        Pad_3BC0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.RootMotionSourceSettings
struct FRootMotionSourceSettings
{
public:
	uint8                                        Flags;                                             // 0x0(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.RootMotionSourceGroup
struct FRootMotionSourceGroup
{
public:
	uint8                                        Pad_3BC1[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bHasAdditiveSources : 1;                           // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        bHasOverrideSources : 1;                           // Mask: 0x2, PropSize: 0x10x28(0x1)(None)
	uint8                                        bHasOverrideSourcesWithIgnoreZAccumulate : 1;      // Mask: 0x4, PropSize: 0x10x28(0x1)(None)
	uint8                                        bIsAdditiveVelocityApplied : 1;                    // Mask: 0x8, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_35E : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	struct FRootMotionSourceSettings             LastAccumulatedSettings;                           // 0x29(0x1)(None)
	uint8                                        Pad_3BC2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize10                 LastPreAdditiveVelocity;                           // 0x30(0x18)(None)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Engine.RepRootMotionMontage
struct FRepRootMotionMontage
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(None)
	uint8                                        Pad_3BC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(ZeroConstructor)
	float                                        Position;                                          // 0x10(0x4)(None)
	uint8                                        Pad_3BC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize100                Location;                                          // 0x18(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(None)
	class UPrimitiveComponent*                   MovementBase;                                      // 0x48(0x8)(ZeroConstructor)
	class FName                                  MovementBaseBoneName;                              // 0x50(0x8)(None)
	bool                                         bRelativePosition;                                 // 0x58(0x1)(None)
	bool                                         bRelativeRotation;                                 // 0x59(0x1)(None)
	uint8                                        Pad_3BC5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRootMotionSourceGroup                AuthoritativeRootMotion;                           // 0x60(0x48)(None)
	struct FVector_NetQuantize10                 Acceleration;                                      // 0xA8(0x18)(None)
	struct FVector_NetQuantize10                 LinearVelocity;                                    // 0xC0(0x18)(None)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
struct FSimulatedRootMotionReplicatedMove
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	uint8                                        Pad_3BC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRepRootMotionMontage                 RootMotion;                                        // 0x8(0xD8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.BasedMovementInfo
struct FBasedMovementInfo
{
public:
	uint16                                       BaseID;                                            // 0x0(0x2)(None)
	uint8                                        Pad_3BC7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   MovementBase;                                      // 0x8(0x8)(None)
	class FName                                  BoneName;                                          // 0x10(0x8)(None)
	struct FVector_NetQuantize100                Location;                                          // 0x18(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(None)
	bool                                         bServerHasBaseComponent;                           // 0x48(0x1)(None)
	bool                                         bRelativeRotation;                                 // 0x49(0x1)(None)
	bool                                         bServerHasVelocity;                                // 0x4A(0x1)(None)
	uint8                                        Pad_3BC8[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.ReplicatedBasedMovementInfo
struct FReplicatedBasedMovementInfo
{
public:
	struct FBasedMovementInfo                    BasedMovement;                                     // 0x0(0x50)(None)
	bool                                         bRequiresRelativePositioning;                      // 0x50(0x1)(None)
	uint8                                        Pad_3BC9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Engine.FindFloorResult
struct FFindFloorResult
{
public:
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bWalkableFloor : 1;                                // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bLineTrace : 1;                                    // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_35F : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BCA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloorDist;                                         // 0x4(0x4)(None)
	float                                        LineDist;                                          // 0x8(0x4)(None)
	uint8                                        Pad_3BCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitResult;                                         // 0x10(0xF0)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.CollisionResponseTemplate
struct FCollisionResponseTemplate
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x8(0x1)(None)
	uint8                                        Pad_3BCC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanModify;                                        // 0xA(0x1)(None)
	uint8                                        Pad_3BCD[0x21];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ObjectTypeName;                                    // 0x2C(0x8)(None)
	uint8                                        Pad_3BCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FResponseChannel>              CustomResponses;                                   // 0x38(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.CustomChannelSetup
struct FCustomChannelSetup
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(None)
	enum class ECollisionResponse                DefaultResponse;                                   // 0x1(0x1)(None)
	bool                                         bTraceType;                                        // 0x2(0x1)(None)
	bool                                         bStaticObject;                                     // 0x3(0x1)(None)
	class FName                                  Name;                                              // 0x4(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CustomProfile
struct FCustomProfile
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	TArray<struct FResponseChannel>              CustomResponses;                                   // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BlueprintComponentDelegateBinding
struct FBlueprintComponentDelegateBinding
{
public:
	class FName                                  ComponentPropertyName;                             // 0x0(0x8)(None)
	class FName                                  DelegatePropertyName;                              // 0x8(0x8)(None)
	class FName                                  FunctionNameToBind;                                // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ActorComponentInstanceSourceInfo
struct FActorComponentInstanceSourceInfo
{
public:
	class UObject*                               SourceComponentTemplate;                           // 0x0(0x8)(None)
	enum class EComponentCreationMethod          SourceComponentCreationMethod;                     // 0x8(0x1)(None)
	uint8                                        Pad_3BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SourceComponentTypeSerializedIndex;                // 0xC(0x4)(None)
};

// 0x8 (0x60 - 0x58)
// ScriptStruct Engine.ActorInstanceData
struct FActorInstanceData : public FInstanceCacheDataBase
{
public:
	class UClass*                                ActorClass;                                        // 0x58(0x8)(ZeroConstructor)
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct Engine.AudioComponentParam
struct FAudioComponentParam : public FAudioParameter
{
public:
	class USoundWave*                            SoundWaveParam;                                    // 0xA0(0x8)(ZeroConstructor)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.StoredMoveData
struct FStoredMoveData
{
public:
	uint8                                        Pad_3BD0[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3BD1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.CharacterMovementComponentPrePhysicsTickFunction
struct FCharacterMovementComponentPrePhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3BD2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.ChildActorAttachedActorInfo
struct FChildActorAttachedActorInfo
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(None)
	class FName                                  SocketName;                                        // 0x8(0x8)(None)
	struct FTransform                            RelativeTransform;                                 // 0x10(0x60)(None)
};

// 0x40 (0xF8 - 0xB8)
// ScriptStruct Engine.ChildActorComponentInstanceData
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{
public:
	class UClass*                                ChildActorClass;                                   // 0xB8(0x8)(ZeroConstructor)
	class FName                                  ChildActorName;                                    // 0xC0(0x8)(None)
	TArray<struct FChildActorAttachedActorInfo>  AttachedActors;                                    // 0xC8(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_3BD3[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.CachedKeyToActionInfo
struct FCachedKeyToActionInfo
{
public:
	TWeakObjectPtr<class UPlayerInput>           PlayerInput;                                       // 0x0(0x8)(None)
	uint8                                        Pad_3BD4[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x140 - 0xB8)
// ScriptStruct Engine.PrecomputedLightInstanceData
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
public:
	uint8                                        Pad_3BD5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xC0(0x60)(None)
	struct FGuid                                 LightGuid;                                         // 0x120(0x10)(None)
	int32                                        PreviewShadowMapChannel;                           // 0x130(0x4)(None)
	uint8                                        Pad_3BD6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.BatchedLine
struct FBatchedLine
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(None)
	struct FVector                               End;                                               // 0x18(0x18)(None)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(None)
	float                                        Thickness;                                         // 0x40(0x4)(None)
	float                                        RemainingLifeTime;                                 // 0x44(0x4)(None)
	uint8                                        DepthPriority;                                     // 0x48(0x1)(None)
	uint8                                        Pad_3BD7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.BatchedPoint
struct FBatchedPoint
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(None)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(None)
	float                                        PointSize;                                         // 0x28(0x4)(None)
	float                                        RemainingLifeTime;                                 // 0x2C(0x4)(None)
	uint8                                        DepthPriority;                                     // 0x30(0x1)(None)
	uint8                                        Pad_3BD8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LODMappingData
struct FLODMappingData
{
public:
	TArray<int32>                                Mapping;                                           // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                InverseMapping;                                    // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ComponentSync
struct FComponentSync
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	enum class ESyncOption                       SyncOption;                                        // 0x8(0x1)(None)
	uint8                                        Pad_3BD9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.MaterialSpriteElement
struct FMaterialSpriteElement
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor)
	class UCurveFloat*                           DistanceToOpacityCurve;                            // 0x8(0x8)(ZeroConstructor)
	uint8                                        bSizeIsInScreenSpace : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_360 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseSizeX;                                         // 0x14(0x4)(None)
	float                                        BaseSizeY;                                         // 0x18(0x4)(None)
	uint8                                        Pad_3BDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DistanceToSizeCurve;                               // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EngineShowFlagsSetting
struct FEngineShowFlagsSetting
{
public:
	class FString                                ShowFlagName;                                      // 0x0(0x10)(None)
	bool                                         Enabled;                                           // 0x10(0x1)(None)
	uint8                                        Pad_3BDC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// ScriptStruct Engine.IKLegInfo
struct FIKLegInfo
{
public:
	struct FRotator                              OldTipRotation;                                    // 0x0(0x18)(None)
	uint8                                        Pad_3BDD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 OldTipRotationQuat;                                // 0x20(0x20)(None)
	TArray<struct FVector>                       FabrikPositions;                                   // 0x40(0x10)(None)
	class FName                                  RootBoneName;                                      // 0x50(0x8)(None)
	class FName                                  IKBoneName;                                        // 0x58(0x8)(None)
	float                                        FeetOffset;                                        // 0x60(0x4)(None)
	uint8                                        Pad_3BDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              IKBoneRotationOffset;                              // 0x68(0x18)(None)
	struct FVector                               HitNormalWS;                                       // 0x80(0x18)(None)
	struct FVector                               HitLocationWS;                                     // 0x98(0x18)(None)
	struct FVector                               LastTargetHitNormalWS;                             // 0xB0(0x18)(None)
	struct FVector                               LastTargetHitLocationWS;                           // 0xC8(0x18)(None)
	struct FTransform                            EffectorTransformCS;                               // 0xE0(0x60)(None)
	float                                        IKAlpha;                                           // 0x140(0x4)(None)
	struct FBoneReference                        TipBone;                                           // 0x144(0x10)(None)
	struct FBoneReference                        RootBone;                                          // 0x154(0x10)(None)
	bool                                         bInit;                                             // 0x164(0x1)(None)
	bool                                         bHasGround;                                        // 0x165(0x1)(None)
	uint8                                        Pad_3BDF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Mute;                                              // 0x168(0x4)(None)
	float                                        TimeIKStarted;                                     // 0x16C(0x4)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Engine.IKGroundPlaneOverrideInfo
struct FIKGroundPlaneOverrideInfo
{
public:
	struct FVector                               RootLocationOffset;                                // 0x0(0x18)(None)
	uint8                                        bUseActorRootInstead : 1;                          // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_361 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocationWS;                                     // 0x20(0x18)(None)
	struct FVector                               HitLocationCS;                                     // 0x38(0x18)(None)
	struct FVector                               CachedHitLocationWS;                               // 0x50(0x18)(None)
	struct FVector                               CachedHitLocationCS;                               // 0x68(0x18)(None)
	struct FVector                               HitLocationTargetWS;                               // 0x80(0x18)(None)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Engine.IKCartGroundConformingInfo
struct FIKCartGroundConformingInfo
{
public:
	uint8                                        bIgnoreRot : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_362 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x4(0x8)(None)
	float                                        TraceDistance;                                     // 0xC(0x4)(None)
	float                                        TraceStartZOffset;                                 // 0x10(0x4)(None)
	float                                        EndZOffset;                                        // 0x14(0x4)(None)
	struct FRotator                              EndRotationOffset;                                 // 0x18(0x18)(None)
	float                                        InterpSpeedUp;                                     // 0x30(0x4)(None)
	float                                        InterpSpeedDown;                                   // 0x34(0x4)(None)
	float                                        InterpRotationSpeed;                               // 0x38(0x4)(None)
	float                                        TiltLimit;                                         // 0x3C(0x4)(None)
	struct FVector                               TargetHitLocationCS;                               // 0x40(0x18)(None)
	struct FVector                               CachedHitLocationCS;                               // 0x58(0x18)(None)
	struct FVector                               TargetHitNormal;                                   // 0x70(0x18)(None)
	struct FVector                               CachedHitNormal;                                   // 0x88(0x18)(None)
	struct FQuat                                 LastCalcRotation;                                  // 0xA0(0x20)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.IKRootAdjustmentInfo
struct FIKRootAdjustmentInfo
{
public:
	class FName                                  RootBoneName;                                      // 0x0(0x8)(None)
	struct FVector                               NonBoneRootLocationOffset;                         // 0x8(0x18)(None)
	float                                        TraceExtraZBuffer;                                 // 0x20(0x4)(None)
	float                                        TraceLength;                                       // 0x24(0x4)(None)
	uint8                                        bUseActorRootInsteadForNonBone : 1;                // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_363 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceTracedFromStartPoint;                      // 0x2C(0x4)(None)
	struct FVector                               CachedDistanceTraced;                              // 0x30(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.BoneModifier
struct FBoneModifier
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(None)
	uint8                                        Pad_3BE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x8(0x18)(None)
	struct FVector                               Translation;                                       // 0x20(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x38(0x18)(None)
	bool                                         Recursive;                                         // 0x50(0x1)(None)
	uint8                                        Pad_3BE4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.BoneModifierNamed
struct FBoneModifierNamed
{
public:
	class FName                                  TheBoneName;                                       // 0x0(0x8)(None)
	struct FBoneModifier                         TheBoneModifier;                                   // 0x8(0x58)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3BE5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3BE6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.TentDistribution
struct FTentDistribution
{
public:
	float                                        TipAltitude;                                       // 0x0(0x4)(None)
	float                                        TipValue;                                          // 0x4(0x4)(None)
	float                                        Width;                                             // 0x8(0x4)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.SplinePoint
struct FSplinePoint
{
public:
	float                                        InputKey;                                          // 0x0(0x4)(None)
	uint8                                        Pad_3BE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FVector                               ArriveTangent;                                     // 0x20(0x18)(None)
	struct FVector                               LeaveTangent;                                      // 0x38(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x50(0x18)(None)
	struct FVector                               Scale;                                             // 0x68(0x18)(None)
	enum class ESplinePointType                  Type;                                              // 0x80(0x1)(None)
	uint8                                        Pad_3BE8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x1A0 - 0xB8)
// ScriptStruct Engine.SplineInstanceData
struct FSplineInstanceData : public FSceneComponentInstanceData
{
public:
	bool                                         bSplineHasBeenEdited;                              // 0xB8(0x1)(None)
	uint8                                        Pad_3BE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSplineCurves                         SplineCurves;                                      // 0xC0(0x70)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSplineCurves                         SplineCurvesPreUCS;                                // 0x130(0x70)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.SplineMeshParams
struct FSplineMeshParams
{
public:
	struct FVector                               StartPos;                                          // 0x0(0x18)(None)
	struct FVector                               StartTangent;                                      // 0x18(0x18)(None)
	struct FVector2D                             StartScale;                                        // 0x30(0x10)(None)
	float                                        StartRoll;                                         // 0x40(0x4)(None)
	uint8                                        Pad_3BEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             StartOffset;                                       // 0x48(0x10)(None)
	struct FVector                               EndPos;                                            // 0x58(0x18)(None)
	struct FVector2D                             EndScale;                                          // 0x70(0x10)(None)
	struct FVector                               EndTangent;                                        // 0x80(0x18)(None)
	float                                        EndRoll;                                           // 0x98(0x4)(None)
	uint8                                        Pad_3BEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             EndOffset;                                         // 0xA0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.PaintedVertex
struct FPaintedVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(None)
	struct FColor                                Color;                                             // 0x18(0x4)(None)
	uint8                                        Pad_3BEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Normal;                                            // 0x20(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.StaticMeshVertexColorLODData
struct FStaticMeshVertexColorLODData
{
public:
	TArray<struct FPaintedVertex>                PaintedVertices;                                   // 0x0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        VertexBufferColors;                                // 0x10(0x10)(None)
	uint32                                       LODIndex;                                          // 0x20(0x4)(None)
	uint8                                        Pad_3BED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x168 - 0x130)
// ScriptStruct Engine.StaticMeshComponentInstanceData
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x130(0x8)(ZeroConstructor)
	TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs;                                   // 0x138(0x10)(BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         CachedStaticLighting;                              // 0x148(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStreamingTextureBuildInfo>    StreamingTextureData;                              // 0x158(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash)
};

// 0x68 (0x1D0 - 0x168)
// ScriptStruct Engine.SplineMeshInstanceData
struct FSplineMeshInstanceData : public FStaticMeshComponentInstanceData
{
public:
	struct FVector                               StartPos;                                          // 0x168(0x18)(None)
	struct FVector                               EndPos;                                            // 0x180(0x18)(None)
	struct FVector                               StartTangent;                                      // 0x198(0x18)(None)
	struct FVector                               EndTangent;                                        // 0x1B0(0x18)(None)
	uint8                                        Pad_3BEE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.ObjectCookedMetaDataStore
struct FObjectCookedMetaDataStore
{
public:
	TMap<class FName, class FString>             ObjectMetaData;                                    // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.FieldCookedMetaDataStore
struct FFieldCookedMetaDataStore
{
public:
	TMap<class FName, class FString>             FieldMetaData;                                     // 0x0(0x50)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.StructCookedMetaDataStore
struct FStructCookedMetaDataStore
{
public:
	struct FObjectCookedMetaDataStore            ObjectMetaData;                                    // 0x0(0x50)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FFieldCookedMetaDataStore> PropertiesMetaData;                                // 0x50(0x50)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CullDistanceSizePair
struct FCullDistanceSizePair
{
public:
	float                                        Size;                                              // 0x0(0x4)(None)
	float                                        CullDistance;                                      // 0x4(0x4)(None)
};

// 0x208 (0x208 - 0x0)
// ScriptStruct Engine.RuntimeCurveLinearColor
struct FRuntimeCurveLinearColor
{
public:
	struct FRichCurve                            ColorCurves[0x4];                                  // 0x0(0x200)(None)
	class UCurveLinearColor*                     ExternalCurve;                                     // 0x200(0x8)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.CurveAtlasColorAdjustments
struct FCurveAtlasColorAdjustments
{
public:
	uint8                                        bChromaKeyTexture : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_364 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdjustBrightness;                                  // 0x4(0x4)(None)
	float                                        AdjustBrightnessCurve;                             // 0x8(0x4)(None)
	float                                        AdjustVibrance;                                    // 0xC(0x4)(None)
	float                                        AdjustSaturation;                                  // 0x10(0x4)(None)
	float                                        AdjustRGBCurve;                                    // 0x14(0x4)(None)
	float                                        AdjustHue;                                         // 0x18(0x4)(None)
	float                                        AdjustMinAlpha;                                    // 0x1C(0x4)(None)
	float                                        AdjustMaxAlpha;                                    // 0x20(0x4)(None)
};

// 0x188 (0x188 - 0x0)
// ScriptStruct Engine.RuntimeVectorCurve
struct FRuntimeVectorCurve
{
public:
	struct FRichCurve                            VectorCurves[0x3];                                 // 0x0(0x180)(None)
	class UCurveVector*                          ExternalCurve;                                     // 0x180(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.IntegralKey
struct FIntegralKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	int32                                        Value;                                             // 0x4(0x4)(None)
};

// 0x18 (0x80 - 0x68)
// ScriptStruct Engine.IntegralCurve
struct FIntegralCurve : public FIndexedCurve
{
public:
	TArray<struct FIntegralKey>                  Keys;                                              // 0x68(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        DefaultValue;                                      // 0x78(0x4)(None)
	bool                                         bUseDefaultValueBeforeFirstKey;                    // 0x7C(0x1)(None)
	uint8                                        Pad_3BF0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.NameCurveKey
struct FNameCurveKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	class FName                                  Value;                                             // 0x4(0x8)(None)
};

// 0x10 (0x78 - 0x68)
// ScriptStruct Engine.NameCurve
struct FNameCurve : public FIndexedCurve
{
public:
	TArray<struct FNameCurveKey>                 Keys;                                              // 0x68(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SimpleCurveKey
struct FSimpleCurveKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	float                                        Value;                                             // 0x4(0x4)(None)
};

// 0x18 (0x88 - 0x70)
// ScriptStruct Engine.SimpleCurve
struct FSimpleCurve : public FRealCurve
{
public:
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x70(0x1)(None)
	uint8                                        Pad_3BF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSimpleCurveKey>               Keys;                                              // 0x78(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.StringCurveKey
struct FStringCurveKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(None)
	uint8                                        Pad_3BF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(None)
};

// 0x20 (0x88 - 0x68)
// ScriptStruct Engine.StringCurve
struct FStringCurve : public FIndexedCurve
{
public:
	class FString                                DefaultValue;                                      // 0x68(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStringCurveKey>               Keys;                                              // 0x78(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CurveTableRowHandle
struct FCurveTableRowHandle
{
public:
	class UCurveTable*                           CurveTable;                                        // 0x0(0x8)(None)
	class FName                                  RowName;                                           // 0x8(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.DataDrivenConsoleVariable
struct FDataDrivenConsoleVariable
{
public:
	enum class EFDataDrivenCVarType              Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_3BF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x18(0x10)(None)
	float                                        DefaultValueFloat;                                 // 0x28(0x4)(None)
	int32                                        DefaultValueInt;                                   // 0x2C(0x4)(None)
	bool                                         DefaultValueBool;                                  // 0x30(0x1)(None)
	uint8                                        Pad_3BF4[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DataTableRowHandle
struct FDataTableRowHandle
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(None)
	class FName                                  RowName;                                           // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.DataTableCategoryHandle
struct FDataTableCategoryHandle
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(None)
	class FName                                  ColumnName;                                        // 0x8(0x8)(None)
	class FName                                  RowContents;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
struct FDebugCameraControllerSettingsViewModeIndex
{
public:
	uint8                                        Pad_3BF5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EViewModeIndex                    ViewModeIndex;                                     // 0x8(0x1)(None)
	uint8                                        Pad_3BF6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Engine.RollbackNetStartupActorInfo
struct FRollbackNetStartupActorInfo
{
public:
	uint8                                        Pad_3BF7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Archetype;                                         // 0x8(0x8)(ZeroConstructor)
	uint8                                        Pad_3BF8[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       ObjReferences;                                     // 0xC0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MulticastRecordOptions
struct FMulticastRecordOptions
{
public:
	class FString                                FuncPathName;                                      // 0x0(0x10)(None)
	bool                                         bServerSkip;                                       // 0x10(0x1)(None)
	bool                                         bClientSkip;                                       // 0x11(0x1)(None)
	uint8                                        Pad_3BF9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SelectedFragmentProperties
struct FSelectedFragmentProperties
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	class FString                                Fragment;                                          // 0x8(0x10)(None)
	bool                                         bEnabled;                                          // 0x18(0x1)(None)
	uint8                                        Pad_3BFA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.DPMatchingIfCondition
struct FDPMatchingIfCondition
{
public:
	class FName                                  Operator;                                          // 0x0(0x8)(None)
	class FString                                Arg1;                                              // 0x8(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Arg2;                                              // 0x18(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.DPMatchingRulestructBase
struct FDPMatchingRulestructBase
{
public:
	uint8                                        Pad_3BFB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RuleName;                                          // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingIfCondition>        IfConditions;                                      // 0x18(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppendFragments;                                   // 0x28(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SetUserVar;                                        // 0x38(0x10)(None)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Engine.DPMatchingRulestructA
struct FDPMatchingRulestructA : public FDPMatchingRulestructBase
{
public:
	TArray<struct FDPMatchingRulestructBase>     OnTrue;                                            // 0x48(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingRulestructBase>     OnFalse;                                           // 0x58(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Engine.DPMatchingRulestructB
struct FDPMatchingRulestructB : public FDPMatchingRulestructBase
{
public:
	TArray<struct FDPMatchingRulestructA>        OnTrue;                                            // 0x48(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingRulestructA>        OnFalse;                                           // 0x58(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Engine.DPMatchingRulestructC
struct FDPMatchingRulestructC : public FDPMatchingRulestructBase
{
public:
	TArray<struct FDPMatchingRulestructB>        OnTrue;                                            // 0x48(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingRulestructB>        OnFalse;                                           // 0x58(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Engine.DPMatchingRulestructD
struct FDPMatchingRulestructD : public FDPMatchingRulestructBase
{
public:
	TArray<struct FDPMatchingRulestructC>        OnTrue;                                            // 0x48(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingRulestructC>        OnFalse;                                           // 0x58(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Engine.DPMatchingRulestructE
struct FDPMatchingRulestructE : public FDPMatchingRulestructBase
{
public:
	TArray<struct FDPMatchingRulestructD>        OnTrue;                                            // 0x48(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingRulestructD>        OnFalse;                                           // 0x58(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct Engine.DPMatchingRulestruct
struct FDPMatchingRulestruct : public FDPMatchingRulestructBase
{
public:
	TArray<struct FDPMatchingRulestructE>        OnTrue;                                            // 0x48(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDPMatchingRulestructE>        OnFalse;                                           // 0x58(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.DialogueContext
struct FDialogueContext
{
public:
	class UDialogueVoice*                        Speaker;                                           // 0x0(0x8)(ZeroConstructor)
	TArray<class UDialogueVoice*>                Targets;                                           // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DialogueWaveParameter
struct FDialogueWaveParameter
{
public:
	class UDialogueWave*                         DialogueWave;                                      // 0x0(0x8)(ZeroConstructor)
	struct FDialogueContext                      Context;                                           // 0x8(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.DialogueContextMapping
struct FDialogueContextMapping
{
public:
	struct FDialogueContext                      Context;                                           // 0x0(0x18)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            SoundWave;                                         // 0x18(0x8)(ZeroConstructor)
	class FString                                LocalizationKeyFormat;                             // 0x20(0x10)(None)
	class UDialogueSoundWaveProxy*               Proxy;                                             // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.GraphReference
struct FGraphReference
{
public:
	class UEdGraph*                              MacroGraph;                                        // 0x0(0x8)(ZeroConstructor)
	class UBlueprint*                            GraphBlueprint;                                    // 0x8(0x8)(None)
	struct FGuid                                 GraphGuid;                                         // 0x10(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AssetImportInfo
struct FAssetImportInfo
{
public:
	uint8                                        Pad_3BFC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.TypedElementPasteOptions
struct FTypedElementPasteOptions
{
public:
	class UTypedElementSelectionSet*             SelectionSetToModify;                              // 0x0(0x8)(None)
	bool                                         bPasteAtLocation;                                  // 0x8(0x1)(None)
	uint8                                        Pad_3BFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PasteLocation;                                     // 0x10(0x18)(None)
	uint8                                        Pad_3BFE[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Engine.TypedElementDeletionOptions
struct FTypedElementDeletionOptions
{
public:
	bool                                         bVerifyDeletionCanHappen;                          // 0x0(0x1)(None)
	bool                                         bWarnAboutReferences;                              // 0x1(0x1)(None)
	bool                                         bWarnAboutSoftReferences;                          // 0x2(0x1)(None)
};

// 0x110 (0x130 - 0x20)
// ScriptStruct Engine.PointDamageEvent
struct FPointDamageEvent : public FDamageEvent
{
public:
	float                                        Damage;                                            // 0x20(0x4)(None)
	uint8                                        Pad_3BFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantizeNormal             ShotDirection;                                     // 0x28(0x18)(None)
	struct FHitResult                            HitInfo;                                           // 0x40(0xF0)(ZeroConstructor)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.RadialDamageParams
struct FRadialDamageParams
{
public:
	float                                        BaseDamage;                                        // 0x0(0x4)(None)
	float                                        MinimumDamage;                                     // 0x4(0x4)(None)
	float                                        InnerRadius;                                       // 0x8(0x4)(None)
	float                                        OuterRadius;                                       // 0xC(0x4)(None)
	float                                        DamageFalloff;                                     // 0x10(0x4)(None)
};

// 0x40 (0x60 - 0x20)
// ScriptStruct Engine.RadialDamageEvent
struct FRadialDamageEvent : public FDamageEvent
{
public:
	struct FRadialDamageParams                   Params;                                            // 0x20(0x14)(None)
	uint8                                        Pad_3C01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x38(0x18)(None)
	TArray<struct FHitResult>                    ComponentHits;                                     // 0x50(0x10)(ZeroConstructor)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.HitResultNetSerializerConfig
struct FHitResultNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_3C02[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.RigidBodyState
struct FRigidBodyState
{
public:
	struct FVector_NetQuantize100                Position;                                          // 0x0(0x18)(None)
	uint8                                        Pad_3C03[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x20(0x20)(None)
	struct FVector_NetQuantize100                LinVel;                                            // 0x40(0x18)(None)
	struct FVector_NetQuantize100                AngVel;                                            // 0x58(0x18)(None)
	uint8                                        Flags;                                             // 0x70(0x1)(None)
	uint8                                        Pad_3C04[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.FontCharacter
struct FFontCharacter
{
public:
	int32                                        StartU;                                            // 0x0(0x4)(None)
	int32                                        StartV;                                            // 0x4(0x4)(None)
	int32                                        USize;                                             // 0x8(0x4)(None)
	int32                                        VSize;                                             // 0xC(0x4)(None)
	uint8                                        TextureIndex;                                      // 0x10(0x1)(None)
	uint8                                        Pad_3C05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VerticalOffset;                                    // 0x14(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CharacterNetworkSerializationPackedBitsNetSerializerConfig
struct FCharacterNetworkSerializationPackedBitsNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint32                                       MaxAllowedDataBits;                                // 0x0(0x4)(None)
	uint32                                       MaxAllowedObjectReferences;                        // 0x4(0x4)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.ForceFeedbackChannelDetails
struct FForceFeedbackChannelDetails
{
public:
	uint8                                        bAffectsLeftLarge : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bAffectsLeftSmall : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bAffectsRightLarge : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bAffectsRightSmall : 1;                            // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_365 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Curve;                                             // 0x8(0x88)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.ActiveForceFeedbackEffect
struct FActiveForceFeedbackEffect
{
public:
	class UForceFeedbackEffect*                  ForceFeedbackEffect;                               // 0x0(0x8)(None)
	uint8                                        Pad_3C07[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FInputDevicePropertyHandle>      ActiveDeviceProperties;                            // 0x28(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ForceFeedbackEffectOverridenChannelDetails
struct FForceFeedbackEffectOverridenChannelDetails
{
public:
	TArray<struct FForceFeedbackChannelDetails>  ChannelDetails;                                    // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.DeviceColorData
struct FDeviceColorData
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
	bool                                         bResetAfterCompletion;                             // 0x1(0x1)(None)
	uint8                                        Pad_3C08[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                LightColor;                                        // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DeviceColorCurveData
struct FDeviceColorCurveData
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
	bool                                         bResetAfterCompletion;                             // 0x1(0x1)(None)
	uint8                                        Pad_3C09[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     DeviceColorCurve;                                  // 0x8(0x8)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Engine.DeviceTriggerBaseData
struct FDeviceTriggerBaseData
{
public:
	enum class EInputDeviceTriggerMask           AffectedTriggers;                                  // 0x0(0x1)(None)
	bool                                         bResetUponCompletion;                              // 0x1(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DeviceTriggerFeedbackData
struct FDeviceTriggerFeedbackData
{
public:
	class UCurveFloat*                           FeedbackPositionCurve;                             // 0x0(0x8)(ZeroConstructor)
	class UCurveFloat*                           FeedbackStrenghCurve;                              // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DeviceTriggerTriggerResistanceData
struct FDeviceTriggerTriggerResistanceData
{
public:
	int32                                        StartPosition;                                     // 0x0(0x4)(None)
	int32                                        StartStrengh;                                      // 0x4(0x4)(None)
	int32                                        EndPosition;                                       // 0x8(0x4)(None)
	int32                                        EndStrengh;                                        // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.DeviceTriggerTriggerVibrationData
struct FDeviceTriggerTriggerVibrationData
{
public:
	class UCurveFloat*                           TriggerPositionCurve;                              // 0x0(0x8)(ZeroConstructor)
	class UCurveFloat*                           VibrationFrequencyCurve;                           // 0x8(0x8)(ZeroConstructor)
	class UCurveFloat*                           VibrationAmplitudeCurve;                           // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AudioBasedVibrationData
struct FAudioBasedVibrationData
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ActivateDevicePropertyParams
struct FActivateDevicePropertyParams
{
public:
	struct FPlatformUserId                       UserId;                                            // 0x0(0x4)(None)
	struct FInputDeviceId                        DeviceID;                                          // 0x4(0x4)(None)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIgnoreTimeDilation : 1;                           // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bPlayWhilePaused : 1;                              // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        Pad_3C0A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ActiveDeviceProperty
struct FActiveDeviceProperty
{
public:
	TWeakObjectPtr<class UInputDeviceProperty>   Property;                                          // 0x0(0x8)(None)
	uint8                                        Pad_3C0B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.RootMotionSourceStatus
struct FRootMotionSourceStatus
{
public:
	uint8                                        Flags;                                             // 0x0(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.RootMotionFinishVelocitySettings
struct FRootMotionFinishVelocitySettings
{
public:
	enum class ERootMotionFinishVelocityMode     Mode;                                              // 0x0(0x1)(None)
	uint8                                        Pad_3C0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocity;                                       // 0x8(0x18)(None)
	float                                        ClampVelocity;                                     // 0x20(0x4)(None)
	uint8                                        Pad_3C0D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Engine.RootMotionSource
struct FRootMotionSource
{
public:
	uint8                                        Pad_3C0E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       Priority;                                          // 0x10(0x2)(None)
	uint16                                       LocalID;                                           // 0x12(0x2)(None)
	enum class ERootMotionAccumulateMode         AccumulateMode;                                    // 0x14(0x1)(None)
	uint8                                        Pad_3C0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InstanceName;                                      // 0x18(0x8)(None)
	float                                        StartTime;                                         // 0x20(0x4)(None)
	float                                        CurrentTime;                                       // 0x24(0x4)(None)
	float                                        PreviousTime;                                      // 0x28(0x4)(None)
	float                                        Duration;                                          // 0x2C(0x4)(None)
	struct FRootMotionSourceStatus               Status;                                            // 0x30(0x1)(None)
	struct FRootMotionSourceSettings             Settings;                                          // 0x31(0x1)(None)
	bool                                         bInLocalSpace;                                     // 0x32(0x1)(None)
	uint8                                        Pad_3C10[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRootMotionMovementParams             RootMotionParams;                                  // 0x40(0x70)(None)
	struct FRootMotionFinishVelocitySettings     FinishVelocityParams;                              // 0xB0(0x28)(None)
};

// 0x28 (0x100 - 0xD8)
// ScriptStruct Engine.RootMotionSource_ConstantForce
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
public:
	struct FVector                               Force;                                             // 0xD8(0x18)(None)
	class UCurveFloat*                           StrengthOverTime;                                  // 0xF0(0x8)(None)
	uint8                                        Pad_3C11[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x140 - 0xD8)
// ScriptStruct Engine.RootMotionSource_RadialForce
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
public:
	struct FVector                               Location;                                          // 0xD8(0x18)(None)
	class AActor*                                LocationActor;                                     // 0xF0(0x8)(ZeroConstructor)
	float                                        Radius;                                            // 0xF8(0x4)(None)
	float                                        Strength;                                          // 0xFC(0x4)(None)
	bool                                         bIsPush;                                           // 0x100(0x1)(None)
	bool                                         bNoZForce;                                         // 0x101(0x1)(None)
	uint8                                        Pad_3C12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0x108(0x8)(ZeroConstructor)
	class UCurveFloat*                           StrengthOverTime;                                  // 0x110(0x8)(None)
	bool                                         bUseFixedWorldDirection;                           // 0x118(0x1)(None)
	uint8                                        Pad_3C13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FixedWorldDirection;                               // 0x120(0x18)(None)
	uint8                                        Pad_3C14[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x120 - 0xD8)
// ScriptStruct Engine.RootMotionSource_MoveToForce
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
public:
	struct FVector                               StartLocation;                                     // 0xD8(0x18)(None)
	struct FVector                               TargetLocation;                                    // 0xF0(0x18)(None)
	bool                                         bRestrictSpeedToExpected;                          // 0x108(0x1)(None)
	uint8                                        Pad_3C15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0x110(0x8)(None)
	uint8                                        Pad_3C16[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x140 - 0xD8)
// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
public:
	struct FVector                               StartLocation;                                     // 0xD8(0x18)(None)
	struct FVector                               InitialTargetLocation;                             // 0xF0(0x18)(None)
	struct FVector                               TargetLocation;                                    // 0x108(0x18)(None)
	bool                                         bRestrictSpeedToExpected;                          // 0x120(0x1)(None)
	uint8                                        Pad_3C17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0x128(0x8)(ZeroConstructor)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x130(0x8)(None)
	uint8                                        Pad_3C18[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x130 - 0xD8)
// ScriptStruct Engine.RootMotionSource_JumpForce
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
public:
	struct FRotator                              Rotation;                                          // 0xD8(0x18)(None)
	float                                        Distance;                                          // 0xF0(0x4)(None)
	float                                        Height;                                            // 0xF4(0x4)(None)
	bool                                         bDisableTimeout;                                   // 0xF8(0x1)(None)
	uint8                                        Pad_3C19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0x100(0x8)(ZeroConstructor)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x108(0x8)(None)
	uint8                                        Pad_3C1A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.TouchInputControl
struct FTouchInputControl
{
public:
	class UTexture2D*                            Image1;                                            // 0x0(0x8)(ZeroConstructor)
	class UTexture2D*                            Image2;                                            // 0x8(0x8)(None)
	struct FVector2D                             Center;                                            // 0x10(0x10)(None)
	struct FVector2D                             VisualSize;                                        // 0x20(0x10)(None)
	struct FVector2D                             ThumbSize;                                         // 0x30(0x10)(None)
	struct FVector2D                             InteractionSize;                                   // 0x40(0x10)(None)
	struct FVector2D                             InputScale;                                        // 0x50(0x10)(None)
	struct FKey                                  MainInputKey;                                      // 0x60(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  AltInputKey;                                       // 0x78(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.UniqueNetIdReplNetSerializerConfig
struct FUniqueNetIdReplNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_3C1B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.NetLevelVisibilityTransactionId
struct FNetLevelVisibilityTransactionId
{
public:
	uint32                                       Data;                                              // 0x0(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
struct FUpdateLevelVisibilityLevelInfo
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(None)
	class FName                                  Filename;                                          // 0x8(0x8)(None)
	struct FNetLevelVisibilityTransactionId      VisibilityRequestId;                               // 0x10(0x4)(None)
	uint8                                        bIsVisible : 1;                                    // Mask: 0x1, PropSize: 0x10x14(0x1)(None)
	uint8                                        bTryMakeVisible : 1;                               // Mask: 0x2, PropSize: 0x10x14(0x1)(None)
	uint8                                        bSkipCloseOnError : 1;                             // Mask: 0x4, PropSize: 0x10x14(0x1)(None)
	uint8                                        Pad_3C1C[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.HLODISMComponentDesc
struct FHLODISMComponentDesc
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
	TArray<struct FTransform>                    Instances;                                         // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FCustomPrimitiveData>          InstancesCustomPrimitiveData;                      // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.HLODProxyMesh
struct FHLODProxyMesh
{
public:
	TLazyObjectPtr<class ALODActor>              LODActor;                                          // 0x0(0x1C)(ZeroConstructor)
	uint8                                        Pad_3C1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x20(0x8)(None)
	class FName                                  Key;                                               // 0x28(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ComponentKey
struct FComponentKey
{
public:
	class UClass*                                OwnerClass;                                        // 0x0(0x8)(None)
	class FName                                  SCSVariableName;                                   // 0x8(0x8)(None)
	struct FGuid                                 AssociatedGuid;                                    // 0x10(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.ComponentOverrideRecord
struct FComponentOverrideRecord
{
public:
	class UClass*                                ComponentClass;                                    // 0x0(0x8)(ZeroConstructor)
	class UActorComponent*                       ComponentTemplate;                                 // 0x8(0x8)(ZeroConstructor)
	struct FComponentKey                         ComponentKey;                                      // 0x10(0x20)(ZeroConstructor)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData;                     // 0x30(0x48)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.BlueprintInputDelegateBinding
struct FBlueprintInputDelegateBinding
{
public:
	uint8                                        bConsumeInput : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bExecuteWhenPaused : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOverrideParentBinding : 1;                        // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_3C1E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x18 - 0x4)
// ScriptStruct Engine.BlueprintInputActionDelegateBinding
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	class FName                                  InputActionName;                                   // 0x4(0x8)(None)
	enum class EInputEvent                       InputKeyEvent;                                     // 0xC(0x1)(None)
	uint8                                        Pad_3C1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x10(0x8)(None)
};

// 0x10 (0x14 - 0x4)
// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	class FName                                  InputAxisName;                                     // 0x4(0x8)(None)
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(None)
};

// 0x24 (0x28 - 0x4)
// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	uint8                                        Pad_3C20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  AxisKey;                                           // 0x8(0x18)(None)
	class FName                                  FunctionNameToBind;                                // 0x20(0x8)(None)
};

// 0x34 (0x38 - 0x4)
// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	uint8                                        Pad_3C21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           InputChord;                                        // 0x8(0x20)(None)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x28(0x1)(None)
	uint8                                        Pad_3C22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x2C(0x8)(None)
	uint8                                        Pad_3C23[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x10 - 0x4)
// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	enum class EInputEvent                       InputKeyEvent;                                     // 0x4(0x1)(None)
	uint8                                        Pad_3C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x8(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.CurveEdEntry
struct FCurveEdEntry
{
public:
	class UObject*                               CurveObject;                                       // 0x0(0x8)(None)
	struct FColor                                CurveColor;                                        // 0x8(0x4)(None)
	uint8                                        Pad_3C25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurveName;                                         // 0x10(0x10)(None)
	int32                                        bHideCurve;                                        // 0x20(0x4)(None)
	int32                                        bColorCurve;                                       // 0x24(0x4)(None)
	int32                                        bFloatingPointColorCurve;                          // 0x28(0x4)(None)
	int32                                        bClamp;                                            // 0x2C(0x4)(None)
	float                                        ClampLow;                                          // 0x30(0x4)(None)
	float                                        ClampHigh;                                         // 0x34(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.CurveEdTab
struct FCurveEdTab
{
public:
	class FString                                TabName;                                           // 0x0(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FCurveEdEntry>                 Curves;                                            // 0x10(0x10)(None)
	float                                        ViewStartInput;                                    // 0x20(0x4)(None)
	float                                        ViewEndInput;                                      // 0x24(0x4)(None)
	float                                        ViewStartOutput;                                   // 0x28(0x4)(None)
	float                                        ViewEndOutput;                                     // 0x2C(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ISMComponentInstance
struct FISMComponentInstance
{
public:
	int32                                        ClientIndex;                                       // 0x0(0x4)(None)
	int32                                        InstanceIndex;                                     // 0x4(0x4)(None)
	int32                                        InstanceSubIndex;                                  // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ISMClientInstance
struct FISMClientInstance
{
public:
	TArray<int32>                                ComponentIndices;                                  // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ISMClientData
struct FISMClientData
{
public:
	TArray<struct FISMClientInstance>            Instances;                                         // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.ISMComponentData
struct FISMComponentData
{
public:
	uint8                                        Pad_3C26[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x1A8 - 0x180)
// ScriptStruct Engine.ISMComponentDescriptor
struct FISMComponentDescriptor : public FISMComponentDescriptorBase
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x180(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x188(0x10)(ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x198(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.SlateModifierKeysState
struct FSlateModifierKeysState
{
public:
	uint8                                        ModifierKeysStateMask;                             // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.DrawToRenderTargetContext
struct FDrawToRenderTargetContext
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.DispatchComputeMaterialContext
struct FDispatchComputeMaterialContext
{
public:
	uint8                                        Pad_3C27[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDispatchComputeRenderSlot        FrameRenderSlot;                                   // 0x8(0x1)(None)
	uint8                                        Pad_3C28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget*                  RenderTarget;                                      // 0x10(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Material;                                          // 0x18(0x8)(None)
	uint8                                        Pad_3C29[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.ImportanceTexture
struct FImportanceTexture
{
public:
	struct FIntPoint                             Size;                                              // 0x0(0x8)(None)
	int32                                        NumMips;                                           // 0x8(0x4)(None)
	uint8                                        Pad_3C2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                MarginalCDF;                                       // 0x10(0x10)(AutoWeak, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                ConditionalCDF;                                    // 0x20(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        TextureData;                                       // 0x30(0x10)(None)
	TWeakObjectPtr<class UTexture2D>             Texture;                                           // 0x40(0x8)(None)
	enum class EImportanceWeight                 Weighting;                                         // 0x48(0x1)(None)
	uint8                                        Pad_3C2B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.LatentActionManager
struct FLatentActionManager
{
public:
	uint8                                        Pad_3C2C[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LayerActorStats
struct FLayerActorStats
{
public:
	class UClass*                                Type;                                              // 0x0(0x8)(None)
	int32                                        Total;                                             // 0x8(0x4)(None)
	uint8                                        Pad_3C2D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.ActorFolderSet
struct FActorFolderSet
{
public:
	TSet<class UActorFolder*>                    ActorFolders;                                      // 0x0(0x50)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.StreamableTextureInstance
struct FStreamableTextureInstance
{
public:
	uint8                                        Pad_3C2E[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x58 - 0x48)
// ScriptStruct Engine.DynamicTextureInstance
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
public:
	class UTexture2D*                            Texture;                                           // 0x48(0x8)(None)
	bool                                         bAttached;                                         // 0x50(0x1)(None)
	uint8                                        Pad_3C2F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OriginalRadius;                                    // 0x54(0x4)(None)
};

// 0x158 (0x158 - 0x0)
// ScriptStruct Engine.LevelSimplificationDetails
struct FLevelSimplificationDetails
{
public:
	bool                                         bCreatePackagePerAsset;                            // 0x0(0x1)(None)
	uint8                                        Pad_3C30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DetailsPercentage;                                 // 0x4(0x4)(None)
	struct FMaterialProxySettings                StaticMeshMaterialSettings;                        // 0x8(0xA0)(None)
	bool                                         bOverrideLandscapeExportLOD;                       // 0xA8(0x1)(None)
	uint8                                        Pad_3C31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LandscapeExportLOD;                                // 0xAC(0x4)(None)
	struct FMaterialProxySettings                LandscapeMaterialSettings;                         // 0xB0(0xA0)(None)
	bool                                         bBakeFoliageToLandscape;                           // 0x150(0x1)(None)
	bool                                         bBakeGrassToLandscape;                             // 0x151(0x1)(None)
	uint8                                        Pad_3C32[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
struct FReplicatedStaticActorDestructionInfo
{
public:
	uint8                                        Pad_3C33[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ObjClass;                                          // 0x38(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.ClientReceiveData
struct FClientReceiveData
{
public:
	class APlayerController*                     LocalPC;                                           // 0x0(0x8)(ZeroConstructor)
	class FName                                  MessageType;                                       // 0x8(0x8)(None)
	int32                                        MessageIndex;                                      // 0x10(0x4)(None)
	uint8                                        Pad_3C34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MessageString;                                     // 0x18(0x10)(None)
	class APlayerState*                          RelatedPlayerState_1;                              // 0x28(0x8)(ZeroConstructor)
	class APlayerState*                          RelatedPlayerState_2;                              // 0x30(0x8)(ZeroConstructor)
	class UObject*                               OptionalObject;                                    // 0x38(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.HLODInstancingKey
struct FHLODInstancingKey
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ParameterGroupData
struct FParameterGroupData
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(None)
	int32                                        GroupSortPriority;                                 // 0x10(0x4)(None)
	uint8                                        Pad_3C35[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MaterialFunctionInfo
struct FMaterialFunctionInfo
{
public:
	struct FGuid                                 StateId;                                           // 0x0(0x10)(None)
	class UMaterialFunctionInterface*            Function;                                          // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MaterialParameterCollectionInfo
struct FMaterialParameterCollectionInfo
{
public:
	struct FGuid                                 StateId;                                           // 0x0(0x10)(None)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x10(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.MaterialCachedParameterEditorInfo
struct FMaterialCachedParameterEditorInfo
{
public:
	class FString                                Description;                                       // 0x0(0x10)(None)
	class FName                                  Group;                                             // 0x10(0x8)(None)
	int32                                        SortPriority;                                      // 0x18(0x4)(None)
	int32                                        AssetIndex;                                        // 0x1C(0x4)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x20(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.MaterialCachedParameterEntry
struct FMaterialCachedParameterEntry
{
public:
	TSet<struct FMaterialParameterInfo>          ParameterInfoSet;                                  // 0x0(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MaterialCachedParameterEditorEntry
struct FMaterialCachedParameterEditorEntry
{
public:
	TArray<struct FMaterialCachedParameterEditorInfo> EditorInfo;                                        // 0x0(0x10)(None)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Engine.MaterialCachedExpressionEditorOnlyData
struct FMaterialCachedExpressionEditorOnlyData
{
public:
	struct FMaterialCachedParameterEntry         EditorOnlyEntries;                                 // 0x0(0x50)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialCachedParameterEditorEntry   EditorEntries[0x9];                                // 0x50(0x90)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<bool>                                 StaticSwitchValues;                                // 0xE0(0x10)(BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStaticComponentMaskValue>     StaticComponentMaskValues;                         // 0xF0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     ScalarMinMaxValues;                                // 0x100(0x10)(Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCurveLinearColor>> ScalarCurveValues;                                 // 0x110(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCurveLinearColorAtlas>> ScalarCurveAtlasValues;                            // 0x120(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FParameterChannelNames>        VectorChannelNameValues;                           // 0x130(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<bool>                                 VectorUsedAsChannelMaskValues;                     // 0x140(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FParameterChannelNames>        TextureChannelNameValues;                          // 0x150(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialLayersFunctionsEditorOnlyData MaterialLayers;                                    // 0x160(0x70)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        AssetPaths;                                        // 0x1D0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          LandscapeLayerNames;                               // 0x1E0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MaterialGPUMessageInfo
struct FMaterialGPUMessageInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	uint32                                       NumFloats;                                         // 0x8(0x4)(None)
	uint32                                       Flags;                                             // 0xC(0x4)(None)
};

// 0x3F0 (0x3F0 - 0x0)
// ScriptStruct Engine.MaterialCachedExpressionData
struct FMaterialCachedExpressionData
{
public:
	struct FMaterialCachedParameterEntry         RuntimeEntries[0x8];                               // 0x0(0x280)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                ScalarPrimitiveDataIndexValues;                    // 0x280(0x10)(AutoWeak, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                VectorPrimitiveDataIndexValues;                    // 0x290(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<float>                                ScalarValues;                                      // 0x2A0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<bool>                                 StaticSwitchValues;                                // 0x2B0(0x10)(SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<bool>                                 DynamicSwitchValues;                               // 0x2C0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  VectorValues;                                      // 0x2D0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FVector4d>                     DoubleVectorValues;                                // 0x2E0(0x10)(Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture>>       TextureValues;                                     // 0x2F0(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFont>>          FontValues;                                        // 0x300(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                FontPageValues;                                    // 0x310(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class URuntimeVirtualTexture>> RuntimeVirtualTextureValues;                       // 0x320(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USparseVolumeTexture>> SparseVolumeTextureValues;                         // 0x330(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReferencedTextures;                                // 0x340(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FMaterialFunctionInfo>         FunctionInfos;                                     // 0x350(0x10)(ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos;                          // 0x360(0x10)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class ULandscapeGrassType*>           GrassTypes;                                        // 0x370(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FMaterialGPUMessageInfo>       GPUMessageInfo;                                    // 0x380(0x10)(AdvancedDisplay, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialLayersFunctionsRuntimeData   MaterialLayers;                                    // 0x390(0x20)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          DynamicParameterNames;                             // 0x3B0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<bool>                                 QualityLevelsUsed;                                 // 0x3C0(0x10)(None)
	uint8                                        bHasMaterialLayers : 1;                            // Mask: 0x1, PropSize: 0x10x3D0(0x1)(None)
	uint8                                        bHasRuntimeVirtualTextureOutput : 1;               // Mask: 0x2, PropSize: 0x10x3D0(0x1)(None)
	uint8                                        bHasSceneColor : 1;                                // Mask: 0x4, PropSize: 0x10x3D0(0x1)(None)
	uint8                                        bHasPerInstanceCustomData : 1;                     // Mask: 0x8, PropSize: 0x10x3D0(0x1)(None)
	uint8                                        bHasPerInstanceRandom : 1;                         // Mask: 0x10, PropSize: 0x10x3D0(0x1)(None)
	uint8                                        bHasVertexInterpolator : 1;                        // Mask: 0x20, PropSize: 0x10x3D0(0x1)(None)
	uint8                                        BitPad_366 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       NumDynamicCustomDataOutputFloatsPerRow;            // 0x3D4(0x2)(None)
	uint8                                        Pad_3C37[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomDataRowCount                   DynamicCustomDataOutputRowCount;                   // 0x3D8(0xC)(None)
	uint8                                        Pad_3C38[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       PropertyConnectedBitmask;                          // 0x3E8(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.MaterialInstanceUsedWithOverride
struct FMaterialInstanceUsedWithOverride
{
public:
	uint8                                        bUsedWithSkeletalMesh : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithLandscape : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithParticleSprites : 1;                      // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithBeamTrails : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithMeshParticles : 1;                        // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithInstancedStaticMeshes : 1;                // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithGroundClutter : 1;                        // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUsedWithStaticMesh : 1;                           // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_3C39[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.ScalarParameterAtlasInstanceData
struct FScalarParameterAtlasInstanceData
{
public:
	bool                                         bIsUsedAsAtlasPosition;                            // 0x0(0x1)(None)
	uint8                                        Pad_3C3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCurveLinearColor>      Curve;                                             // 0x8(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveLinearColorAtlas> Atlas;                                             // 0x38(0x30)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.ScalarParameterValue
struct FScalarParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	float                                        ParameterValue;                                    // 0x10(0x4)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x14(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.VectorParameterValue
struct FVectorParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	struct FLinearColor                          ParameterValue;                                    // 0x10(0x10)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x20(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.DoubleVectorParameterValue
struct FDoubleVectorParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	struct FVector4d                             ParameterValue;                                    // 0x10(0x20)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.TextureParameterValue
struct FTextureParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	class UTexture*                              ParameterValue;                                    // 0x10(0x8)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
struct FRuntimeVirtualTextureParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	class URuntimeVirtualTexture*                ParameterValue;                                    // 0x10(0x8)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SparseVolumeTextureParameterValue
struct FSparseVolumeTextureParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	class USparseVolumeTexture*                  ParameterValue;                                    // 0x10(0x8)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x18(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.FontParameterValue
struct FFontParameterValue
{
public:
	struct FMaterialParameterInfo                ParameterInfo;                                     // 0x0(0x10)(None)
	class UFont*                                 FontValue;                                         // 0x10(0x8)(None)
	int32                                        FontPage;                                          // 0x18(0x4)(None)
	struct FGuid                                 ExpressionGUID;                                    // 0x1C(0x10)(None)
	uint8                                        Pad_3C3C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MaterialInstanceCachedData
struct FMaterialInstanceCachedData
{
public:
	TArray<int32>                                ParentLayerIndexRemap;                             // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.MaterialOverrideNanite
struct FMaterialOverrideNanite
{
public:
	TSoftObjectPtr<class UMaterialInterface>     OverrideMaterialRef;                               // 0x0(0x30)(ZeroConstructor)
	bool                                         bEnableOverride;                                   // 0x30(0x1)(None)
	uint8                                        Pad_3C3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x38(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CollectionParameterBase
struct FCollectionParameterBase
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FGuid                                 ID;                                                // 0x8(0x10)(None)
};

// 0x4 (0x1C - 0x18)
// ScriptStruct Engine.CollectionScalarParameter
struct FCollectionScalarParameter : public FCollectionParameterBase
{
public:
	float                                        DefaultValue;                                      // 0x18(0x4)(None)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Engine.CollectionVectorParameter
struct FCollectionVectorParameter : public FCollectionParameterBase
{
public:
	struct FLinearColor                          DefaultValue;                                      // 0x18(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.MemberReference
struct FMemberReference
{
public:
	class UObject*                               MemberParent;                                      // 0x0(0x8)(None)
	class FString                                MemberScope;                                       // 0x8(0x10)(None)
	class FName                                  MemberName;                                        // 0x18(0x8)(None)
	struct FGuid                                 MemberGuid;                                        // 0x20(0x10)(None)
	bool                                         bSelfContext;                                      // 0x30(0x1)(None)
	bool                                         bWasDeprecated;                                    // 0x31(0x1)(None)
	uint8                                        Pad_3C3E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Engine.MeshReductionSettings
struct FMeshReductionSettings
{
public:
	float                                        PercentTriangles;                                  // 0x0(0x4)(None)
	uint32                                       MaxNumOfTriangles;                                 // 0x4(0x4)(None)
	float                                        PercentVertices;                                   // 0x8(0x4)(None)
	uint32                                       MaxNumOfVerts;                                     // 0xC(0x4)(None)
	float                                        MaxDeviation;                                      // 0x10(0x4)(None)
	float                                        PixelError;                                        // 0x14(0x4)(None)
	float                                        WeldingThreshold;                                  // 0x18(0x4)(None)
	float                                        HardAngleThreshold;                                // 0x1C(0x4)(None)
	int32                                        BaseLODModel;                                      // 0x20(0x4)(None)
	enum class EMeshFeatureImportance            SilhouetteImportance;                              // 0x24(0x1)(None)
	enum class EMeshFeatureImportance            TextureImportance;                                 // 0x25(0x1)(None)
	enum class EMeshFeatureImportance            ShadingImportance;                                 // 0x26(0x1)(None)
	uint8                                        bRecalculateNormals : 1;                           // Mask: 0x1, PropSize: 0x10x27(0x1)(None)
	uint8                                        bGenerateUniqueLightmapUVs : 1;                    // Mask: 0x2, PropSize: 0x10x27(0x1)(None)
	uint8                                        bKeepSymmetry : 1;                                 // Mask: 0x4, PropSize: 0x10x27(0x1)(None)
	uint8                                        bVisibilityAided : 1;                              // Mask: 0x8, PropSize: 0x10x27(0x1)(None)
	uint8                                        bCullOccluded : 1;                                 // Mask: 0x10, PropSize: 0x10x27(0x1)(None)
	uint8                                        BitPad_367 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion;                              // 0x28(0x1)(None)
	enum class EMeshFeatureImportance            VisibilityAggressiveness;                          // 0x29(0x1)(None)
	enum class EMeshFeatureImportance            VertexColorImportance;                             // 0x2A(0x1)(None)
	uint8                                        Pad_3C3F[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MeshInstancingSettings
struct FMeshInstancingSettings
{
public:
	class UClass*                                ActorClassToUse;                                   // 0x0(0x8)(ZeroConstructor)
	int32                                        InstanceReplacementThreshold;                      // 0x8(0x4)(None)
	bool                                         bSkipMeshesWithVertexColors;                       // 0xC(0x1)(None)
	bool                                         bUseHLODVolumes;                                   // 0xD(0x1)(None)
	uint8                                        Pad_3C40[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ISMComponentToUse;                                 // 0x10(0x8)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Engine.PacketSimulationSettings
struct FPacketSimulationSettings
{
public:
	int32                                        PktLoss;                                           // 0x0(0x4)(None)
	int32                                        PktLossMaxSize;                                    // 0x4(0x4)(None)
	int32                                        PktLossMinSize;                                    // 0x8(0x4)(None)
	int32                                        PktOrder;                                          // 0xC(0x4)(None)
	int32                                        PktDup;                                            // 0x10(0x4)(None)
	int32                                        PktLag;                                            // 0x14(0x4)(None)
	int32                                        PktLagVariance;                                    // 0x18(0x4)(None)
	int32                                        PktLagMin;                                         // 0x1C(0x4)(None)
	int32                                        PktLagMax;                                         // 0x20(0x4)(None)
	int32                                        PktIncomingLagMin;                                 // 0x24(0x4)(None)
	int32                                        PktIncomingLagMax;                                 // 0x28(0x4)(None)
	int32                                        PktIncomingLoss;                                   // 0x2C(0x4)(None)
	int32                                        PktJitter;                                         // 0x30(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ChannelDefinition
struct FChannelDefinition
{
public:
	class FName                                  ChannelName;                                       // 0x0(0x8)(None)
	class FName                                  ClassName;                                         // 0x8(0x8)(None)
	class UClass*                                ChannelClass;                                      // 0x10(0x8)(None)
	int32                                        StaticChannelIndex;                                // 0x18(0x4)(None)
	uint8                                        bTickOnCreate : 1;                                 // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bServerOpen : 1;                                   // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bClientOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bInitialServer : 1;                                // Mask: 0x8, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bInitialClient : 1;                                // Mask: 0x10, PropSize: 0x10x1C(0x1)(None)
	uint8                                        Pad_3C41[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.NetworkEmulationProfileDescription
struct FNetworkEmulationProfileDescription
{
public:
	class FString                                ProfileName;                                       // 0x0(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BandwidthTestItem
struct FBandwidthTestItem
{
public:
	TArray<uint8>                                Kilobyte;                                          // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BandwidthTestGenerator
struct FBandwidthTestGenerator
{
public:
	TArray<struct FBandwidthTestItem>            ReplicatedBuffers;                                 // 0x0(0x10)(None)
	uint8                                        Pad_3C42[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.RPCDoSState
struct FRPCDoSState
{
public:
	uint8                                        Pad_3C43[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLogEscalate;                                      // 0x8(0x1)(None)
	bool                                         bSendEscalateAnalytics;                            // 0x9(0x1)(None)
	bool                                         bKickPlayer;                                       // 0xA(0x1)(None)
	bool                                         bTrackRecentRPCs;                                  // 0xB(0x1)(None)
	int16                                        EscalateQuotaRPCsPerFrame;                         // 0xC(0x2)(None)
	int16                                        EscalateTimeQuotaMSPerFrame;                       // 0xE(0x2)(None)
	int16                                        EscalateQuotaRPCsPerPeriod;                        // 0x10(0x2)(None)
	int16                                        EscalateTimeQuotaMSPerPeriod;                      // 0x12(0x2)(None)
	int8                                         EscalateQuotaTimePeriod;                           // 0x14(0x1)(None)
	int8                                         EscalationCountTolerance;                          // 0x15(0x1)(None)
	int16                                        EscalationTimeToleranceMS;                         // 0x16(0x2)(None)
	int16                                        RPCRepeatLimitPerPeriod;                           // 0x18(0x2)(None)
	int16                                        RPCRepeatLimitMSPerPeriod;                         // 0x1A(0x2)(None)
	int8                                         RPCRepeatLimitTimePeriod;                          // 0x1C(0x1)(None)
	uint8                                        Pad_3C44[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        CooloffTime;                                       // 0x1E(0x2)(None)
	int16                                        AutoEscalateTime;                                  // 0x20(0x2)(None)
	uint8                                        Pad_3C45[0x26];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x78 - 0x48)
// ScriptStruct Engine.RPCDoSStateConfig
struct FRPCDoSStateConfig : public FRPCDoSState
{
public:
	uint8                                        Pad_3C46[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.RPCAnalyticsThreshold
struct FRPCAnalyticsThreshold
{
public:
	class FName                                  RPC;                                               // 0x0(0x8)(None)
	int32                                        CountPerSec;                                       // 0x8(0x4)(None)
	uint8                                        Pad_3C47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimePerSec;                                        // 0x10(0x8)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3C48[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PSCPoolElem
struct FPSCPoolElem
{
public:
	class UParticleSystemComponent*              Psc;                                               // 0x0(0x8)(None)
	uint8                                        Pad_3C49[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PSCPool
struct FPSCPool
{
public:
	TArray<struct FPSCPoolElem>                  FreeElements;                                      // 0x0(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.WorldPSCPool
struct FWorldPSCPool
{
public:
	TMap<class UParticleSystem*, struct FPSCPool> WorldParticleSystemPools;                          // 0x0(0x50)(None)
	uint8                                        Pad_3C4A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.FreezablePerPlatformInt
struct FFreezablePerPlatformInt
{
public:
	uint8                                        Pad_3C4B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PerPlatformFrameRate
struct FPerPlatformFrameRate
{
public:
	struct FFrameRate                            Default;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ConstraintDrive
struct FConstraintDrive
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(None)
	float                                        Damping;                                           // 0x4(0x4)(None)
	float                                        MaxForce;                                          // 0x8(0x4)(None)
	uint8                                        bEnablePositionDrive : 1;                          // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        bEnableVelocityDrive : 1;                          // Mask: 0x2, PropSize: 0x10xC(0x1)(None)
	uint8                                        Pad_3C4C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.LinearDriveConstraint
struct FLinearDriveConstraint
{
public:
	struct FVector                               PositionTarget;                                    // 0x0(0x18)(None)
	struct FVector                               VelocityTarget;                                    // 0x18(0x18)(None)
	struct FConstraintDrive                      XDrive;                                            // 0x30(0x10)(None)
	struct FConstraintDrive                      YDrive;                                            // 0x40(0x10)(None)
	struct FConstraintDrive                      ZDrive;                                            // 0x50(0x10)(None)
	uint8                                        bEnablePositionDrive : 1;                          // Mask: 0x1, PropSize: 0x10x60(0x1)(None)
	uint8                                        Pad_3C4D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.AngularDriveConstraint
struct FAngularDriveConstraint
{
public:
	struct FConstraintDrive                      TwistDrive;                                        // 0x0(0x10)(None)
	struct FConstraintDrive                      SwingDrive;                                        // 0x10(0x10)(None)
	struct FConstraintDrive                      SlerpDrive;                                        // 0x20(0x10)(None)
	struct FRotator                              OrientationTarget;                                 // 0x30(0x18)(None)
	struct FVector                               AngularVelocityTarget;                             // 0x48(0x18)(None)
	enum class EAngularDriveMode                 AngularDriveMode;                                  // 0x60(0x1)(None)
	uint8                                        Pad_3C4E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.ConstraintBaseParams
struct FConstraintBaseParams
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(None)
	float                                        Damping;                                           // 0x4(0x4)(None)
	float                                        Restitution;                                       // 0x8(0x4)(None)
	float                                        ContactDistance;                                   // 0xC(0x4)(None)
	uint8                                        bSoftConstraint : 1;                               // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        Pad_3C4F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x1C - 0x14)
// ScriptStruct Engine.LinearConstraint
struct FLinearConstraint : public FConstraintBaseParams
{
public:
	float                                        Limit;                                             // 0x14(0x4)(None)
	enum class ELinearConstraintMotion           XMotion;                                           // 0x18(0x1)(None)
	enum class ELinearConstraintMotion           YMotion;                                           // 0x19(0x1)(None)
	enum class ELinearConstraintMotion           ZMotion;                                           // 0x1A(0x1)(None)
	uint8                                        Pad_3C50[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x20 - 0x14)
// ScriptStruct Engine.ConeConstraint
struct FConeConstraint : public FConstraintBaseParams
{
public:
	float                                        Swing1LimitDegrees;                                // 0x14(0x4)(None)
	float                                        Swing2LimitDegrees;                                // 0x18(0x4)(None)
	enum class EAngularConstraintMotion          Swing1Motion;                                      // 0x1C(0x1)(None)
	enum class EAngularConstraintMotion          Swing2Motion;                                      // 0x1D(0x1)(None)
	uint8                                        Pad_3C51[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x1C - 0x14)
// ScriptStruct Engine.TwistConstraint
struct FTwistConstraint : public FConstraintBaseParams
{
public:
	float                                        TwistLimitDegrees;                                 // 0x14(0x4)(None)
	enum class EAngularConstraintMotion          TwistMotion;                                       // 0x18(0x1)(None)
	uint8                                        Pad_3C52[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct Engine.ConstraintProfileProperties
struct FConstraintProfileProperties
{
public:
	float                                        ProjectionLinearTolerance;                         // 0x0(0x4)(None)
	float                                        ProjectionAngularTolerance;                        // 0x4(0x4)(None)
	float                                        ProjectionLinearAlpha;                             // 0x8(0x4)(None)
	float                                        ProjectionAngularAlpha;                            // 0xC(0x4)(None)
	float                                        ShockPropagationAlpha;                             // 0x10(0x4)(None)
	float                                        LinearBreakThreshold;                              // 0x14(0x4)(None)
	float                                        LinearPlasticityThreshold;                         // 0x18(0x4)(None)
	float                                        AngularBreakThreshold;                             // 0x1C(0x4)(None)
	float                                        AngularPlasticityThreshold;                        // 0x20(0x4)(None)
	float                                        ContactTransferScale;                              // 0x24(0x4)(None)
	struct FLinearConstraint                     LinearLimit;                                       // 0x28(0x1C)(None)
	struct FConeConstraint                       ConeLimit;                                         // 0x44(0x20)(None)
	struct FTwistConstraint                      TwistLimit;                                        // 0x64(0x1C)(None)
	uint8                                        bDisableCollision : 1;                             // Mask: 0x1, PropSize: 0x10x80(0x1)(None)
	uint8                                        bParentDominates : 1;                              // Mask: 0x2, PropSize: 0x10x80(0x1)(None)
	uint8                                        bEnableShockPropagation : 1;                       // Mask: 0x4, PropSize: 0x10x80(0x1)(None)
	uint8                                        bEnableProjection : 1;                             // Mask: 0x8, PropSize: 0x10x80(0x1)(None)
	uint8                                        bEnableMassConditioning : 1;                       // Mask: 0x10, PropSize: 0x10x80(0x1)(None)
	uint8                                        bAngularBreakable : 1;                             // Mask: 0x20, PropSize: 0x10x80(0x1)(None)
	uint8                                        bAngularPlasticity : 1;                            // Mask: 0x40, PropSize: 0x10x80(0x1)(None)
	uint8                                        bLinearBreakable : 1;                              // Mask: 0x80, PropSize: 0x10x80(0x1)(None)
	uint8                                        bLinearPlasticity : 1;                             // Mask: 0x1, PropSize: 0x10x81(0x1)(None)
	uint8                                        BitPad_368 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C53[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearDriveConstraint                LinearDrive;                                       // 0x88(0x68)(None)
	struct FAngularDriveConstraint               AngularDrive;                                      // 0xF0(0x68)(None)
	enum class EConstraintPlasticityType         LinearPlasticityType;                              // 0x158(0x1)(None)
	uint8                                        Pad_3C54[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.ConstraintInstanceBase
struct FConstraintInstanceBase
{
public:
	uint8                                        Pad_3C55[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x240 (0x278 - 0x38)
// ScriptStruct Engine.ConstraintInstance
struct FConstraintInstance : public FConstraintInstanceBase
{
public:
	class FName                                  JointName;                                         // 0x38(0x8)(None)
	class FName                                  ConstraintBone1;                                   // 0x40(0x8)(None)
	class FName                                  ConstraintBone2;                                   // 0x48(0x8)(None)
	uint8                                        Pad_3C56[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Pos1;                                              // 0x58(0x18)(None)
	struct FVector                               PriAxis1;                                          // 0x70(0x18)(None)
	struct FVector                               SecAxis1;                                          // 0x88(0x18)(None)
	struct FVector                               Pos2;                                              // 0xA0(0x18)(None)
	struct FVector                               PriAxis2;                                          // 0xB8(0x18)(None)
	struct FVector                               SecAxis2;                                          // 0xD0(0x18)(None)
	struct FRotator                              AngularRotationOffset;                             // 0xE8(0x18)(None)
	uint8                                        bScaleLinearLimits : 1;                            // Mask: 0x1, PropSize: 0x10x100(0x1)(None)
	uint8                                        BitPad_369 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConstraintProfileProperties          ProfileInstance;                                   // 0x108(0x160)(None)
	uint8                                        Pad_3C58[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ConstraintInstanceAccessor
struct FConstraintInstanceAccessor
{
public:
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x0(0x8)(None)
	uint32                                       Index;                                             // 0x8(0x4)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.PhysicalAnimationData
struct FPhysicalAnimationData
{
public:
	class FName                                  BodyName;                                          // 0x0(0x8)(None)
	uint8                                        bIsLocalSimulation : 1;                            // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_36A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrientationStrength;                               // 0xC(0x4)(None)
	float                                        AngularVelocityStrength;                           // 0x10(0x4)(None)
	float                                        PositionStrength;                                  // 0x14(0x4)(None)
	float                                        VelocityStrength;                                  // 0x18(0x4)(None)
	float                                        MaxLinearForce;                                    // 0x1C(0x4)(None)
	float                                        MaxAngularForce;                                   // 0x20(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.PhysicsAssetSolverSettings
struct FPhysicsAssetSolverSettings
{
public:
	int32                                        PositionIterations;                                // 0x0(0x4)(None)
	int32                                        VelocityIterations;                                // 0x4(0x4)(None)
	int32                                        ProjectionIterations;                              // 0x8(0x4)(None)
	float                                        CullDistance;                                      // 0xC(0x4)(None)
	float                                        MaxDepenetrationVelocity;                          // 0x10(0x4)(None)
	float                                        FixedTimeStep;                                     // 0x14(0x4)(None)
	bool                                         bUseLinearJointSolver;                             // 0x18(0x1)(None)
	uint8                                        Pad_3C5A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SolverIterations
struct FSolverIterations
{
public:
	int32                                        SolverIterations;                                  // 0x0(0x4)(None)
	int32                                        JointIterations;                                   // 0x4(0x4)(None)
	int32                                        CollisionIterations;                               // 0x8(0x4)(None)
	int32                                        SolverPushOutIterations;                           // 0xC(0x4)(None)
	int32                                        JointPushOutIterations;                            // 0x10(0x4)(None)
	int32                                        CollisionPushOutIterations;                        // 0x14(0x4)(None)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Engine.PhysicalAnimationProfile
struct FPhysicalAnimationProfile
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(None)
	struct FPhysicalAnimationData                PhysicalAnimationData;                             // 0x8(0x24)(None)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct Engine.PhysicsConstraintProfileHandle
struct FPhysicsConstraintProfileHandle
{
public:
	struct FConstraintProfileProperties          ProfileProperties;                                 // 0x0(0x160)(None)
	class FName                                  ProfileName;                                       // 0x160(0x8)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.PhysicalSurfaceName
struct FPhysicalSurfaceName
{
public:
	enum class EPhysicalSurface                  Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_3C5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(None)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Engine.ChaosPhysicsSettings
struct FChaosPhysicsSettings
{
public:
	enum class EChaosThreadingMode               DefaultThreadingModel;                             // 0x0(0x1)(None)
	enum class EChaosSolverTickMode              DedicatedThreadTickMode;                           // 0x1(0x1)(None)
	enum class EChaosBufferMode                  DedicatedThreadBufferMode;                         // 0x2(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
struct FUpdateLevelStreamingLevelStatus
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(None)
	int32                                        LODIndex;                                          // 0x8(0x4)(None)
	bool                                         bNewShouldBeLoaded;                                // 0xC(0x1)(None)
	bool                                         bNewShouldBeVisible;                               // 0xD(0x1)(None)
	bool                                         bNewShouldBlockOnLoad;                             // 0xE(0x1)(None)
	bool                                         bNewShouldBlockOnUnload;                           // 0xF(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AsyncPhysicsTimestamp
struct FAsyncPhysicsTimestamp
{
public:
	int32                                        ServerFrame;                                       // 0x0(0x4)(None)
	int32                                        LocalFrame;                                        // 0x4(0x4)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.PlayerMuteList
struct FPlayerMuteList
{
public:
	uint8                                        Pad_3C5C[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasVoiceHandshakeCompleted;                       // 0x50(0x1)(None)
	uint8                                        Pad_3C5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VoiceChannelIdx;                                   // 0x54(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.PropertyAccessIndirection
struct FPropertyAccessIndirection
{
public:
	FFieldPathProperty_                          Property;                                          // 0x0(0x20)(ZeroConstructor)
	class UFunction*                             Function;                                          // 0x20(0x8)(None)
	int32                                        ReturnBufferSize;                                  // 0x28(0x4)(None)
	int32                                        ReturnBufferAlignment;                             // 0x2C(0x4)(None)
	int32                                        ArrayIndex;                                        // 0x30(0x4)(None)
	uint32                                       Offset;                                            // 0x34(0x4)(None)
	enum class EPropertyAccessObjectType         ObjectType;                                        // 0x38(0x1)(None)
	enum class EPropertyAccessIndirectionType    Type;                                              // 0x39(0x1)(None)
	uint8                                        Pad_3C5E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.PropertyAccessIndirectionChain
struct FPropertyAccessIndirectionChain
{
public:
	FFieldPathProperty_                          Property;                                          // 0x0(0x20)(None)
	int32                                        IndirectionStartIndex;                             // 0x20(0x4)(None)
	int32                                        IndirectionEndIndex;                               // 0x24(0x4)(None)
};

// 0x9C (0x9C - 0x0)
// ScriptStruct Engine.SubsurfaceProfileStruct
struct FSubsurfaceProfileStruct
{
public:
	struct FLinearColor                          SurfaceAlbedo;                                     // 0x0(0x10)(None)
	struct FLinearColor                          MeanFreePathColor;                                 // 0x10(0x10)(None)
	float                                        MeanFreePathDistance;                              // 0x20(0x4)(None)
	float                                        WorldUnitScale;                                    // 0x24(0x4)(None)
	bool                                         bEnableBurley;                                     // 0x28(0x1)(None)
	bool                                         bEnableMeanFreePath;                               // 0x29(0x1)(None)
	uint8                                        Pad_3C5F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Tint;                                              // 0x2C(0x10)(None)
	float                                        ScatterRadius;                                     // 0x3C(0x4)(None)
	struct FLinearColor                          SubsurfaceColor;                                   // 0x40(0x10)(None)
	struct FLinearColor                          FalloffColor;                                      // 0x50(0x10)(None)
	struct FLinearColor                          BoundaryColorBleed;                                // 0x60(0x10)(None)
	float                                        ExtinctionScale;                                   // 0x70(0x4)(None)
	float                                        NormalScale;                                       // 0x74(0x4)(None)
	float                                        ScatteringDistribution;                            // 0x78(0x4)(None)
	float                                        IOR;                                               // 0x7C(0x4)(None)
	float                                        Roughness0;                                        // 0x80(0x4)(None)
	float                                        Roughness1;                                        // 0x84(0x4)(None)
	float                                        LobeMix;                                           // 0x88(0x4)(None)
	struct FLinearColor                          TransmissionTintColor;                             // 0x8C(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.RepMovementNetSerializerConfig
struct FRepMovementNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_3C60[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SingleAnimationPlayData
struct FSingleAnimationPlayData
{
public:
	class UAnimationAsset*                       AnimToPlay;                                        // 0x0(0x8)(None)
	uint8                                        bSavedLooping : 1;                                 // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bSavedPlaying : 1;                                 // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_36B : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SavedPosition;                                     // 0xC(0x4)(None)
	float                                        SavedPlayRate;                                     // 0x10(0x4)(None)
	uint8                                        Pad_3C62[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.GroundBoneModifier
struct FGroundBoneModifier
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	float                                        TraceDistance;                                     // 0x8(0x4)(None)
	float                                        ZOffset;                                           // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.GroundBoneChain
struct FGroundBoneChain
{
public:
	class FName                                  LeafGroundBoneName;                                // 0x0(0x8)(None)
	TArray<struct FGroundBoneModifier>           GroundBones;                                       // 0x8(0x10)(None)
	bool                                         bIsAfterIk;                                        // 0x18(0x1)(None)
	bool                                         bUpdateRoll;                                       // 0x19(0x1)(None)
	uint8                                        Pad_3C63[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.BoneMirrorInfo
struct FBoneMirrorInfo
{
public:
	int32                                        SourceIndex;                                       // 0x0(0x4)(None)
	enum class EAxis                             BoneFlipAxis;                                      // 0x4(0x1)(None)
	uint8                                        Pad_3C64[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.BoneMirrorExport
struct FBoneMirrorExport
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	class FName                                  SourceBoneName;                                    // 0x8(0x8)(None)
	enum class EAxis                             BoneFlipAxis;                                      // 0x10(0x1)(None)
	uint8                                        Pad_3C65[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.SkeletalMeshClothBuildParams
struct FSkeletalMeshClothBuildParams
{
public:
	TWeakObjectPtr<class UClothingAssetBase>     TargetAsset;                                       // 0x0(0x8)(ZeroConstructor)
	int32                                        TargetLod;                                         // 0x8(0x4)(None)
	bool                                         bRemapParameters;                                  // 0xC(0x1)(None)
	uint8                                        Pad_3C66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetName;                                         // 0x10(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x20(0x4)(None)
	int32                                        SourceSection;                                     // 0x24(0x4)(None)
	bool                                         bRemoveFromMesh;                                   // 0x28(0x1)(None)
	uint8                                        Pad_3C67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UPhysicsAsset>          PhysicsAsset;                                      // 0x30(0x30)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.ClothPhysicsProperties_Legacy
struct FClothPhysicsProperties_Legacy
{
public:
	float                                        VerticalResistance;                                // 0x0(0x4)(None)
	float                                        HorizontalResistance;                              // 0x4(0x4)(None)
	float                                        BendResistance;                                    // 0x8(0x4)(None)
	float                                        ShearResistance;                                   // 0xC(0x4)(None)
	float                                        Friction;                                          // 0x10(0x4)(None)
	float                                        Damping;                                           // 0x14(0x4)(None)
	float                                        TetherStiffness;                                   // 0x18(0x4)(None)
	float                                        TetherLimit;                                       // 0x1C(0x4)(None)
	float                                        Drag;                                              // 0x20(0x4)(None)
	float                                        StiffnessFrequency;                                // 0x24(0x4)(None)
	float                                        GravityScale;                                      // 0x28(0x4)(None)
	float                                        MassScale;                                         // 0x2C(0x4)(None)
	float                                        InertiaBlend;                                      // 0x30(0x4)(None)
	float                                        SelfCollisionThickness;                            // 0x34(0x4)(None)
	float                                        SelfCollisionSquashScale;                          // 0x38(0x4)(None)
	float                                        SelfCollisionStiffness;                            // 0x3C(0x4)(None)
	float                                        SolverFrequency;                                   // 0x40(0x4)(None)
	float                                        FiberCompression;                                  // 0x44(0x4)(None)
	float                                        FiberExpansion;                                    // 0x48(0x4)(None)
	float                                        FiberResistance;                                   // 0x4C(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.ClothingAssetData_Legacy
struct FClothingAssetData_Legacy
{
public:
	class FName                                  AssetName;                                         // 0x0(0x8)(None)
	class FString                                ApexFileName;                                      // 0x8(0x10)(None)
	bool                                         bClothPropertiesChanged;                           // 0x18(0x1)(None)
	uint8                                        Pad_3C68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothPhysicsProperties_Legacy        PhysicsProperties;                                 // 0x1C(0x50)(None)
	uint8                                        Pad_3C69[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.BoneFilter
struct FBoneFilter
{
public:
	bool                                         bExcludeSelf;                                      // 0x0(0x1)(None)
	uint8                                        Pad_3C6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x4(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.SkeletalMeshLODGroupSettings
struct FSkeletalMeshLODGroupSettings
{
public:
	struct FPerPlatformFloat                     ScreenSize;                                        // 0x0(0x4)(None)
	float                                        LODHysteresis;                                     // 0x4(0x4)(None)
	enum class EBoneFilterActionOption           BoneFilterActionOption;                            // 0x8(0x1)(None)
	uint8                                        Pad_3C6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneFilter>                   BoneList;                                          // 0x10(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          BonesToPrioritize;                                 // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int32>                                SectionsToPrioritize;                              // 0x30(0x10)(None)
	float                                        WeightOfPrioritization;                            // 0x40(0x4)(None)
	uint8                                        Pad_3C6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         BakePose;                                          // 0x48(0x8)(None)
	struct FSkeletalMeshOptimizationSettings     ReductionSettings;                                 // 0x50(0x3C)(None)
	uint8                                        Pad_3C6D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SkelMeshMergeSectionMapping
struct FSkelMeshMergeSectionMapping
{
public:
	TArray<int32>                                SectionIDs;                                        // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SkelMeshMergeMeshUVTransforms
struct FSkelMeshMergeMeshUVTransforms
{
public:
	TArray<struct FTransform>                    UVTransforms;                                      // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SkelMeshMergeUVTransformMapping
struct FSkelMeshMergeUVTransformMapping
{
public:
	TArray<struct FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh;                               // 0x0(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
struct FSkeletalMeshSamplingRegionBuiltData
{
public:
	uint8                                        Pad_3C6F[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
struct FSkeletalMeshSamplingLODBuiltData
{
public:
	uint8                                        Pad_3C70[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
struct FSkeletalMeshSamplingBuiltData
{
public:
	TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;                                // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                                   // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
struct FSkeletalMeshSamplingRegionBoneFilter
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	uint8                                        bIncludeOrExclude : 1;                             // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bApplyToChildren : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        Pad_3C71[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
struct FSkeletalMeshSamplingRegionMaterialFilter
{
public:
	class FName                                  MaterialName;                                      // 0x0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingRegion
struct FSkeletalMeshSamplingRegion
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	int32                                        LODIndex;                                          // 0x8(0x4)(None)
	uint8                                        bSupportUniformlyDistributedSampling : 1;          // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        BitPad_36C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                                   // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                       // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.SkeletalMeshSamplingInfo
struct FSkeletalMeshSamplingInfo
{
public:
	TArray<struct FSkeletalMeshSamplingRegion>   Regions;                                           // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkeletalMeshSamplingBuiltData        BuiltData;                                         // 0x10(0x20)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.SectionReference
struct FSectionReference
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Engine.SkeletalMeshLODInfo
struct FSkeletalMeshLODInfo
{
public:
	struct FPerPlatformFloat                     ScreenSize;                                        // 0x0(0x4)(None)
	float                                        LODHysteresis;                                     // 0x4(0x4)(None)
	TArray<int32>                                LODMaterialMap;                                    // 0x8(0x10)(SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSkeletalMeshBuildSettings            BuildSettings;                                     // 0x18(0x18)(None)
	struct FSkeletalMeshOptimizationSettings     ReductionSettings;                                 // 0x30(0x3C)(None)
	uint8                                        Pad_3C73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                BonesToRemove;                                     // 0x70(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                BonesToPrioritize;                                 // 0x80(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSectionReference>             SectionsToPrioritize;                              // 0x90(0x10)(AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightOfPrioritization;                            // 0xA0(0x4)(None)
	uint8                                        Pad_3C74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         BakePose;                                          // 0xA8(0x8)(ZeroConstructor)
	class UAnimSequence*                         BakePoseOverride;                                  // 0xB0(0x8)(None)
	class FString                                SourceImportFilename;                              // 0xB8(0x10)(None)
	enum class ESkinCacheUsage                   SkinCacheUsage;                                    // 0xC8(0x1)(None)
	uint8                                        Pad_3C75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MorphTargetPositionErrorTolerance;                 // 0xCC(0x4)(None)
	uint8                                        bHasBeenSimplified : 1;                            // Mask: 0x1, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bHasPerLODVertexColors : 1;                        // Mask: 0x2, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bAllowCPUAccess : 1;                               // Mask: 0x4, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bSupportUniformlyDistributedSampling : 1;          // Mask: 0x8, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bOverrideLODSettingsScreenSize : 1;                // Mask: 0x10, PropSize: 0x10xD0(0x1)(None)
	uint8                                        BitPad_36D : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bReplacedWithCustomLOD;                            // 0xD1(0x1)(None)
	uint8                                        Pad_3C76[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SkeletalMaterial
struct FSkeletalMaterial
{
public:
	class UMaterialInterface*                    MaterialInterface;                                 // 0x0(0x8)(None)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(None)
	struct FMeshUVChannelInfo                    UVChannelData;                                     // 0x10(0x14)(None)
	uint8                                        Pad_3C77[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LocalizedSpokenText
struct FLocalizedSpokenText
{
public:
	enum class ELocalizedLanguage                LanguageCode;                                      // 0x0(0x1)(None)
	uint8                                        Pad_3C78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpokenText;                                        // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundClassEditorData
struct FSoundClassEditorData
{
public:
	uint8                                        Pad_3C79[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Engine.SoundModulationDefaultSettings
struct FSoundModulationDefaultSettings
{
public:
	struct FSoundModulationDestinationSettings   VolumeModulationDestination;                       // 0x0(0x60)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings   PitchModulationDestination;                        // 0x60(0x60)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings   HighpassModulationDestination;                     // 0xC0(0x60)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings   LowpassModulationDestination;                      // 0x120(0x60)(None)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct Engine.SoundClassProperties
struct FSoundClassProperties
{
public:
	float                                        Volume;                                            // 0x0(0x4)(None)
	float                                        Pitch;                                             // 0x4(0x4)(None)
	float                                        LowPassFilterFrequency;                            // 0x8(0x4)(None)
	float                                        AttenuationDistanceScale;                          // 0xC(0x4)(None)
	float                                        LFEBleed;                                          // 0x10(0x4)(None)
	float                                        VoiceCenterChannelVolume;                          // 0x14(0x4)(None)
	float                                        RadioFilterVolume;                                 // 0x18(0x4)(None)
	float                                        RadioFilterVolumeThreshold;                        // 0x1C(0x4)(None)
	uint8                                        bApplyEffects : 1;                                 // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAlwaysPlay : 1;                                   // Mask: 0x2, PropSize: 0x10x20(0x1)(None)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x4, PropSize: 0x10x20(0x1)(None)
	uint8                                        bIsMusic : 1;                                      // Mask: 0x8, PropSize: 0x10x20(0x1)(None)
	uint8                                        bCenterChannelOnly : 1;                            // Mask: 0x10, PropSize: 0x10x20(0x1)(None)
	uint8                                        bApplyAmbientVolumes : 1;                          // Mask: 0x20, PropSize: 0x10x20(0x1)(None)
	uint8                                        bReverb : 1;                                       // Mask: 0x40, PropSize: 0x10x20(0x1)(None)
	uint8                                        bIsGamepadSoundClass : 1;                          // Mask: 0x80, PropSize: 0x10x20(0x1)(None)
	uint8                                        Pad_3C7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Default2DReverbSendAmount;                         // 0x24(0x4)(None)
	struct FSoundModulationDefaultSettings       ModulationSettings;                                // 0x28(0x180)(ZeroConstructor)
	enum class EAudioOutputTarget                OutputTarget;                                      // 0x1A8(0x1)(None)
	enum class ESoundWaveLoadingBehavior         LoadingBehavior;                                   // 0x1A9(0x1)(None)
	uint8                                        Pad_3C81[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundSubmix*                          DefaultSubmix;                                     // 0x1B0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PassiveSoundMixModifier
struct FPassiveSoundMixModifier
{
public:
	class USoundMix*                             SoundMix;                                          // 0x0(0x8)(None)
	float                                        MinVolumeThreshold;                                // 0x8(0x4)(None)
	float                                        MaxVolumeThreshold;                                // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SoundConcurrencySettings
struct FSoundConcurrencySettings
{
public:
	int32                                        MaxCount;                                          // 0x0(0x4)(None)
	uint8                                        bLimitToOwner : 1;                                 // Mask: 0x1, PropSize: 0x10x4(0x1)(None)
	uint8                                        bVolumeScaleCanRelease : 1;                        // Mask: 0x2, PropSize: 0x10x4(0x1)(None)
	uint8                                        BitPad_370 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EMaxConcurrentResolutionRule      ResolutionRule;                                    // 0x5(0x1)(None)
	uint8                                        Pad_3C82[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RetriggerTime;                                     // 0x8(0x4)(None)
	float                                        VolumeScale;                                       // 0xC(0x4)(None)
	enum class EConcurrencyVolumeScaleMode       VolumeScaleMode;                                   // 0x10(0x4)(None)
	float                                        VolumeScaleAttackTime;                             // 0x14(0x4)(None)
	float                                        VolumeScaleReleaseTime;                            // 0x18(0x4)(None)
	float                                        VoiceStealReleaseTime;                             // 0x1C(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundNodeEditorData
struct FSoundNodeEditorData
{
public:
	uint8                                        Pad_3C83[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Engine.AudioEQEffect
struct FAudioEQEffect : public FAudioEffectParameters
{
public:
	uint8                                        Pad_3C84[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FrequencyCenter0;                                  // 0x10(0x4)(None)
	float                                        Gain0;                                             // 0x14(0x4)(None)
	float                                        Bandwidth0;                                        // 0x18(0x4)(None)
	float                                        FrequencyCenter1;                                  // 0x1C(0x4)(None)
	float                                        Gain1;                                             // 0x20(0x4)(None)
	float                                        Bandwidth1;                                        // 0x24(0x4)(None)
	float                                        FrequencyCenter2;                                  // 0x28(0x4)(None)
	float                                        Gain2;                                             // 0x2C(0x4)(None)
	float                                        Bandwidth2;                                        // 0x30(0x4)(None)
	float                                        FrequencyCenter3;                                  // 0x34(0x4)(None)
	float                                        Gain3;                                             // 0x38(0x4)(None)
	float                                        Bandwidth3;                                        // 0x3C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SoundClassAdjuster
struct FSoundClassAdjuster
{
public:
	class USoundClass*                           SoundClassObject;                                  // 0x0(0x8)(None)
	float                                        VolumeAdjuster;                                    // 0x8(0x4)(None)
	float                                        PitchAdjuster;                                     // 0xC(0x4)(None)
	float                                        LowPassFilterFrequency;                            // 0x10(0x4)(None)
	uint8                                        bApplyToChildren : 1;                              // Mask: 0x1, PropSize: 0x10x14(0x1)(None)
	uint8                                        BitPad_371 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VoiceCenterChannelVolumeAdjuster;                  // 0x18(0x4)(None)
	uint8                                        Pad_3C86[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x188 - 0x180)
// ScriptStruct Engine.SoundModulationDefaultRoutingSettings
struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings
{
public:
	enum class EModulationRouting                VolumeRouting;                                     // 0x180(0x1)(None)
	enum class EModulationRouting                PitchRouting;                                      // 0x181(0x1)(None)
	enum class EModulationRouting                HighpassRouting;                                   // 0x182(0x1)(None)
	enum class EModulationRouting                LowpassRouting;                                    // 0x183(0x1)(None)
	uint8                                        Pad_3C87[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.DistanceDatum
struct FDistanceDatum
{
public:
	float                                        FadeInDistanceStart;                               // 0x0(0x4)(None)
	float                                        FadeInDistanceEnd;                                 // 0x4(0x4)(None)
	float                                        FadeOutDistanceStart;                              // 0x8(0x4)(None)
	float                                        FadeOutDistanceEnd;                                // 0xC(0x4)(None)
	float                                        Volume;                                            // 0x10(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SoundSubmixSpectralAnalysisBandSettings
struct FSoundSubmixSpectralAnalysisBandSettings
{
public:
	float                                        BandFrequency;                                     // 0x0(0x4)(None)
	int32                                        AttackTimeMsec;                                    // 0x4(0x4)(None)
	int32                                        ReleaseTimeMsec;                                   // 0x8(0x4)(None)
	float                                        QFactor;                                           // 0xC(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.StaticMeshOptimizationSettings
struct FStaticMeshOptimizationSettings
{
public:
	enum class EOptimizationType                 ReductionMethod;                                   // 0x0(0x1)(None)
	uint8                                        Pad_3C8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NumOfTrianglesPercentage;                          // 0x4(0x4)(None)
	float                                        MaxDeviationPercentage;                            // 0x8(0x4)(None)
	float                                        WeldingThreshold;                                  // 0xC(0x4)(None)
	bool                                         bRecalcNormals;                                    // 0x10(0x1)(None)
	uint8                                        Pad_3C8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalsThreshold;                                  // 0x14(0x4)(None)
	uint8                                        SilhouetteImportance;                              // 0x18(0x1)(None)
	uint8                                        TextureImportance;                                 // 0x19(0x1)(None)
	uint8                                        ShadingImportance;                                 // 0x1A(0x1)(None)
	uint8                                        Pad_3C8C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.MeshSectionInfo
struct FMeshSectionInfo
{
public:
	int32                                        MaterialIndex;                                     // 0x0(0x4)(None)
	bool                                         bEnableCollision;                                  // 0x4(0x1)(None)
	bool                                         bCastShadow;                                       // 0x5(0x1)(None)
	bool                                         bVisibleInRayTracing;                              // 0x6(0x1)(None)
	bool                                         bAffectDistanceFieldLighting;                      // 0x7(0x1)(None)
	bool                                         bForceOpaque;                                      // 0x8(0x1)(None)
	uint8                                        Pad_3C8D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.MeshSectionInfoMap
struct FMeshSectionInfoMap
{
public:
	TMap<uint32, struct FMeshSectionInfo>        Map;                                               // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.AssetEditorOrbitCameraPosition
struct FAssetEditorOrbitCameraPosition
{
public:
	bool                                         bIsSet;                                            // 0x0(0x1)(None)
	uint8                                        Pad_3C8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CamOrbitPoint;                                     // 0x8(0x18)(None)
	struct FVector                               CamOrbitZoom;                                      // 0x20(0x18)(None)
	struct FRotator                              CamOrbitRotation;                                  // 0x38(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.StaticMaterial
struct FStaticMaterial
{
public:
	class UMaterialInterface*                    MaterialInterface;                                 // 0x0(0x8)(None)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(None)
	class FName                                  ImportedMaterialSlotName;                          // 0x10(0x8)(None)
	struct FMeshUVChannelInfo                    UVChannelData;                                     // 0x18(0x14)(None)
	uint8                                        Pad_3C8F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MaterialRemapIndex
struct FMaterialRemapIndex
{
public:
	uint32                                       ImportVersionKey;                                  // 0x0(0x4)(None)
	uint8                                        Pad_3C90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                MaterialRemap;                                     // 0x8(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.StaticMeshSourceModel
struct FStaticMeshSourceModel
{
public:
	struct FMeshBuildSettings                    BuildSettings;                                     // 0x0(0x48)(None)
	struct FMeshReductionSettings                ReductionSettings;                                 // 0x48(0x2C)(None)
	uint32                                       CacheMeshDescriptionTrianglesCount;                // 0x74(0x4)(None)
	uint32                                       CacheMeshDescriptionVerticesCount;                 // 0x78(0x4)(None)
	float                                        LODDistance;                                       // 0x7C(0x4)(None)
	struct FPerPlatformFloat                     ScreenSize;                                        // 0x80(0x4)(None)
	uint8                                        Pad_3C91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceImportFilename;                              // 0x88(0x10)(None)
	int32                                        DynamicCustomDataOutputMaterialIndex;              // 0x98(0x4)(None)
	uint8                                        Pad_3C92[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.StreamableTexture
struct FStreamableTexture
{
public:
	uint8                                        Pad_3C93[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.ExternalToolDefinition
struct FExternalToolDefinition
{
public:
	class FString                                ToolName;                                          // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             ExecutablePath;                                    // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommandLineOptions;                                // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        WorkingDirectory;                                  // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ScriptExtension;                                   // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        ScriptDirectory;                                   // 0x50(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ImportFactorySettingValues
struct FImportFactorySettingValues
{
public:
	class FString                                SettingName;                                       // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.EditorImportExportTestDefinition
struct FEditorImportExportTestDefinition
{
public:
	struct FFilePath                             ImportFilePath;                                    // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExportFileExtension;                               // 0x10(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bSkipExport;                                       // 0x20(0x1)(None)
	uint8                                        Pad_3C94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FImportFactorySettingValues>   FactorySettings;                                   // 0x28(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.EditorImportWorkflowDefinition
struct FEditorImportWorkflowDefinition
{
public:
	struct FFilePath                             ImportFilePath;                                    // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FImportFactorySettingValues>   FactorySettings;                                   // 0x10(0x10)(None)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
struct FBuildPromotionImportWorkflowSettings
{
public:
	struct FEditorImportWorkflowDefinition       Diffuse;                                           // 0x0(0x20)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       Normal;                                            // 0x20(0x20)(SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       StaticMesh;                                        // 0x40(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       ReimportStaticMesh;                                // 0x60(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       BlendShapeMesh;                                    // 0x80(0x20)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       MorphMesh;                                         // 0xA0(0x20)(BlueprintCallable, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       SkeletalMesh;                                      // 0xC0(0x20)(ContainsInstancedReference, BlueprintCallable, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       Animation;                                         // 0xE0(0x20)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       Sound;                                             // 0x100(0x20)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       SurroundSound;                                     // 0x120(0x20)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport;                               // 0x140(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.BuildPromotionOpenAssetSettings
struct FBuildPromotionOpenAssetSettings
{
public:
	struct FFilePath                             BlueprintAsset;                                    // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             MaterialAsset;                                     // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             ParticleSystemAsset;                               // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             SkeletalMeshAsset;                                 // 0x30(0x10)(AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             StaticMeshAsset;                                   // 0x40(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             TextureAsset;                                      // 0x50(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BuildPromotionNewProjectSettings
struct FBuildPromotionNewProjectSettings
{
public:
	struct FDirectoryPath                        NewProjectFolderOverride;                          // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewProjectNameOverride;                            // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.MaterialEditorPromotionSettings
struct FMaterialEditorPromotionSettings
{
public:
	struct FFilePath                             DefaultMaterialAsset;                              // 0x0(0x10)(Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             DefaultDiffuseTexture;                             // 0x10(0x10)(ContainsInstancedReference, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             DefaultNormalTexture;                              // 0x20(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ParticleEditorPromotionSettings
struct FParticleEditorPromotionSettings
{
public:
	struct FFilePath                             DefaultParticleAsset;                              // 0x0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.BlueprintEditorPromotionSettings
struct FBlueprintEditorPromotionSettings
{
public:
	struct FFilePath                             FirstMeshPath;                                     // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             SecondMeshPath;                                    // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             DefaultParticleAsset;                              // 0x20(0x10)(None)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Engine.BuildPromotionTestSettings
struct FBuildPromotionTestSettings
{
public:
	struct FFilePath                             DefaultStaticMeshAsset;                            // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow;                                    // 0x10(0x150)(AdvancedDisplay, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildPromotionOpenAssetSettings      OpenAssets;                                        // 0x160(0x60)(ContainsInstancedReference, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuildPromotionNewProjectSettings     NewProjectSettings;                                // 0x1C0(0x20)(AssetRegistrySearchable, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             SourceControlMaterial;                             // 0x1E0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.EditorMapPerformanceTestDefinition
struct FEditorMapPerformanceTestDefinition
{
public:
	struct FSoftObjectPath                       PerformanceTestmap;                                // 0x0(0x20)(None)
	int32                                        TestTimer;                                         // 0x20(0x4)(None)
	uint8                                        Pad_3C95[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LaunchOnTestSettings
struct FLaunchOnTestSettings
{
public:
	struct FFilePath                             LaunchOnTestmap;                                   // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceID;                                          // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.TextureSourceBlock
struct FTextureSourceBlock
{
public:
	int32                                        BlockX;                                            // 0x0(0x4)(None)
	int32                                        BlockY;                                            // 0x4(0x4)(None)
	int32                                        SizeX;                                             // 0x8(0x4)(None)
	int32                                        SizeY;                                             // 0xC(0x4)(None)
	int32                                        NumSlices;                                         // 0x10(0x4)(None)
	int32                                        NumMips;                                           // 0x14(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.TextureSource
struct FTextureSource
{
public:
	uint8                                        Pad_3C96[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.TexturePlatformData
struct FTexturePlatformData
{
public:
	uint8                                        Pad_3C97[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Engine.TextureFormatSettings
struct FTextureFormatSettings
{
public:
	enum class ETextureCompressionSettings       CompressionSettings;                               // 0x0(0x1)(None)
	uint8                                        CompressionNoAlpha : 1;                            // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        CompressionForceAlpha : 1;                         // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        CompressionNone : 1;                               // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        CompressionYCoCg : 1;                              // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        SRGB : 1;                                          // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.TextureSourceColorSettings
struct FTextureSourceColorSettings
{
public:
	enum class ETextureSourceEncoding            EncodingOverride;                                  // 0x0(0x1)(None)
	enum class ETextureColorSpace                ColorSpace;                                        // 0x1(0x1)(None)
	uint8                                        Pad_3C98[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RedChromaticityCoordinate;                         // 0x8(0x10)(None)
	struct FVector2D                             GreenChromaticityCoordinate;                       // 0x18(0x10)(None)
	struct FVector2D                             BlueChromaticityCoordinate;                        // 0x28(0x10)(None)
	struct FVector2D                             WhiteChromaticityCoordinate;                       // 0x38(0x10)(None)
	enum class ETextureChromaticAdaptationMethod ChromaticAdaptationMethod;                         // 0x48(0x1)(None)
	uint8                                        Pad_3C99[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x64 (0x64 - 0x0)
// ScriptStruct Engine.TextureLODGroup
struct FTextureLODGroup
{
public:
	enum class ETextureGroup                     Group;                                             // 0x0(0x1)(None)
	uint8                                        Pad_3C9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODBias;                                           // 0x8(0x4)(None)
	int32                                        LODBias_Smaller;                                   // 0xC(0x4)(None)
	int32                                        LODBias_Smallest;                                  // 0x10(0x4)(None)
	uint8                                        Pad_3C9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumStreamedMips;                                   // 0x18(0x4)(None)
	enum class ETextureMipGenSettings            MipGenSettings;                                    // 0x1C(0x1)(None)
	uint8                                        Pad_3C9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLODSize;                                        // 0x20(0x4)(None)
	int32                                        MaxLODSize;                                        // 0x24(0x4)(None)
	int32                                        MaxLODSize_Smaller;                                // 0x28(0x4)(None)
	int32                                        MaxLODSize_Smallest;                               // 0x2C(0x4)(None)
	int32                                        MaxLODSize_VT;                                     // 0x30(0x4)(None)
	int32                                        OptionalLODBias;                                   // 0x34(0x4)(None)
	int32                                        OptionalMaxLODSize;                                // 0x38(0x4)(None)
	class FName                                  MinMagFilter;                                      // 0x3C(0x8)(None)
	class FName                                  MipFilter;                                         // 0x44(0x8)(None)
	enum class ETextureMipLoadOptions            MipLoadOptions;                                    // 0x4C(0x1)(None)
	bool                                         HighPriorityLoad;                                  // 0x4D(0x1)(None)
	bool                                         DuplicateNonOptionalMips;                          // 0x4E(0x1)(None)
	uint8                                        Pad_3C9D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Downscale;                                         // 0x50(0x4)(None)
	enum class ETextureDownscaleOptions          DownscaleOptions;                                  // 0x54(0x1)(None)
	uint8                                        Pad_3C9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualTextureTileCountBias;                       // 0x58(0x4)(None)
	int32                                        VirtualTextureTileSizeBias;                        // 0x5C(0x4)(None)
	enum class ETextureLossyCompressionAmount    LossyCompressionAmount;                            // 0x60(0x1)(None)
	bool                                         CookPlatformTilingDisabled;                        // 0x61(0x1)(None)
	uint8                                        Pad_3C9F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.TTTrackBase
struct FTTTrackBase
{
public:
	uint8                                        Pad_3CA0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TrackName;                                         // 0x8(0x8)(None)
	bool                                         bIsExternalCurve;                                  // 0x10(0x1)(None)
	uint8                                        Pad_3CA1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.TTTrackId
struct FTTTrackId
{
public:
	int32                                        TrackType;                                         // 0x0(0x4)(None)
	int32                                        TrackIndex;                                        // 0x4(0x4)(None)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Engine.TTEventTrack
struct FTTEventTrack : public FTTTrackBase
{
public:
	class FName                                  FunctionName;                                      // 0x18(0x8)(None)
	class UCurveFloat*                           CurveKeys;                                         // 0x20(0x8)(None)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Engine.TTPropertyTrack
struct FTTPropertyTrack : public FTTTrackBase
{
public:
	class FName                                  PropertyName;                                      // 0x18(0x8)(None)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct Engine.TTFloatTrack
struct FTTFloatTrack : public FTTPropertyTrack
{
public:
	class UCurveFloat*                           CurveFloat;                                        // 0x20(0x8)(None)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct Engine.TTVectorTrack
struct FTTVectorTrack : public FTTPropertyTrack
{
public:
	class UCurveVector*                          CurveVector;                                       // 0x20(0x8)(None)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct Engine.TTLinearColorTrack
struct FTTLinearColorTrack : public FTTPropertyTrack
{
public:
	class UCurveLinearColor*                     CurveLinearColor;                                  // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.HardwareCursorReference
struct FHardwareCursorReference
{
public:
	class FName                                  CursorPath;                                        // 0x0(0x8)(None)
	struct FVector2D                             HotSpot;                                           // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CanvasIcon
struct FCanvasIcon
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(None)
	float                                        U;                                                 // 0x8(0x4)(None)
	float                                        V;                                                 // 0xC(0x4)(None)
	float                                        UL;                                                // 0x10(0x4)(None)
	float                                        VL;                                                // 0x14(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.AutoCompleteNode
struct FAutoCompleteNode
{
public:
	int32                                        IndexChar;                                         // 0x0(0x4)(None)
	uint8                                        Pad_3CA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AutoCompleteListIndices;                           // 0x8(0x10)(None)
	uint8                                        Pad_3CA3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.HardwareDeviceIdentifier
struct FHardwareDeviceIdentifier
{
public:
	class FName                                  InputClassName;                                    // 0x0(0x8)(None)
	class FName                                  HardwareDeviceIdentifier;                          // 0x8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.KeyBind
struct FKeyBind
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Command;                                           // 0x18(0x10)(None)
	uint8                                        Control : 1;                                       // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        Shift : 1;                                         // Mask: 0x2, PropSize: 0x10x28(0x1)(None)
	uint8                                        Alt : 1;                                           // Mask: 0x4, PropSize: 0x10x28(0x1)(None)
	uint8                                        Cmd : 1;                                           // Mask: 0x8, PropSize: 0x10x28(0x1)(None)
	uint8                                        bIgnoreCtrl : 1;                                   // Mask: 0x10, PropSize: 0x10x28(0x1)(None)
	uint8                                        bIgnoreShift : 1;                                  // Mask: 0x20, PropSize: 0x10x28(0x1)(None)
	uint8                                        bIgnoreAlt : 1;                                    // Mask: 0x40, PropSize: 0x10x28(0x1)(None)
	uint8                                        bIgnoreCmd : 1;                                    // Mask: 0x80, PropSize: 0x10x28(0x1)(None)
	uint8                                        bDisabled : 1;                                     // Mask: 0x1, PropSize: 0x10x29(0x1)(None)
	uint8                                        Pad_3CA4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InputAxisProperties
struct FInputAxisProperties
{
public:
	float                                        DeadZone;                                          // 0x0(0x4)(None)
	float                                        Sensitivity;                                       // 0x4(0x4)(None)
	float                                        Exponent;                                          // 0x8(0x4)(None)
	uint8                                        bInvert : 1;                                       // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        Pad_3CA5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.InputAxisConfigEntry
struct FInputAxisConfigEntry
{
public:
	class FName                                  AxisKeyName;                                       // 0x0(0x8)(None)
	struct FInputAxisProperties                  AxisProperties;                                    // 0x8(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.InputActionKeyMapping
struct FInputActionKeyMapping
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(None)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_372 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3CA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Key;                                               // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.InputAxisKeyMapping
struct FInputAxisKeyMapping
{
public:
	class FName                                  AxisName;                                          // 0x0(0x8)(None)
	float                                        Scale;                                             // 0x8(0x4)(None)
	uint8                                        Pad_3CA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Key;                                               // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InputActionSpeechMapping
struct FInputActionSpeechMapping
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(None)
	class FName                                  SpeechKeyword;                                     // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.VoiceSettings
struct FVoiceSettings
{
public:
	class USceneComponent*                       ComponentToAttachTo;                               // 0x0(0x8)(ZeroConstructor)
	class USoundAttenuation*                     AttenuationSettings;                               // 0x8(0x8)(ZeroConstructor)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x10(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.BoxOptimization
struct FBoxOptimization
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	uint8                                        Pad_3CA8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Inverse;                                           // 0x40(0x60)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.VirtualTextureBuildSettings
struct FVirtualTextureBuildSettings
{
public:
	int32                                        TileSize;                                          // 0x0(0x4)(None)
	int32                                        TileBorderSize;                                    // 0x4(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.VirtualTextureSpacePoolConfig
struct FVirtualTextureSpacePoolConfig
{
public:
	int32                                        MinTileSize;                                       // 0x0(0x4)(None)
	int32                                        MaxTileSize;                                       // 0x4(0x4)(None)
	TArray<enum class EPixelFormat>              Formats;                                           // 0x8(0x10)(None)
	int32                                        SizeInMegabyte;                                    // 0x18(0x4)(None)
	bool                                         bEnableResidencyMipMapBias;                        // 0x1C(0x1)(None)
	bool                                         bAllowSizeScale;                                   // 0x1D(0x1)(None)
	uint8                                        Pad_3CA9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ScalabilityGroup;                                  // 0x20(0x4)(None)
	int32                                        MinScaledSizeInMegabyte;                           // 0x24(0x4)(None)
	int32                                        MaxScaledSizeInMegabyte;                           // 0x28(0x4)(None)
	uint8                                        Pad_3CAA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.LevelViewportInfo
struct FLevelViewportInfo
{
public:
	struct FVector                               CamPosition;                                       // 0x0(0x18)(None)
	struct FRotator                              CamRotation;                                       // 0x18(0x18)(None)
	float                                        CamOrthoZoom;                                      // 0x30(0x4)(None)
	bool                                         CamUpdated;                                        // 0x34(0x1)(None)
	uint8                                        Pad_3CAB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.StartPhysicsTickFunction
struct FStartPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3CAC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Engine.EndPhysicsTickFunction
struct FEndPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_3CAD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.LevelCollection
struct FLevelCollection
{
public:
	uint8                                        Pad_3CAE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        GameState;                                         // 0x8(0x8)(ZeroConstructor)
	class UNetDriver*                            NetDriver;                                         // 0x10(0x8)(ZeroConstructor)
	class UDemoNetDriver*                        DemoNetDriver;                                     // 0x18(0x8)(ZeroConstructor)
	class ULevel*                                PersistentLevel;                                   // 0x20(0x8)(ZeroConstructor)
	TSet<class ULevel*>                          Levels;                                            // 0x28(0x50)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.StreamingLevelsToConsider
struct FStreamingLevelsToConsider
{
public:
	TArray<class ULevelStreaming*>               StreamingLevels;                                   // 0x0(0x10)(None)
	uint8                                        Pad_3CAF[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EditorTileInitialState
struct FEditorTileInitialState
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(None)
	bool                                         bWasInitiallyLoaded;                               // 0x10(0x1)(None)
	bool                                         bWasInitiallyVisible;                              // 0x11(0x1)(None)
	uint8                                        Pad_3CB0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Engine.ActorDesc
struct FActorDesc
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	struct FSoftObjectPath                       Class;                                             // 0x10(0x20)(None)
	class FName                                  Name;                                              // 0x30(0x8)(None)
	class FName                                  Label;                                             // 0x38(0x8)(None)
	struct FBox                                  Bounds;                                            // 0x40(0x38)(None)
	class FName                                  RuntimeGrid;                                       // 0x78(0x8)(None)
	bool                                         bIsSpatiallyLoaded;                                // 0x80(0x1)(None)
	bool                                         bActorIsEditorOnly;                                // 0x81(0x1)(None)
	uint8                                        Pad_3CB2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActorPackage;                                      // 0x84(0x8)(None)
	class FName                                  ActorPath;                                         // 0x8C(0x8)(None)
	uint8                                        Pad_3CB3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ActorPlacementDataLayers
struct FActorPlacementDataLayers
{
public:
	TArray<class FName>                          DataLayerInstanceNames;                            // 0x0(0x10)(None)
	int32                                        ContextID;                                         // 0x10(0x4)(None)
	uint8                                        Pad_3CB4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x14 - 0xC)
// ScriptStruct Engine.WorldPartitionDestructibleHLODDamagedActorState
struct FWorldPartitionDestructibleHLODDamagedActorState : public FFastArraySerializerItem
{
public:
	int32                                        ActorIndex;                                        // 0xC(0x4)(None)
	uint8                                        ActorHealth;                                       // 0x10(0x1)(None)
	uint8                                        Pad_3CB5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x148 - 0x108)
// ScriptStruct Engine.WorldPartitionDestructibleHLODState
struct FWorldPartitionDestructibleHLODState : public FFastArraySerializer
{
public:
	TArray<struct FWorldPartitionDestructibleHLODDamagedActorState> DamagedActors;                                     // 0x108(0x10)(None)
	class UWorldPartitionDestructibleHLODComponent* OwnerComponent;                                    // 0x118(0x8)(None)
	uint8                                        Pad_3CB6[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WorldPartitionHLODDestructionTag
struct FWorldPartitionHLODDestructionTag
{
public:
	class UWorldPartitionDestructibleHLODComponent* HLODDestructionComponent;                          // 0x0(0x8)(None)
	int32                                        ActorIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_3CB7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.WorldPartitionPerWorldSettings
struct FWorldPartitionPerWorldSettings
{
public:
	uint8                                        Pad_3CB8[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.WorldPartitionRuntimeCellObjectMapping
struct FWorldPartitionRuntimeCellObjectMapping
{
public:
	uint8                                        Pad_3CB9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.WorldPartitionRuntimeCellDebugInfo
struct FWorldPartitionRuntimeCellDebugInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	class FName                                  GridName;                                          // 0x10(0x8)(None)
	int64                                        CoordX;                                            // 0x18(0x8)(None)
	int64                                        CoordY;                                            // 0x20(0x8)(None)
	int64                                        CoordZ;                                            // 0x28(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SpatialHashStreamingGridLayerCell
struct FSpatialHashStreamingGridLayerCell
{
public:
	TArray<class UWorldPartitionRuntimeCell*>    GridCells;                                         // 0x0(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.SpatialHashStreamingGridLevel
struct FSpatialHashStreamingGridLevel
{
public:
	TArray<struct FSpatialHashStreamingGridLayerCell> LayerCells;                                        // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int64, int32>                           LayerCellsMapping;                                 // 0x10(0x50)(None)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Engine.SpatialHashStreamingGrid
struct FSpatialHashStreamingGrid
{
public:
	class FName                                  GridName;                                          // 0x0(0x8)(None)
	struct FVector                               Origin;                                            // 0x8(0x18)(None)
	int32                                        CellSize;                                          // 0x20(0x4)(None)
	float                                        LoadingRange;                                      // 0x24(0x4)(None)
	bool                                         bBlockOnSlowStreaming;                             // 0x28(0x1)(None)
	uint8                                        Pad_3CBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x2C(0x10)(None)
	uint8                                        Pad_3CBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpatialHashStreamingGridLevel> GridLevels;                                        // 0x40(0x10)(ZeroConstructor)
	struct FBox                                  WorldBounds;                                       // 0x50(0x38)(None)
	bool                                         bClientOnlyVisible;                                // 0x88(0x1)(None)
	uint8                                        Pad_3CBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHLODLayer*                            HLODLayer;                                         // 0x90(0x8)(None)
	uint8                                        Pad_3CBD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.SpatialHashRuntimeGrid
struct FSpatialHashRuntimeGrid
{
public:
	uint8                                        Pad_3CBE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.WorldPartitionRuntimeSpatialHashGridPreviewer
struct FWorldPartitionRuntimeSpatialHashGridPreviewer
{
public:
	uint8                                        Pad_3CBF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.StreamingSourceShape
struct FStreamingSourceShape
{
public:
	bool                                         bUseGridLoadingRange;                              // 0x0(0x1)(None)
	uint8                                        Pad_3CC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoadingRangeScale;                                 // 0x4(0x4)(None)
	float                                        Radius;                                            // 0x8(0x4)(None)
	bool                                         bIsSector;                                         // 0xC(0x1)(None)
	uint8                                        Pad_3CC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SectorAngle;                                       // 0x10(0x4)(None)
	uint8                                        Pad_3CC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x18(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(None)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct Engine.WorldPartitionStreamingQuerySource
struct FWorldPartitionStreamingQuerySource
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	float                                        Radius;                                            // 0x18(0x4)(None)
	bool                                         bUseGridLoadingRange;                              // 0x1C(0x1)(None)
	uint8                                        Pad_3CC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DataLayers;                                        // 0x20(0x10)(None)
	bool                                         bDataLayersOnly;                                   // 0x30(0x1)(None)
	bool                                         bSpatialQuery;                                     // 0x31(0x1)(None)
	uint8                                        Pad_3CC4[0xFE];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


