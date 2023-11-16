#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPrimalCharacterInputType : uint8
{
	PrimaryFire                    = 0,
	Targeting                      = 1,
	AltFire                        = 2,
	SwitchWeapon                   = 3,
	Reload                         = 4,
	Crouch                         = 5,
	Prone                          = 6,
	CrouchProneToggle              = 7,
	SwitchMap                      = 8,
	DinoAttack                     = 9,
	EPrimalCharacterInputType_MAX  = 10,
};

enum class EUContextMenuItemSwitchMode : uint8
{
	None                           = 0,
	Radio                          = 1,
	Checkbox                       = 2,
	UContextMenuItemSwitchMode_MAX = 3,
};

enum class EAntiDupeTransactionLog : uint8
{
	Item_Upload                    = 0,
	Dino_Upload                    = 1,
	Player_Upload                  = 2,
	MAX_ENTRY                      = 3,
	EAntiDupeTransactionLog_MAX    = 4,
};

enum class EBiomeZone : uint8
{
	None                           = 0,
	Beach                          = 1,
	Canyon                         = 2,
	River                          = 3,
	Grassland                      = 4,
	Swamp                          = 5,
	Jungle                         = 6,
	RedwoodForest                  = 7,
	Mountain                       = 8,
	Snow                           = 9,
	Ocean                          = 10,
	Lava                           = 11,
	Surface                        = 12,
	FertileChamber                 = 13,
	BioluminescentChamber          = 14,
	ElementChamber                 = 15,
	Wasteland                      = 16,
	EBiomeZone_MAX                 = 17,
};

enum class EFolderWidgetType : uint8
{
	FWT_Back                       = 0,
	FWT_Folder                     = 1,
	FWT_CustomFolder               = 2,
	FWT_MAX                        = 3,
};

enum class EBoidType : uint8
{
	Follower                       = 0,
	Leader                         = 1,
	FreeAgent                      = 2,
	EBoidType_MAX                  = 3,
};

enum class EOldShaderPlatform : uint8
{
	OSP_PCD3D_SM5                  = 0,
	OSP_OPENGL_SM4                 = 1,
	OSP_PS4                        = 2,
	OSP_OPENGL_PCES2               = 3,
	OSP_XBOXONE                    = 4,
	OSP_PCD3D_SM4                  = 5,
	OSP_OPENGL_SM5                 = 6,
	OSP_PCD3D_ES2                  = 7,
	OSP_OPENGL_ES2_ANDROID         = 8,
	OSP_OPENGL_ES2_WEBGL           = 9,
	OSP_OPENGL_ES2_IOS             = 10,
	OSP_METAL                      = 11,
	OSP_OPENGL_SM4_MAC             = 12,
	OSP_METAL_MRT                  = 13,
	OSP_OPENGL_ES31_EXT            = 14,
	OSP_PCD3D_ES3_1                = 15,
	OSP_OPENGL_PCES3_1             = 16,
	OSP_METAL_SM5                  = 17,
	OSP_VULKAN_PCES3_1             = 18,
	OSP_METAL_SM4                  = 19,
	OSP_VULKAN_SM4                 = 20,
	OSP_VULKAN_SM5                 = 21,
	OSP_VULKAN_ES3_1_ANDROID       = 22,
	OSP_METAL_MACES3_1             = 23,
	OSP_METAL_MACES2               = 24,
	OSP_OPENGL_ES3_1_ANDROID       = 25,
	OSP_SWITCH                     = 26,
	OSP_SWITCH_FORWARD             = 27,
	OSP_NumPlatforms               = 28,
	OSP_MAX                        = 29,
};

enum class EMissionDispatcherTriggerMode : uint8
{
	AutoStartMission               = 0,
	Ignore                         = 1,
	ActivateViaMultiUse            = 2,
	EMissionDispatcherTriggerMode_MAX = 3,
};

enum class ENativeMissionMetaTag : uint8
{
	INVALID                        = 0,
	GENESIS_VR_BOSS_UNLOCK         = 1,
	ARCTIC_MISSION                 = 2,
	BOG_MISSION                    = 3,
	LUNAR_MISSION                  = 4,
	OCEAN_MISSION                  = 5,
	VOLCANIC_MISSION               = 6,
	NORMAL_DIFFICULTY              = 7,
	ALPHA_DIFFICULTY               = 8,
	BETA_DIFFICULTY                = 9,
	GAMMA_DIFFICULTY               = 10,
	MAX                            = 11,
};

enum class EMissionDispatchMode : uint8
{
	StartAnywhere                  = 0,
	RequireNearbyMissionDispatcher = 1,
	RequireInsideMissionDispatcher = 2,
	UseBPStaticCanStartMission     = 3,
	RequireInsideDispatcherNoCheck = 4,
	EMissionDispatchMode_MAX       = 5,
};

enum class ECompanionState : uint8
{
	IDLE                           = 0,
	FOCUSED                        = 1,
	EVENT                          = 2,
	MONOLOGUE                      = 3,
	ASLEEP                         = 4,
	CUSTOM                         = 5,
	ECompanionState_MAX            = 6,
};

enum class EGrappleState : uint8
{
	GRAPPLE_Idle                   = 0,
	GRAPPLE_Pulling                = 1,
	GRAPPLE_Releasing              = 2,
	GRAPPLE_Custom                 = 3,
	GRAPPLE_Max                    = 4,
};

enum class EClimbingMode : uint8
{
	None                           = 0,
	Attached                       = 1,
	Finalizing                     = 2,
	MAX                            = 3,
};

enum class EClimbingType : uint8
{
	None                           = 0,
	ClimbLook                      = 1,
	ClimbInput                     = 2,
	Slide                          = 3,
	MAX                            = 4,
};

enum class EClimbingAnimationType : uint8
{
	Up                             = 0,
	Down                           = 1,
	Right                          = 2,
	Left                           = 3,
	MeleeUp                        = 4,
	MeleeRight                     = 5,
	MeleeLeft                      = 6,
	FinishUp                       = 7,
	FinishDown                     = 8,
	HangingFwd                     = 9,
	HangingMelee                   = 10,
	HangingFinishUp                = 11,
	HangingFinishDown              = 12,
	JumpUp                         = 13,
	JumpUpRight                    = 14,
	JumpUpLeft                     = 15,
	SlideDown                      = 16,
	AttachUp                       = 17,
	AttachDown                     = 18,
	AttachHangingUp                = 19,
	AttachHangingDown              = 20,
	FlipLeft                       = 21,
	FlipRight                      = 22,
	FlipUp                         = 23,
	FlipDown                       = 24,
	TurnUp                         = 25,
	TurnDown                       = 26,
	TurnRight                      = 27,
	TurnLeft                       = 28,
	OpenInventory                  = 29,
	OpenInventoryHanging           = 30,
	QuakeFall                      = 31,
	MAX                            = 32,
};

enum class EBabyCuddleType : uint8
{
	PET                            = 0,
	FOOD                           = 1,
	WALK                           = 2,
	MAX                            = 3,
};

enum class EInteractionType : uint8
{
	InteractionType_Foliage        = 0,
	InteractionType_Fluid          = 1,
	InteractionType_Both           = 2,
	InteractionType_MAX            = 3,
};

enum class EEngramCategory : uint8
{
	TOOLS                          = 0,
	CLOTHING                       = 1,
	WEAPONS                        = 2,
	SADDLES                        = 3,
	STRUCTURES                     = 4,
	CRAFTING                       = 5,
	MISC                           = 6,
	MODSPECIFIC                    = 7,
	MAX                            = 8,
};

enum class EEngramGroup : uint8
{
	ARK_PRIME                      = 2,
	ARK_SCORCHEDEARTH              = 4,
	ARK_TEK                        = 8,
	ARK_UNLEARNED                  = 16,
	ARK_ABERRATION                 = 32,
	ARK_EXTINCTION                 = 64,
	ARK_GENESIS                    = 128,
	ARK_GEN2                       = 129,
	MAX                            = 130,
};

enum class EBoneModifierType : uint8
{
	HEAD                           = 0,
	NECK                           = 1,
	NECKLENGTH                     = 2,
	CHEST                          = 3,
	SHOULDERS                      = 4,
	ARMLENGTH                      = 5,
	UPPERARM                       = 6,
	LOWERARM                       = 7,
	HAND                           = 8,
	LEGLENGTH                      = 9,
	UPPERLEG                       = 10,
	LOWERLEG                       = 11,
	FOOT                           = 12,
	HIP                            = 13,
	TORSO                          = 14,
	UPPERFACESIZE                  = 15,
	LOWERFACESIZE                  = 16,
	TORSODEPTH                     = 17,
	HEADHEIGHT                     = 18,
	HEADWIDTH                      = 19,
	HEADDEPTH                      = 20,
	TORSOHEIGHT                    = 21,
	TORSOSIZE                      = 22,
	OVERALLHEIGHT                  = 23,
	EYESIZE                        = 24,
	EYEWIDTH                       = 25,
	MAX                            = 26,
};

enum class ETooltipMode : uint8
{
	DEFAULT                        = 0,
	ONLY_ACTION                    = 1,
	OFF                            = 2,
	ETooltipMode_MAX               = 3,
};

enum class ENotificationMode : uint8
{
	DEFAULT                        = 0,
	MINIMAL                        = 1,
	COMBAT                         = 2,
	OFF                            = 3,
	ENotificationMode_MAX          = 4,
};

enum class EPlayerConfigDynamicMaterialVectorTypes : uint8
{
	BODYFAT_FATDEPOSITS            = 0,
	BODYMUSCLE_CHEST               = 1,
	BODYMUSCLE_BACK                = 2,
	BODYMUSCLE_ARMS_1              = 3,
	BODYMUSCLE_ARMS_2              = 4,
	BODYMUSCLE_LEGS_1              = 5,
	BODYMUSCLE_LEGS_2              = 6,
	MAX                            = 7,
};

enum class EPlayerConfigPlayerDynamicMaterialSliderTypes : uint8
{
	BODYFAT_CHEST                  = 0,
	BODYFAT_BELLY                  = 1,
	BODYFAT_BUTT                   = 2,
	BODYMUSCLE_CHEST_PECTORALS     = 3,
	BODYMUSCLE_CHEST_ABS           = 4,
	BODYMUSCLE_CHEST_OBLIQUES      = 5,
	BODYMUSCLE_BACK_NECK           = 6,
	BODYMUSCLE_BACK_TRAPEZIES      = 7,
	BODYMUSCLE_BACK_BACK           = 8,
	BODYMUSCLE_ARMS_1_DELTOID      = 9,
	BODYMUSCLE_ARMS_1_TRICEP       = 10,
	BODYMUSCLE_ARMS_1_BICEP        = 11,
	BODYMUSCLE_ARMS_2_FOREARM      = 12,
	BODYMUSCLE_LEGS_1_LATS         = 13,
	BODYMUSCLE_LEGS_1_GLUTES       = 14,
	BODYMUSCLE_LEGS_1_HAMSTRINGS   = 15,
	BODYMUSCLE_LEGS_2_ADDUCTORS    = 16,
	BODYMUSCLE_LEGS_2_QUADS        = 17,
	BODYMUSCLE_LEGS_2_CALVES       = 18,
	BODYMUSCLE_OVERALL             = 19,
	BODYFATOVERALL                 = 20,
	MAX                            = 21,
};

enum class EPlayerDynamicMaterialType : uint8
{
	Float                          = 0,
	Vector                         = 1,
	Color                          = 2,
	EPlayerDynamicMaterialType_MAX = 3,
};

enum class ETeamPingType : uint8
{
	SmartPing                      = 0,
	GoHere                         = 1,
	Tame                           = 2,
	Follow                         = 3,
	FollowMe                       = 4,
	Attack                         = 5,
	Danger                         = 6,
	LootIt                         = 7,
	Track                          = 8,
	Rallypoint                     = 9,
	ETeamPingType_MAX              = 10,
};

enum class ETribeGroupPermission : uint8
{
	STRUCTUREACTIVATE              = 0,
	INVENTORYACCESS                = 1,
	PET_ORDER                      = 2,
	PET_RIDE                       = 3,
	GENERAL_STRUCTUREDEMOLISH      = 4,
	GENERAL_STRUCTUREATTACHMENT    = 5,
	GENERAL_BUILDSTRUCTUREINRANGE  = 6,
	INVITEMEMBER                   = 7,
	PROMOTEMEMBER                  = 8,
	DEMOTEMEMBER                   = 9,
	BANISHMEMBER                   = 10,
	PET_UNCLAIM                    = 11,
	TELEPORT_MEMBERS               = 12,
	TELEPORT_DINOS                 = 13,
	PING                           = 14,
	RALLYPOINT                     = 15,
	WIRELESSCRAFTING               = 16,
	ETribeGroupPermission_MAX      = 17,
};

enum class EXPType : uint8
{
	XP_GENERIC                     = 0,
	XP_KILL                        = 1,
	XP_HARVEST                     = 2,
	XP_CRAFT                       = 3,
	XP_SPECIAL                     = 4,
	XP_ALPHAKILL                   = 5,
	XP_CAVEKILL                    = 6,
	XP_WILDKILL                    = 7,
	XP_BOSSKILL                    = 8,
	XP_TAMEDKILL                   = 9,
	XP_UNCLAIMEDKILL               = 10,
	XP_EXPLORERNOTE                = 11,
	MAX                            = 12,
};

enum class EDinoTamedOrder : uint8
{
	SetAggressionPassive           = 0,
	SetAggressionNeutral           = 1,
	SetAggressionAggressive        = 2,
	SetAggressionAttackTarget      = 3,
	ToggleFollowMe                 = 4,
	FollowMe                       = 5,
	StopFollowing                  = 6,
	CycleFollowDistance            = 7,
	SetAggressionPassiveFlee       = 8,
	LandingToMe                    = 9,
	MAX                            = 10,
};

enum class EPrimalItemStat : uint8
{
	GenericQuality                 = 0,
	Armor                          = 1,
	MaxDurability                  = 2,
	WeaponDamagePercent            = 3,
	WeaponClipAmmo                 = 4,
	HypothermalInsulation          = 5,
	Weight                         = 6,
	HyperthermalInsulation         = 7,
	MAX                            = 8,
};

enum class EPrimalItemType : uint8
{
	MiscConsumable                 = 0,
	Equipment                      = 1,
	Weapon                         = 2,
	Ammo                           = 3,
	Structure                      = 4,
	Resource                       = 5,
	Skin                           = 6,
	WeaponAttachment               = 7,
	Artifact                       = 8,
	MAX                            = 9,
};

enum class ELevelExperienceRampType : uint8
{
	Player                         = 0,
	DinoEasy                       = 1,
	DinoMedium                     = 2,
	DinoHard                       = 3,
	MAX                            = 4,
};

enum class EPrimalConsumableType : uint8
{
	Food                           = 0,
	Water                          = 1,
	Medicine                       = 2,
	Other                          = 3,
	MAX                            = 4,
};

enum class EPrimalCharacterStatusState : uint8
{
	Dead                           = 0,
	Winded                         = 1,
	Starvation                     = 2,
	Dehydration                    = 3,
	Suffocation                    = 4,
	Encumbered                     = 5,
	Hypothermia                    = 6,
	Hyperthermia                   = 7,
	Injured                        = 8,
	KnockedOut                     = 9,
	Sleeping                       = 10,
	Cold                           = 11,
	Hot                            = 12,
	Crafting                       = 13,
	MAX                            = 14,
};

enum class EPrimalItemMessage : uint8
{
	Broken                         = 0,
	Repaired                       = 1,
	MAX                            = 2,
};

enum class ETraceType : uint8
{
	TT_LineTrace                   = 0,
	TT_ArcTrace                    = 1,
	TT_Max                         = 2,
};

enum class EPrimalStructureElevatorState : uint8
{
	PSLS_Down                      = 0,
	PSLS_Up                        = 1,
	PSLS_MAX                       = 2,
};

enum class ESeedCropPhase : uint8
{
	Seedling                       = 0,
	Midling                        = 1,
	Growthling                     = 2,
	Fruiting                       = 3,
	MAX                            = 4,
};

enum class ECrateMovementMode : uint8
{
	None                           = 0,
	Regular                        = 1,
	Throttled                      = 2,
	ECrateMovementMode_MAX         = 3,
};

enum class EPrimalStructurePlacerState : uint8
{
	Default                        = 0,
	FadeAway                       = 1,
	PlacingStructure               = 2,
	EPrimalStructurePlacerState_MAX = 3,
};

enum class EHighlightStartingPoint : uint8
{
	TopLeft                        = 0,
	Center                         = 1,
	HighlightStartingPoint_MAX     = 2,
};

enum class EControlDirection : uint8
{
	NoDirection                    = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	ControlDirection_MAX           = 5,
};

enum class EWindSourceMode : uint8
{
	AtmosphericWind                = 0,
	FoliageInteraction             = 1,
	EWindSourceMode_MAX            = 2,
};

enum class EEffectScope : uint8
{
	FirstPersonOnly                = 0,
	ThirdPersonOnly                = 1,
	AllCameraModes                 = 2,
	EEffectScope_MAX               = 3,
};

enum class EWirelessTransmissionType : uint8
{
	Custom                         = 0,
	Power                          = 1,
	Water                          = 2,
	Fuel                           = 3,
	Ammo                           = 4,
	Crafting                       = 5,
	ItemTransfer                   = 6,
	EWirelessTransmissionType_MAX  = 7,
};

enum class EWorldBuffPropertyLocation : uint8
{
	GameMode                       = 0,
	GameState                      = 1,
	EWorldBuffPropertyLocation_MAX = 2,
};

enum class EWorldBuffDifficultyType : uint8
{
	GAMMA                          = 0,
	BETA                           = 1,
	ALPHA                          = 2,
	OTHER                          = 3,
	EWorldBuffDifficultyType_MAX   = 4,
};

enum class ECheatActorType : uint8
{
	Pawns                          = 0,
	Dino                           = 1,
	Player                         = 2,
	Tame                           = 3,
	Wild                           = 4,
	Structure                      = 5,
	MAX                            = 6,
};

enum class EHapticEffectType : uint8
{
	HET_MenuTick                   = 0,
	HET_MenuSelection              = 1,
	HET_RadialTick                 = 2,
	HET_RadialSelection            = 3,
	HET_MenuAnalogSweep            = 4,
	HET_StatLevelUp                = 5,
	HET_StructureFail              = 6,
	HET_StructureSuccess           = 7,
	HET_StructureDestroy           = 8,
	HET_StructureFlip              = 9,
	HET_ResourceGather             = 10,
	HET_EnterWater                 = 11,
	HET_StartFlying                = 12,
	HET_Explosion                  = 13,
	HET_BossTeleport               = 14,
	HET_BigDinoWalking             = 15,
	HET_MAX                        = 16,
};

enum class ETriggerEffectType : uint8
{
	None                           = 0,
	Feedback                       = 1,
	Weapon                         = 2,
	Slope                          = 3,
	Vibration                      = 4,
	VibrationSlope                 = 5,
	ETriggerEffectType_MAX         = 6,
};

enum class EPrimalStatsValueTypes : uint8
{
	TotalShots                     = 0,
	Misses                         = 1,
	HitsStructure                  = 2,
	HitsDinoBody                   = 3,
	HitsDinoCritical               = 4,
	HitsPlayerBody                 = 5,
	HitsPlayerCritical             = 6,
	MAX                            = 7,
};

enum class EPrimalGDKStat : uint8
{
	CreatureTamed                  = 0,
	KilledSurvivor                 = 1,
	PlayerDied                     = 2,
	PunchedTrees                   = 3,
	EPrimalGDKStat_MAX             = 4,
};

enum class EAimAssistType : uint8
{
	Off                            = 0,
	TargetingOn                    = 1,
	RangeWeaponAlwaysOn            = 2,
	EAimAssistType_MAX             = 3,
};

enum class EMissionState : uint8
{
	ServerSetup                    = 0,
	Activated                      = 1,
	Suspended                      = 2,
	Deactivated                    = 3,
	EMissionState_MAX              = 4,
};

enum class EGamePhase : uint8
{
	None                           = 0,
	Lobby_SOTF                     = 1,
	Match_SOTF                     = 2,
	EGamePhase_MAX                 = 3,
};

enum class EMissionTimerMode : uint8
{
	HideTimer                      = 0,
	ShowTimeRemaining              = 1,
	ShowTimeElapsed                = 2,
	UseBPGetMissionTimerText       = 3,
	EMissionTimerMode_MAX          = 4,
};

enum class ESpawnPattern : uint8
{
	Circle                         = 0,
	Grid                           = 1,
	Random                         = 2,
	ESpawnPattern_MAX              = 3,
};

enum class EMissionRelatedPropertyUsage : uint8
{
	Prefix                         = 0,
	Suffix                         = 1,
	Description                    = 2,
	EMissionRelatedPropertyUsage_MAX = 3,
};

enum class EMissionRelatedPropertyType : uint8
{
	Name_PropertyType              = 0,
	String_PropertyType            = 1,
	Boolean_PropertyType           = 2,
	Integer_PropertyType           = 3,
	Float_PropertyType             = 4,
	Double_PropertyType            = 5,
	EMissionRelatedPropertyType_MAX = 6,
};

enum class ESTOFNotificationType : uint8
{
	Death                          = 0,
	TribeEliminated                = 1,
	MatchVictory                   = 2,
	MatchDraw                      = 3,
	MAX                            = 4,
};

enum class EPrimalARKTributeDataType : uint8
{
	Items                          = 0,
	TamedDinos                     = 1,
	CharacterData                  = 2,
	MAX                            = 3,
};

enum class EPrimalCharacterStatusValue : uint8
{
	Health                         = 0,
	Stamina                        = 1,
	Torpidity                      = 2,
	Oxygen                         = 3,
	Food                           = 4,
	Water                          = 5,
	Temperature                    = 6,
	Weight                         = 7,
	MeleeDamageMultiplier          = 8,
	SpeedMultiplier                = 9,
	TemperatureFortitude           = 10,
	CraftingSpeedMultiplier        = 11,
	MAX                            = 12,
};

enum class EBoolExecResult : uint8
{
	Success                        = 0,
	Failed                         = 1,
	EBoolExecResult_MAX            = 2,
};

enum class ECameraStyle : uint8
{
	Default                        = 0,
	FirstPerson                    = 1,
	ThirdPerson                    = 2,
	FreeCam                        = 3,
	Orbit                          = 4,
	Spectator                      = 5,
	ECameraStyle_MAX               = 6,
};

enum class ETargetingTeamBehavior : uint8
{
	ExactMatch                     = 0,
	FriendlyWith                   = 1,
	PrioritizeButIncludeAny        = 2,
	ETargetingTeamBehavior_MAX     = 3,
};

enum class EChatMessageType : uint8
{
	MyMessage                      = 0,
	SameTeamMessage                = 1,
	DifferentTeamMessage           = 2,
	SystemWideMessage              = 3,
	SameAllianceMessage            = 4,
	AdminMessage                   = 5,
	MAX                            = 6,
};

enum class EChatType : uint8
{
	GlobalChat                     = 0,
	ProximityChat                  = 1,
	RadioChat                      = 2,
	GlobalTribeChat                = 3,
	AllianceChat                   = 4,
	MAX                            = 5,
};

enum class EChatSendMode : uint8
{
	GlobalChat                     = 0,
	GlobalTribeChat                = 1,
	LocalChat                      = 2,
	AllianceChat                   = 3,
	MAX                            = 4,
};

enum class EShooterPhysMaterialType : uint8
{
	Unknown                        = 0,
	Concrete                       = 1,
	Dirt                           = 2,
	Water                          = 3,
	Metal                          = 4,
	Wood                           = 5,
	Grass                          = 6,
	Glass                          = 7,
	Flesh                          = 8,
	Leaves                         = 9,
	Rock                           = 10,
	Sand                           = 11,
	Snow                           = 12,
	Corruption                     = 13,
	Lava                           = 14,
	Acid                           = 15,
	MAX                            = 16,
};

enum class EPlayerActionIndex : uint8
{
	None                           = 0,
	WhistleFollow                  = 1,
	WhistleFollowOne               = 2,
	WhistleStop                    = 3,
	WhistleStopOne                 = 4,
	WhistleAggressive              = 5,
	WhistleNeutral                 = 6,
	WhistlePassive                 = 7,
	WhistlePassiveFlee             = 8,
	WhistleAttackTarget            = 9,
	WhistleAttackThisTarget        = 10,
	WhistleLandFlyerOne            = 11,
	ShowInventory                  = 12,
	ShowCraftables                 = 13,
	ShowTribeManager               = 14,
	Poop                           = 15,
	UnHideCompanion                = 16,
	ShowEmoteSelection             = 17,
	Back_WhistleList               = 18,
	Emote_HatSwitch                = 19,
	Emote_Salute                   = 20,
	Emote_Sorry                    = 21,
	Emote_Thank                    = 22,
	Emote_Wave                     = 23,
	Emote_Laugh                    = 24,
	Emote_Yes                      = 25,
	Emote_No                       = 26,
	Emote_Taunt                    = 27,
	Emote_Cheer                    = 28,
	Emote_FriendlyLowerHands       = 29,
	Emote_MAX                      = 30,
	EPlayerActionIndex_MAX         = 31,
};

enum class EMissionAlertType : uint8
{
	Positive                       = 0,
	Neutral                        = 1,
	Negative                       = 2,
	EMissionAlertType_MAX          = 3,
};

enum class EPhaseRequirementWidgetVisualState : uint8
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	Custom                         = 3,
	EPhaseRequirementWidgetVisualState_MAX = 4,
};

enum class ELootItemType : uint8
{
	None                           = 0,
	Element                        = 1,
	Hexagons                       = 2,
	ResourceCommon                 = 3,
	ResourceUncommon               = 4,
	ResourceRare                   = 5,
	ArmorTier1                     = 6,
	ArmorTier2                     = 7,
	ArmorTier3                     = 8,
	ArmorTek                       = 9,
	WeaponTier1                    = 10,
	WeaponTier2                    = 11,
	WeaponTier3                    = 12,
	WeaponTek                      = 13,
	AmmoTier1                      = 14,
	AmmoTier2                      = 15,
	AmmoTier3                      = 16,
	Saddle                         = 17,
	ELootItemType_MAX              = 18,
};

enum class ESimpleCurve : uint8
{
	Linear                         = 0,
	Pow0_5                         = 1,
	Pow1_0                         = 2,
	Pow1_5                         = 3,
	Pow2_0                         = 4,
	Pow2_5                         = 5,
	Pow3_0                         = 6,
	Pow3_5                         = 7,
	PowCos0_5                      = 8,
	PowCos1_0                      = 9,
	PowCos1_5                      = 10,
	PowCos2_0                      = 11,
	PowCos2_5                      = 12,
	PowCos3_0                      = 13,
	PowCos3_5                      = 14,
	PowSin0_5                      = 15,
	PowSin1_0                      = 16,
	PowSin1_5                      = 17,
	PowSin2_0                      = 18,
	PowSin2_5                      = 19,
	PowSin3_0                      = 20,
	PowSin3_5                      = 21,
	PowMinCos0_5                   = 22,
	PowMinCos1_0                   = 23,
	PowMinCos1_5                   = 24,
	PowMinCos2_0                   = 25,
	PowMinCos2_5                   = 26,
	PowMinCos3_0                   = 27,
	PowMinCos3_5                   = 28,
	PowMax0_5                      = 29,
	PowMax1_0                      = 30,
	PowMax1_5                      = 31,
	PowMax2_0                      = 32,
	PowMax2_5                      = 33,
	PowMax3_0                      = 34,
	PowMax3_5                      = 35,
	ESimpleCurve_MAX               = 36,
};

enum class EHUDElementType : uint8
{
	Text                           = 0,
	ProgressBar                    = 1,
	Image                          = 2,
	EHUDElementType_MAX            = 3,
};

enum class EHUDElementAnchorMode : uint8
{
	Specified                      = 0,
	QuickbarLeft                   = 1,
	QuickbarRight                  = 2,
	QuickbarTop                    = 3,
	EHUDElementAnchorMode_MAX      = 4,
};

enum class EStencilAlliance : uint8
{
	None                           = 0,
	Friendly                       = 1,
	NPC                            = 2,
	NPCFleeing                     = 3,
	Hostile                        = 4,
	Ally                           = 5,
	Element                        = 6,
	EStencilAlliance_MAX           = 7,
};

enum class EHUDElementHorizontalAlignment : uint8
{
	Center                         = 0,
	Left                           = 1,
	Right                          = 2,
	EHUDElementHorizontalAlignment_MAX = 3,
};

enum class EHUDElementVerticalAlignment : uint8
{
	Center                         = 0,
	Top                            = 1,
	Bottom                         = 2,
	EHUDElementVerticalAlignment_MAX = 3,
};

enum class ELeaderboardColumnName : uint8
{
	MissionTag                     = 0,
	PlayerNetId                    = 1,
	TribeId                        = 2,
	TimestampUtc                   = 3,
	FloatValue                     = 4,
	IntValue                       = 5,
	NameValue                      = 6,
	StringValue                    = 7,
	ELeaderboardColumnName_MAX     = 8,
};

enum class ELeaderboardGroupByMode : uint8
{
	None                           = 0,
	First                          = 1,
	Min                            = 2,
	Max                            = 3,
	Sum                            = 4,
	Count                          = 5,
	Average                        = 6,
};

enum class ELeaderboardOrdering : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	ELeaderboardOrdering_MAX       = 2,
};

enum class EMassTeleportState : uint8
{
	INITIATED                      = 0,
	TRIGGERED_SUCCESS              = 1,
	TRIGGERED_FAILED               = 2,
	COMPLETED                      = 3,
	CANCELLED                      = 4,
	EMassTeleportState_MAX         = 5,
};

enum class EDLCSelector : uint8
{
	DLCScorchedEarth               = 0,
	DLCAberration                  = 1,
	DLCExtinction                  = 2,
	DLCCrystalIsles                = 3,
	DLCGenesis                     = 4,
	DLCGen2                        = 5,
	DLCTheCenter                   = 6,
	DLCRagnarok                    = 7,
	DLCLostIsland                  = 8,
	DLCValguero                    = 9,
	DLCFjordur                     = 10,
	DLCSelectorMax                 = 11,
	EDLCSelector_MAX               = 12,
};

enum class EDinoInputAction : uint8
{
	Fire                           = 0,
	Target                         = 1,
	Crouch                         = 2,
	EDinoInputAction_MAX           = 3,
};

enum class ECameraSetting_BoolCondition : uint8
{
	Dont_Care                      = 0,
	Yes                            = 1,
	No                             = 2,
	ECameraSetting_MAX             = 3,
};

enum class ECDOArrayModificationType : uint8
{
	MODIFY                         = 0,
	ADD                            = 1,
	REMOVE                         = 2,
	REPLACE_TARRAY                 = 3,
	ECDOArrayModificationType_MAX  = 4,
};

enum class ETrackedActorCategory : uint8
{
	NoCategory                     = 0,
	Creatures                      = 1,
	Allies                         = 2,
	Teammates                      = 3,
	MAX                            = 4,
};

enum class EFieldActivationType_New : uint8
{
	Delay                          = 0,
	OnTick                         = 1,
	OnTickWithDelay                = 2,
	Trigger                        = 3,
	MAX                            = 4,
};

enum class EPrimalCameraState : uint8
{
	OLD_CAMERA                     = 0,
	ASA_CAMERA                     = 1,
	NORMAL_INTERP_TO_OLD_CAMERA    = 2,
	NORMAL_INTERP_TO_ASA_CAMERA    = 3,
	WAITING_TO_SWITCH_TO_OLD_CAMERA_SLOW = 4,
	SLOW_INTERP_TO_OLD_CAMERA      = 5,
	EPrimalCameraState_MAX         = 6,
};

enum class EWeaponState : uint8
{
	Idle                           = 0,
	Firing                         = 1,
	Reloading                      = 2,
	Equipping                      = 3,
	UnEquipping                    = 4,
	EWeaponState_MAX               = 5,
};

enum class EWeaponAmmoReloadState : uint8
{
	Playing_Anim                   = 0,
	Waiting_For_Ammo               = 1,
	Ready                          = 2,
	EWeaponAmmoReloadState_MAX     = 3,
};

enum class EDomeState : uint8
{
	NotADome                       = 0,
	Inside                         = 1,
	Outside                        = 2,
	EDomeState_MAX                 = 3,
};

enum class EHubSubMenu : uint8
{
	Inventory                      = 0,
	Engrams                        = 1,
	TribeManager                   = 2,
	TrackedDinoList                = 3,
	SurvivalProfile                = 4,
	MissionList                    = 5,
	Minimap                        = 6,
	MAX                            = 7,
};

enum class EDropItemIconAction : uint8
{
	DA_NoAction                    = 0,
	DA_Equip                       = 1,
	DA_UnEquip                     = 2,
	DA_AddToSlot                   = 3,
	DA_RemoveFromSlot              = 4,
	DA_ToRemoteInv                 = 5,
	DA_FromRemoteInv               = 6,
	DA_RemoteEquip                 = 7,
	DA_MergeItemStack              = 8,
	DA_SplitItemStack              = 9,
	DA_SwapItems                   = 10,
	DA_UseWithItem                 = 11,
	DA_UnEquipTransferToLocal      = 12,
	DA_RemoveItemSkin              = 13,
	DA_SplitItemStackOne           = 14,
	DA_RemoveWeaponAmmo            = 15,
	DA_FromRemoteInvToSlot         = 16,
	DA_ToRemoteInvFromSlot         = 17,
	DA_EquipLocalFromRemote        = 18,
	DA_EquipRemoteFromLocal        = 19,
	DA_UnequipRemote               = 20,
	DA_UnequipTransferToRemote     = 21,
	DA_ToArkInv                    = 22,
	DA_FromArkInv                  = 23,
	MAX                            = 24,
};

enum class EListDisplay : uint8
{
	MISSIONS                       = 0,
	EFFECTS                        = 1,
	EListDisplay_MAX               = 2,
};

enum class EDataDisplay : uint8
{
	MISSION_INFO                   = 0,
	LEADERBOARDS                   = 1,
	EDataDisplay_MAX               = 2,
};

enum class EServerOctreeGroup : uint8
{
	STASISCOMPONENTS               = 0,
	PLAYERPAWNS                    = 1,
	DINOPAWNS                      = 2,
	PAWNS                          = 3,
	STRUCTURES                     = 4,
	TARGETABLEACTORS               = 5,
	PLAYERS_CONNECTED              = 6,
	SPATIALNETWORKEDACTORS         = 7,
	SPATIALNETWORKEDACTORS_DORMANT = 8,
	ALL_SPATIAL                    = 9,
	THERMALSTRUCTURES              = 10,
	STRUCTURES_CORE                = 11,
	DINOPAWNS_TAMED                = 12,
	PLAYERS_AND_TAMED_DINOS        = 13,
	PLAYERS_CONNECTED_AND_TAMED_DINOS = 14,
	DINOFOODCONTAINER              = 15,
	GRENADES                       = 16,
	TREESAPTAPS                    = 17,
	LARGEUNSTASISRANGE             = 18,
	TRAPS                          = 19,
	MAX                            = 20,
};

enum class EEditorMessageLogLevel : uint8
{
	Error                          = 0,
	Warning                        = 1,
	Info                           = 2,
	Success                        = 3,
	EEditorMessageLogLevel_MAX     = 4,
};

enum class EPlayMovieVolumeType : uint8
{
	Default                        = 0,
	Music                          = 1,
	Character                      = 2,
	Voice                          = 3,
	EPlayMovieVolumeType_MAX       = 4,
};

enum class EColorChannelTarget : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	All                            = 4,
	EColorChannelTarget_MAX        = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.SoundWaveAnimTexturePairs
struct FSoundWaveAnimTexturePairs
{
public:
	struct FSoftObjectPath                       LocalizedSoundWave;                                // 0x0(0x20)(BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       MatchingAnimTexture;                               // 0x20(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.LocalizedSoundWaveAnimTexturePairArrays
struct FLocalizedSoundWaveAnimTexturePairArrays
{
public:
	class FString                                TwoLetterISOLanguageName;                          // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FSoundWaveAnimTexturePairs>    SoundWaveAnimTexturePairs;                         // 0x10(0x10)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.CompanionReactionData
struct FCompanionReactionData
{
public:
	int32                                        ReactionPriority;                                  // 0x0(0x4)(None)
	uint8                                        ReactionType;                                      // 0x4(0x1)(None)
	uint8                                        Pad_4752[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReactionTimePadding_Start;                         // 0x8(0x4)(None)
	float                                        ReactionTimePadding_End;                           // 0xC(0x4)(None)
	float                                        ForceReactionDuration;                             // 0x10(0x4)(None)
	uint8                                        Pad_4753[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ReactionAnim;                                      // 0x18(0x8)(ZeroConstructor)
	float                                        ReactionStartDelay_Anim;                           // 0x20(0x4)(None)
	float                                        ReactionForceDuration_Anim;                        // 0x24(0x4)(None)
	class UParticleSystem*                       ReactionVFX;                                       // 0x28(0x8)(None)
	float                                        ReactionStartDelay_VFX;                            // 0x30(0x4)(None)
	float                                        ReactionForceDuration_VFX;                         // 0x34(0x4)(None)
	TArray<struct FSoftObjectPath>               ReactionSFXArray;                                  // 0x38(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        ReactionStartDelay_SFX;                            // 0x48(0x4)(None)
	float                                        ReactionForceDuration_SFX;                         // 0x4C(0x4)(None)
	uint8                                        bReactionIsMonologue : 1;                          // Mask: 0x1, PropSize: 0x10x50(0x1)(None)
	uint8                                        bIsReactionPlaying : 1;                            // Mask: 0x2, PropSize: 0x10x50(0x1)(None)
	uint8                                        bIsReactionPlaying_Anim : 1;                       // Mask: 0x4, PropSize: 0x10x50(0x1)(None)
	uint8                                        bIsReactionPlaying_VFX : 1;                        // Mask: 0x8, PropSize: 0x10x50(0x1)(None)
	uint8                                        bIsReactionPlaying_SFX : 1;                        // Mask: 0x10, PropSize: 0x10x50(0x1)(None)
	uint8                                        BitPad_3D6 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4754[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReactionStartTime;                                 // 0x58(0x8)(None)
	double                                       ReactionEndTime;                                   // 0x60(0x8)(None)
	float                                        RequiredSecondsSincePreviousReactionInOrderToBePlayed; // 0x68(0x4)(None)
	uint8                                        bDontCancelWhenGreaterOrEqualPriorityPlays : 1;    // Mask: 0x1, PropSize: 0x10x6C(0x1)(None)
	uint8                                        BitPad_3D7 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4755[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToOccur;                                     // 0x70(0x4)(None)
	uint8                                        Pad_4756[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       FallbackSharedAnimTexture;                         // 0x78(0x20)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> LocalizedSoundWaves;                               // 0x98(0x10)(None)
	int32                                        ExplorerNoteIndexToUnlock;                         // 0xA8(0x4)(None)
	uint8                                        Pad_4757[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ShooterGame.TribeGovernment
struct FTribeGovernment
{
public:
	int32                                        TribeGovern_PINCode;                               // 0x0(0x4)(None)
	int32                                        TribeGovern_DinoOwnership;                         // 0x4(0x4)(None)
	int32                                        TribeGovern_StructureOwnership;                    // 0x8(0x4)(None)
	int32                                        TribeGovern_DinoTaming;                            // 0xC(0x4)(None)
	int32                                        TribeGovern_DinoUnclaimAdminOnly;                  // 0x10(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ShooterGame.ArkTributeEntity
struct FArkTributeEntity
{
public:
	int32                                        UploadTime;                                        // 0x0(0x4)(None)
};

// 0x11C (0x120 - 0x4)
// ScriptStruct ShooterGame.ArkTributePlayerData
struct FArkTributePlayerData : public FArkTributeEntity
{
public:
	uint8                                        Pad_4758[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       PlayerDataID;                                      // 0x8(0x8)(None)
	TArray<uint8>                                PlayerDataBytes;                                   // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                PlayerName;                                        // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                PlayerStats[0xC];                                  // 0x30(0xC0)(Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                UploadingServerMapName;                            // 0xF0(0x10)(ContainsInstancedReference, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                UploadingServerName;                               // 0x100(0x10)(None)
	bool                                         bWasAllowDPCUpload;                                // 0x110(0x1)(None)
	bool                                         bWithItems;                                        // 0x111(0x1)(None)
	uint8                                        Pad_4759[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ItemCount;                                         // 0x114(0x4)(None)
	bool                                         bForServerTransfer;                                // 0x118(0x1)(None)
	uint8                                        Pad_475A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Version;                                           // 0x11C(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.ItemNetID
struct FItemNetID
{
public:
	uint32                                       ItemID1;                                           // 0x0(0x4)(None)
	uint32                                       ItemID2;                                           // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CustomItemByteArray
struct FCustomItemByteArray
{
public:
	TArray<uint8>                                Bytes;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CustomItemByteArrays
struct FCustomItemByteArrays
{
public:
	TArray<struct FCustomItemByteArray>          ByteArrays;                                        // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CustomItemDoubles
struct FCustomItemDoubles
{
public:
	TArray<double>                               Doubles;                                           // 0x0(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.CustomItemData
struct FCustomItemData
{
public:
	class FName                                  CustomDataName;                                    // 0x0(0x8)(None)
	TArray<class FString>                        CustomDataStrings;                                 // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<float>                                CustomDataFloats;                                  // 0x18(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       CustomDataObjects;                                 // 0x28(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        CustomDataClasses;                                 // 0x38(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<class FName>                          CustomDataNames;                                   // 0x48(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FCustomItemByteArrays                 CustomDataBytes;                                   // 0x58(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FCustomItemDoubles                    CustomDataDoubles;                                 // 0x68(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CraftingResourceRequirement
struct FCraftingResourceRequirement
{
public:
	float                                        BaseResourceRequirement;                           // 0x0(0x4)(None)
	uint8                                        Pad_475B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ResourceItemType;                                  // 0x8(0x8)(None)
	bool                                         bCraftingRequireExactResourceType;                 // 0x10(0x1)(None)
	uint8                                        Pad_475C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoAncestorsEntry
struct FDinoAncestorsEntry
{
public:
	class FString                                MaleName;                                          // 0x0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint32                                       MaleDinoID1;                                       // 0x10(0x4)(None)
	uint32                                       MaleDinoID2;                                       // 0x14(0x4)(None)
	class FString                                FemaleName;                                        // 0x18(0x10)(None)
	uint32                                       FemaleDinoID1;                                     // 0x28(0x4)(None)
	uint32                                       FemaleDinoID2;                                     // 0x2C(0x4)(None)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct ShooterGame.ItemNetInfo
struct FItemNetInfo
{
public:
	class UClass*                                ItemArchetype;                                     // 0x0(0x8)(ZeroConstructor)
	struct FItemNetID                            ItemID;                                            // 0x8(0x8)(None)
	uint32                                       ItemQuantity;                                      // 0x10(0x4)(None)
	int32                                        CustomItemID;                                      // 0x14(0x4)(None)
	int32                                        SlotIndex;                                         // 0x18(0x4)(None)
	uint8                                        Pad_475D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CreationTime;                                      // 0x20(0x8)(None)
	class FString                                CustomItemName;                                    // 0x28(0x10)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CustomItemDescription;                             // 0x38(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	double                                       UploadEarliestValidTime;                           // 0x48(0x8)(None)
	TArray<uint64>                               SteamUserItemID;                                   // 0x50(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        bIsBlueprint : 1;                                  // Mask: 0x1, PropSize: 0x10x60(0x1)(None)
	uint8                                        bIsEngram : 1;                                     // Mask: 0x2, PropSize: 0x10x60(0x1)(None)
	uint8                                        bIsCustomRecipe : 1;                               // Mask: 0x4, PropSize: 0x10x60(0x1)(None)
	uint8                                        bIsFoodRecipe : 1;                                 // Mask: 0x8, PropSize: 0x10x60(0x1)(None)
	uint8                                        bIsRepairing : 1;                                  // Mask: 0x10, PropSize: 0x10x60(0x1)(None)
	uint8                                        bAllowRemovalFromInventory : 1;                    // Mask: 0x20, PropSize: 0x10x60(0x1)(None)
	uint8                                        bHideFromInventoryDisplay : 1;                     // Mask: 0x40, PropSize: 0x10x60(0x1)(None)
	uint8                                        bAllowRemovalFromSteamInventory : 1;               // Mask: 0x80, PropSize: 0x10x60(0x1)(None)
	uint8                                        bFromSteamInventory : 1;                           // Mask: 0x1, PropSize: 0x10x61(0x1)(None)
	uint8                                        bIsFromAllClustersInventory : 1;                   // Mask: 0x2, PropSize: 0x10x61(0x1)(None)
	uint8                                        bForcePreventGrinding : 1;                         // Mask: 0x4, PropSize: 0x10x61(0x1)(None)
	uint8                                        bIsEquipped : 1;                                   // Mask: 0x8, PropSize: 0x10x61(0x1)(None)
	uint8                                        bIsSlot : 1;                                       // Mask: 0x10, PropSize: 0x10x61(0x1)(None)
	uint8                                        bIsInitialItem : 1;                                // Mask: 0x20, PropSize: 0x10x61(0x1)(None)
	uint8                                        BitPad_3D8 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_475E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       CraftQueue;                                        // 0x64(0x2)(None)
	uint8                                        Pad_475F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NextCraftCompletionTime;                           // 0x68(0x8)(None)
	float                                        CraftingSkill;                                     // 0x70(0x4)(None)
	float                                        CraftedSkillBonus;                                 // 0x74(0x4)(None)
	class FString                                CrafterCharacterName;                              // 0x78(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CrafterTribeName;                                  // 0x88(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	uint32                                       WeaponClipAmmo;                                    // 0x98(0x4)(None)
	float                                        ItemDurability;                                    // 0x9C(0x4)(None)
	float                                        ItemRating;                                        // 0xA0(0x4)(None)
	uint32                                       ExpirationTimeUTC;                                 // 0xA4(0x4)(None)
	uint8                                        ItemQualityIndex;                                  // 0xA8(0x1)(None)
	uint8                                        Pad_4760[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemCustomClass;                                   // 0xB0(0x8)(ZeroConstructor)
	uint16                                       ItemStatValues[0x8];                               // 0xB8(0x10)(None)
	int16                                        ItemColorID[0x6];                                  // 0xC8(0xC)(None)
	uint8                                        Pad_4761[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemSkinTemplate;                                  // 0xD8(0x8)(ZeroConstructor)
	TArray<struct FCustomItemData>               CustomItemDatas;                                   // 0xE0(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FColor>                        CustomItemColors;                                  // 0xF0(0x10)(AutoWeak, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FCraftingResourceRequirement>  CustomResourceRequirements;                        // 0x100(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	double                                       NextSpoilingTime;                                  // 0x110(0x8)(None)
	double                                       LastSpoilingTime;                                  // 0x118(0x8)(None)
	uint64                                       OwnerPlayerDataId;                                 // 0x120(0x8)(None)
	TWeakObjectPtr<class AShooterCharacter>      LastOwnerPlayer;                                   // 0x128(0x8)(None)
	double                                       LastAutoDurabilityDecreaseTime;                    // 0x130(0x8)(None)
	float                                        ItemStatClampsMultiplier;                          // 0x138(0x4)(None)
	uint8                                        Pad_4762[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OriginalItemDropLocation;                          // 0x140(0x18)(None)
	int16                                        PreSkinItemColorID[0x6];                           // 0x158(0xC)(None)
	uint8                                        EggNumberOfLevelUpPointsApplied[0xC];              // 0x164(0xC)(None)
	uint8                                        EggNumberMutationsApplied[0xC];                    // 0x170(0xC)(None)
	float                                        EggTamedIneffectivenessModifier;                   // 0x17C(0x4)(None)
	uint8                                        EggColorSetIndices[0x6];                           // 0x180(0x6)(None)
	uint8                                        Pad_4763[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EggGenderOverride;                                 // 0x188(0x4)(None)
	uint8                                        ItemVersion;                                       // 0x18C(0x1)(None)
	uint8                                        Pad_4764[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ClusterSpoilingTimeUTC;                            // 0x190(0x8)(None)
	TArray<struct FDinoAncestorsEntry>           EggDinoAncestors;                                  // 0x198(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FDinoAncestorsEntry>           EggDinoAncestorsMale;                              // 0x1A8(0x10)(None)
	int32                                        EggRandomMutationsFemale;                          // 0x1B8(0x4)(None)
	int32                                        EggRandomMutationsMale;                            // 0x1BC(0x4)(None)
	uint8                                        ItemProfileVersion;                                // 0x1C0(0x1)(None)
	bool                                         bNetInfoFromClient;                                // 0x1C1(0x1)(None)
	uint8                                        Pad_4765[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.IntArray
struct FIntArray
{
public:
	TArray<int32>                                Array;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.StringArray
struct FStringArray
{
public:
	TArray<class FString>                        Array;                                             // 0x0(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.AhoCorasickState
struct FAhoCorasickState
{
public:
	uint8                                        Pad_4768[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Failure;                                           // 0x50(0x4)(None)
	uint8                                        Pad_4769[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Goto;                                              // 0x58(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.AhoCorasickMatcher
struct FAhoCorasickMatcher
{
public:
	TArray<struct FAhoCorasickState>             States;                                            // 0x0(0x10)(None)
	int32                                        MaxC;                                              // 0x10(0x4)(None)
	uint8                                        Pad_476A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerAllClustersInventory
struct FPlayerAllClustersInventory
{
public:
	uint8                                        Pad_476D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_ApplyBoneMods
struct FAnimNode_ApplyBoneMods : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_476F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_FemaleBoneMods
struct FAnimNode_FemaleBoneMods : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_477D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_FixVirtualBones
struct FAnimNode_FixVirtualBones : public FAnimNode_SkeletalControlBase
{
public:
	bool                                         bIgnoreOnDedicatedServer;                          // 0xC8(0x1)(None)
	bool                                         bAllowUpdatingOutsideOfGameWorld;                  // 0xC9(0x1)(None)
	uint8                                        Pad_477F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                VirtualBonesToFix;                                 // 0xD0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FBoneReference>                VirtualBoneTargets;                                // 0xE0(0x10)(None)
};

// 0x88 (0x150 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_GroundBones
struct FAnimNode_GroundBones : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        bDebug : 1;                                        // Mask: 0x1, PropSize: 0x10xC8(0x1)(None)
	uint8                                        Pad_4780[0x87];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_ModifyBones
struct FAnimNode_ModifyBones : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_4781[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_MultiFabrik
struct FAnimNode_MultiFabrik : public FAnimNode_SkeletalControlBase
{
public:
	float                                        Precision;                                         // 0xC8(0x4)(None)
	bool                                         bEnableDebugDraw;                                  // 0xCC(0x1)(None)
	uint8                                        Pad_4782[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NodeName;                                          // 0xD0(0x8)(None)
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_MultiFabrik_Dinos
struct FAnimNode_MultiFabrik_Dinos : public FAnimNode_SkeletalControlBase
{
public:
	float                                        Precision;                                         // 0xC8(0x4)(None)
	bool                                         bEnableDebugDraw;                                  // 0xCC(0x1)(None)
	uint8                                        Pad_4783[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RootOffset;                                        // 0xD0(0x4)(None)
	uint8                                        Pad_4784[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RootRotationOffset;                                // 0xD8(0x18)(None)
	bool                                         bInitOffset;                                       // 0xF0(0x1)(None)
	uint8                                        Pad_4785[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TransactionLogData
struct FTransactionLogData
{
public:
	uint8                                        Pad_4786[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.BattleTribeData
struct FBattleTribeData
{
public:
	class FString                                TribeName;                                         // 0x0(0x10)(None)
	int32                                        TribeID;                                           // 0x10(0x4)(None)
	uint8                                        Pad_4788[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.BattlePlayerData
struct FBattlePlayerData
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(None)
	bool                                         bConnected;                                        // 0x10(0x1)(None)
	bool                                         bAlive;                                            // 0x11(0x1)(None)
	uint8                                        Pad_478B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TribeID;                                           // 0x14(0x4)(None)
	int32                                        PlayerID;                                          // 0x18(0x4)(None)
	uint8                                        Pad_478D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStructReplicated
struct FPrimalPlayerCharacterConfigStructReplicated
{
public:
	uint8                                        bIsFemale : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3D9 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_478E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BodyColors[0x4];                                   // 0x4(0x40)(None)
	uint8                                        Pad_478F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerCharacterName;                               // 0x48(0x10)(None)
	uint8                                        FacialHairIndex;                                   // 0x58(0x1)(None)
	uint8                                        HeadHairIndex;                                     // 0x59(0x1)(None)
	uint8                                        EyebrowIndex;                                      // 0x5A(0x1)(None)
	uint8                                        Pad_4790[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentOfFullHeadHairGrowth;                       // 0x5C(0x4)(None)
	float                                        PercentOfFullFacialHairGrowth;                     // 0x60(0x4)(None)
	float                                        RawBoneModifiers[0x1A];                            // 0x64(0x68)(None)
	int32                                        PlayerSpawnRegionIndex;                            // 0xCC(0x4)(None)
	uint8                                        OverrideHeadHairColor[0x2];                        // 0xD0(0x2)(None)
	uint8                                        OverrideFacialHairColor[0x2];                      // 0xD2(0x2)(None)
	uint8                                        DynamicMaterialBytes[0x32];                        // 0xD4(0x32)(None)
	uint8                                        Pad_4791[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerVoiceCollectionIndex;                        // 0x108(0x4)(None)
	uint8                                        bUsingCustomPlayerVoiceCollection : 1;             // Mask: 0x1, PropSize: 0x10x10C(0x1)(None)
	uint8                                        Pad_4792[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PlayerDeathNotification
struct FPlayerDeathNotification
{
public:
	class FString                                PlayerDeathStringEnemy;                            // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                PlayerDeathStringAlly;                             // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                PlayerDeathStringYou;                              // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DeathReason;                                       // 0x30(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        DeadPlayerNames;                                   // 0x40(0x10)(ContainsInstancedReference, BlueprintCallable, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bIsTribeDeath;                                     // 0x50(0x1)(None)
	uint8                                        Pad_4793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeathTribeName;                                    // 0x58(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        TargetingTeam;                                     // 0x68(0x4)(None)
	uint8                                        Pad_4794[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        LinkedPlayerID;                                    // 0x70(0x8)(None)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                       // 0x78(0x10)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.BiomeZoneImpactEffect
struct FBiomeZoneImpactEffect
{
public:
	class UClass*                                SpawnActors[0x10];                                 // 0x0(0x80)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DecalData
struct FDecalData
{
public:
	class UMaterialInterface*                    DecalMaterial;                                     // 0x0(0x8)(None)
	float                                        DecalSize;                                         // 0x8(0x4)(None)
	float                                        DecalDepth;                                        // 0xC(0x4)(None)
	float                                        DecalImpactNormalOffset;                           // 0x10(0x4)(None)
	float                                        LifeSpan;                                          // 0x14(0x4)(None)
	float                                        RandomAngleRange;                                  // 0x18(0x4)(None)
	uint8                                        Pad_4795[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.BiomeZoneVolumeEffect
struct FBiomeZoneVolumeEffect
{
public:
	enum class EBiomeZone                        BiomeZone;                                         // 0x0(0x1)(None)
	uint8                                        Pad_4796[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ParticleSystem;                                    // 0x8(0x8)(ZeroConstructor)
	struct FDecalData                            DecalData;                                         // 0x10(0x20)(None)
	uint8                                        bIsImpactEffect : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        bIsNonImpactEffect : 1;                            // Mask: 0x2, PropSize: 0x10x30(0x1)(None)
	uint8                                        bIsUnderwaterEffect : 1;                           // Mask: 0x4, PropSize: 0x10x30(0x1)(None)
	uint8                                        bDecalUniformSize : 1;                             // Mask: 0x8, PropSize: 0x10x30(0x1)(None)
	uint8                                        BitPad_3DA : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4797[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x34(0x4)(None)
	float                                        MinSpawnDistance;                                  // 0x38(0x4)(None)
	float                                        MaxSpawnDistance;                                  // 0x3C(0x4)(None)
	float                                        ScaleAtMinDistance;                                // 0x40(0x4)(None)
	float                                        ScaleAtMaxDistance;                                // 0x44(0x4)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.ShooterWeaponDBEntry
struct FShooterWeaponDBEntry
{
public:
	class UClass*                                WeaponAmmoItemTemplate;                            // 0x0(0x8)(ZeroConstructor)
	int32                                        WeaponConfig_AmmoPerClip;                          // 0x8(0x4)(None)
	uint8                                        WeaponConfig_bShowAmmoInClipAsPercent : 1;         // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        WeaponConfig_bUsesAmmo : 1;                        // Mask: 0x2, PropSize: 0x10xC(0x1)(None)
	uint8                                        WeaponConfig_bFullReloadFromSingleItem : 1;        // Mask: 0x4, PropSize: 0x10xC(0x1)(None)
	uint8                                        bCanBeUsedAsEquipment : 1;                         // Mask: 0x8, PropSize: 0x10xC(0x1)(None)
	uint8                                        bForceAllowMountedWeaponry : 1;                    // Mask: 0x10, PropSize: 0x10xC(0x1)(None)
	uint8                                        bAllowUseWhileRidingDino : 1;                      // Mask: 0x20, PropSize: 0x10xC(0x1)(None)
	uint8                                        bForcePreventUseWhileRidingDino : 1;               // Mask: 0x40, PropSize: 0x10xC(0x1)(None)
	uint8                                        bOnlyUseOnSeatingStructure : 1;                    // Mask: 0x80, PropSize: 0x10xC(0x1)(None)
	uint8                                        bAllowUseOnSeatingStructure : 1;                   // Mask: 0x1, PropSize: 0x10xD(0x1)(None)
	uint8                                        bOnlyAllowUseWhenRidingDino : 1;                   // Mask: 0x2, PropSize: 0x10xD(0x1)(None)
	uint8                                        bUseBPCanEquip : 1;                                // Mask: 0x4, PropSize: 0x10xD(0x1)(None)
	uint8                                        bDontActuallyConsumeItemAmmo : 1;                  // Mask: 0x8, PropSize: 0x10xD(0x1)(None)
	uint8                                        bPreventEquippingUnderwater : 1;                   // Mask: 0x10, PropSize: 0x10xD(0x1)(None)
	uint8                                        BitPad_3DB : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4798[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MeleeAttackUsableHarvestDamageMultiplier;          // 0x10(0x4)(None)
	uint8                                        Pad_4799[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MeleeAttackUsableHarvestDamageType;                // 0x18(0x8)(ZeroConstructor)
	class UClass*                                MeleeDamageType;                                   // 0x20(0x8)(ZeroConstructor)
	float                                        ItemDurabilityToConsumePerMeleeHit;                // 0x28(0x4)(None)
	float                                        MeleeDamageAmount;                                 // 0x2C(0x4)(None)
	TSoftClassPtr<class AShooterProjectile>      ProjectileClass;                                   // 0x30(0x30)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSet<TSoftClassPtr<class AShooterWeapon>>    IsChildClassOf;                                    // 0x60(0x50)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.PrimalDinoDBEntry
struct FPrimalDinoDBEntry
{
public:
	TSet<TSoftClassPtr<class APrimalDinoCharacter>> ParentClassTree;                                   // 0x0(0x50)(None)
	class FName                                  DinoNameTag;                                       // 0x50(0x8)(None)
	float                                        NPCZoneVolumeCountWeight;                          // 0x58(0x4)(None)
	float                                        CapsuleHalfHeight;                                 // 0x5C(0x4)(None)
	float                                        CapsuleWaterDepthMultiplier;                       // 0x60(0x4)(None)
	float                                        CapsuleRadius;                                     // 0x64(0x4)(None)
	float                                        UnnetworkedStasisMultiplier;                       // 0x68(0x4)(None)
	int32                                        MeleeDamageAmount;                                 // 0x6C(0x4)(None)
	uint8                                        bUsesGender : 1;                                   // Mask: 0x1, PropSize: 0x10x70(0x1)(None)
	uint8                                        bCanBeTorpid : 1;                                  // Mask: 0x2, PropSize: 0x10x70(0x1)(None)
	uint8                                        bIsWaterDino : 1;                                  // Mask: 0x4, PropSize: 0x10x70(0x1)(None)
	uint8                                        bIsAmphibious : 1;                                 // Mask: 0x8, PropSize: 0x10x70(0x1)(None)
	uint8                                        Pad_479A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureDBEntry
struct FPrimalStructureDBEntry
{
public:
	uint8                                        bTraceThruEncroachmentPoints : 1;                  // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bSpawnCrateOnTopOfStructures : 1;                  // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PrimalInventoryDBEntry
struct FPrimalInventoryDBEntry
{
public:
	class FString                                InventoryNameOverride;                             // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ShooterGame.PrimalMissionDBEntry
struct FPrimalMissionDBEntry
{
public:
	bool                                         bUsesFallbackSeeds;                                // 0x0(0x1)(None)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ShooterGame.CustomButtonWidgetStyle
struct FCustomButtonWidgetStyle : public FSlateWidgetStyle
{
public:
	struct FLinearColor                          NormalChildTintColor;                              // 0x8(0x10)(None)
	struct FLinearColor                          HoveredChildTintColor;                             // 0x18(0x10)(None)
	struct FLinearColor                          PressedChildTintColor;                             // 0x28(0x10)(None)
	struct FLinearColor                          DisabledChildTintColor;                            // 0x38(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DamageNegatingItem
struct FDamageNegatingItem
{
public:
	class UClass*                                ItemSubclass;                                      // 0x0(0x8)(None)
	float                                        NegationFactor;                                    // 0x8(0x4)(None)
	uint8                                        Pad_479B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DataListEntryButtonBorderColors
struct FDataListEntryButtonBorderColors
{
public:
	struct FColor                                Normal;                                            // 0x0(0x4)(None)
	struct FColor                                Hovered;                                           // 0x4(0x4)(None)
	struct FColor                                Pressed;                                           // 0x8(0x4)(None)
	struct FColor                                Disabled;                                          // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalFolderIcons
struct FPrimalFolderIcons
{
public:
	class UTexture2D*                            NormalFolder;                                      // 0x0(0x8)(ZeroConstructor)
	class UTexture2D*                            CustomFolder;                                      // 0x8(0x8)(ZeroConstructor)
	class UTexture2D*                            Back;                                              // 0x10(0x8)(None)
	struct FColor                                TextColor;                                         // 0x18(0x4)(None)
	uint8                                        Pad_479C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ShooterGame.DeferredMovementTick
struct FDeferredMovementTick : public FTickFunction
{
public:
	uint8                                        Pad_479D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ShooterGame.AvoidanceArea
struct FAvoidanceArea
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	struct FTransform                            Transform;                                         // 0x30(0x60)(None)
	struct FVector                               BoxExtents;                                        // 0x90(0x18)(None)
	float                                        SphereRadius;                                      // 0xA8(0x4)(None)
	uint8                                        Pad_479E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CreationTime;                                      // 0xB0(0x8)(None)
	uint8                                        bBlockBox : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(None)
	uint8                                        bBlockSphere : 1;                                  // Mask: 0x2, PropSize: 0x10xB8(0x1)(None)
	uint8                                        bIsDynamic : 1;                                    // Mask: 0x4, PropSize: 0x10xB8(0x1)(None)
	uint8                                        Pad_479F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.FlockPersistentData
struct FFlockPersistentData
{
public:
	float                                        AvoidanceAreaDecayRate;                            // 0x0(0x4)(None)
	float                                        AvoidanceTraceInterval;                            // 0x4(0x4)(None)
	float                                        AvoidanceTraceInferredBoxSize;                     // 0x8(0x4)(None)
	float                                        AvoidanceTraceInferredSphereRadius;                // 0xC(0x4)(None)
	float                                        AvoidanceTraceForwardDistance;                     // 0x10(0x4)(None)
	float                                        AvoidanceTraceDownDistance;                        // 0x14(0x4)(None)
	double                                       LastAvoidanceTraceTime;                            // 0x18(0x8)(None)
	int32                                        MaxNumAvoidanceAreas;                              // 0x20(0x4)(None)
	uint8                                        Pad_47A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAvoidanceArea>                DynamicAvoidanceAreas;                             // 0x28(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.BoidBehavior
struct FBoidBehavior
{
public:
	TArray<struct FAvoidanceArea>                AvoidanceAreas;                                    // 0x0(0x10)(None)
	float                                        DesiredSeparation;                                 // 0x10(0x4)(None)
	float                                        NeighborDist;                                      // 0x14(0x4)(None)
	float                                        SeparationMultiplier;                              // 0x18(0x4)(None)
	float                                        AlignmentMultiplier;                               // 0x1C(0x4)(None)
	float                                        CohesionMultiplier;                                // 0x20(0x4)(None)
	float                                        AvoidanceMultiplier;                               // 0x24(0x4)(None)
	float                                        TargetingMultiplier;                               // 0x28(0x4)(None)
	float                                        MaxDistanceToLeaders;                              // 0x2C(0x4)(None)
	float                                        MaxSpeedMultiplier;                                // 0x30(0x4)(None)
	float                                        MaxForceMultiplier;                                // 0x34(0x4)(None)
	bool                                         bUseBoundsCulling;                                 // 0x38(0x1)(None)
	uint8                                        Pad_47A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoundsCullingMultiplier;                           // 0x3C(0x4)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ShooterGame.Boid
struct FBoid
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	struct FVector                               Velocity;                                          // 0x30(0x18)(None)
	struct FVector                               Acceleration;                                      // 0x48(0x18)(None)
	float                                        MaxSpeed;                                          // 0x60(0x4)(None)
	float                                        MaxForce;                                          // 0x64(0x4)(None)
	float                                        TurnRate;                                          // 0x68(0x4)(None)
	uint8                                        bUseTargeting : 1;                                 // Mask: 0x1, PropSize: 0x10x6C(0x1)(None)
	uint8                                        bHasReachedTarget : 1;                             // Mask: 0x2, PropSize: 0x10x6C(0x1)(None)
	uint8                                        bIsAlive : 1;                                      // Mask: 0x4, PropSize: 0x10x6C(0x1)(None)
	uint8                                        BitPad_3DC : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpiralTime;                                        // 0x70(0x4)(None)
	uint8                                        Pad_47A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x78(0x18)(None)
	enum class EBoidType                         Type;                                              // 0x90(0x1)(None)
	uint8                                        Pad_47A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.FogOfWarInfoStruct
struct FFogOfWarInfoStruct
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint8>                                CompressedVisibilityBuffer;                        // 0x10(0x10)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint32                                       UnCompressedVisibilityBufferSize;                  // 0x20(0x4)(None)
	uint8                                        Pad_47A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 UnlockMask;                                        // 0x28(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.FloorSlopeData
struct FFloorSlopeData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               SlopeDir;                                          // 0x18(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.SlideData
struct FSlideData
{
public:
	TWeakObjectPtr<class USplineComponent>       SplineComponent;                                   // 0x0(0x8)(ZeroConstructor)
	class UParticleSystemComponent*              Emitter;                                           // 0x8(0x8)(None)
	float                                        CurTime;                                           // 0x10(0x4)(None)
	float                                        Duration;                                          // 0x14(0x4)(None)
	TArray<struct FVector>                       Points;                                            // 0x18(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       Tangents;                                          // 0x28(0x10)(None)
	struct FVector                               Location;                                          // 0x38(0x18)(None)
	struct FVector                               Tangent;                                           // 0x50(0x18)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.DinoClassCount
struct FDinoClassCount
{
public:
	int32                                        NumberofTamedClass;                                // 0x0(0x4)(None)
	int32                                        NumberofTamedBabyClass;                            // 0x4(0x4)(None)
	int32                                        NumberofTamedFemalesClass;                         // 0x8(0x4)(None)
	int32                                        NumberofWildClass;                                 // 0xC(0x4)(None)
	int32                                        NumberofWildBabyClass;                             // 0x10(0x4)(None)
	int32                                        NumberofWildFemalesClass;                          // 0x14(0x4)(None)
	int32                                        NumberofWildLatentSpawns;                          // 0x18(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.HordeCrateNPCGroup
struct FHordeCrateNPCGroup
{
public:
	TArray<class UClass*>                        NPCClasses;                                        // 0x0(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> NPCAssets;                                         // 0x10(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                NPCWeights;                                        // 0x20(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                MinLevels;                                         // 0x30(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                MaxLevels;                                         // 0x40(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.HordeCrateWave
struct FHordeCrateWave
{
public:
	int32                                        MinNumOfNPCs;                                      // 0x0(0x4)(None)
	int32                                        MaxNumOfNPCs;                                      // 0x4(0x4)(None)
	float                                        TimeToPrepareForWave;                              // 0x8(0x4)(None)
	uint8                                        Pad_47A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHordeCrateNPCGroup                   NPCsToSpawn;                                       // 0x10(0x50)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.HordeCrateDifficultyLevel
struct FHordeCrateDifficultyLevel
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_47A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumOfEventsForDifficulty;                       // 0x4(0x4)(None)
	int32                                        DifficultyLevel;                                   // 0x8(0x4)(None)
	int32                                        MinNPCsToStart;                                    // 0xC(0x4)(None)
	int32                                        MaxNPCsToStart;                                    // 0x10(0x4)(None)
	uint8                                        Pad_47A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHordeCrateNPCGroup                   StartingNPCs;                                      // 0x18(0x50)(ZeroConstructor, AutoWeak, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FHordeCrateWave>               NPCWavesToComplete;                                // 0x68(0x10)(ZeroConstructor)
	float                                        MinTimeBeforeSelfDestruct;                         // 0x78(0x4)(None)
	float                                        MaxTimeBeforeSelfDestruct;                         // 0x7C(0x4)(None)
	class UClass*                                ActorTemplate;                                     // 0x80(0x8)(None)
	float                                        MinQualityMultiplier;                              // 0x88(0x4)(None)
	float                                        MaxQualityMultiplier;                              // 0x8C(0x4)(None)
	int32                                        MinAmtRewardItems;                                 // 0x90(0x4)(None)
	int32                                        MaxAmtRewardItems;                                 // 0x94(0x4)(None)
	struct FLinearColor                          DifficultyColor;                                   // 0x98(0x10)(None)
	float                                        MainNodeElementPct;                                // 0xA8(0x4)(None)
	uint8                                        Pad_47A9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.HordeCrateEvent
struct FHordeCrateEvent
{
public:
	double                                       EventStartTime;                                    // 0x0(0x8)(None)
	TWeakObjectPtr<class AActor>                 HordeSpawnNetwork;                                 // 0x8(0x8)(ZeroConstructor)
	TWeakObjectPtr<class AActor>                 HordeModeCrate;                                    // 0x10(0x8)(None)
	bool                                         bHasBeenInitiated;                                 // 0x18(0x1)(None)
	uint8                                        EventType;                                         // 0x19(0x1)(None)
	uint8                                        Pad_47AA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.PropertyThunkWrapper
struct FPropertyThunkWrapper
{
public:
	uint8                                        Pad_47AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.LeaderboardRow
struct FLeaderboardRow
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(None)
	class FString                                PlayerNetId;                                       // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        TribeID;                                           // 0x18(0x4)(None)
	uint8                                        Pad_47AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimestampUtc;                                      // 0x20(0x8)(None)
	float                                        FloatValue;                                        // 0x28(0x4)(None)
	int32                                        IntValue;                                          // 0x2C(0x4)(None)
	class FName                                  NameValue;                                         // 0x30(0x8)(None)
	class FString                                StringValue;                                       // 0x38(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.LeaderboardEntry
struct FLeaderboardEntry
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(None)
	TArray<struct FLeaderboardRow>               Rows;                                              // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.LeaderboardsContainer
struct FLeaderboardsContainer
{
public:
	TArray<struct FLeaderboardEntry>             Leaderboards;                                      // 0x0(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.LeaderboardColumnDefinition
struct FLeaderboardColumnDefinition
{
public:
	float                                        WidthPercent;                                      // 0x0(0x4)(None)
	struct FMargin                               ColumnPadding;                                     // 0x4(0x10)(None)
	uint8                                        Pad_47AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x18(0x58)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.MapData
struct FMapData
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(None)
	class UTexture2D*                            MapTexture;                                        // 0x10(0x8)(None)
	struct FVector                               OriginMax;                                         // 0x18(0x18)(None)
	struct FVector                               OriginMin;                                         // 0x30(0x18)(None)
	struct FVector                               PlayableMax;                                       // 0x48(0x18)(None)
	struct FVector                               PlayableMin;                                       // 0x60(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.Int32Array
struct FInt32Array
{
public:
	TArray<int32>                                Array;                                             // 0x0(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.MetaTagIDInfo
struct FMetaTagIDInfo
{
public:
	int32                                        MetaTagEnumIndex;                                  // 0x0(0x4)(None)
	class FName                                  MetaTagDisplayName;                                // 0x4(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.MissionWorldIndicator
struct FMissionWorldIndicator
{
public:
	class FName                                  DescriptionTagString;                              // 0x0(0x8)(None)
	class UTexture2D*                            Icon;                                              // 0x8(0x8)(ZeroConstructor)
	class UClass*                                ItemType;                                          // 0x10(0x8)(ZeroConstructor)
	struct FVector                               WorldPosition;                                     // 0x18(0x18)(None)
	class AActor*                                TargetActor;                                       // 0x30(0x8)(ZeroConstructor)
	int32                                        Priority;                                          // 0x38(0x4)(None)
	uint8                                        Pad_47AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CustomData;                                        // 0x40(0x8)(None)
	uint8                                        bUseTargetActorName : 1;                           // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        bUseTargetActorIcon : 1;                           // Mask: 0x2, PropSize: 0x10x48(0x1)(None)
	uint8                                        bUseItemName : 1;                                  // Mask: 0x4, PropSize: 0x10x48(0x1)(None)
	uint8                                        bUseItemIcon : 1;                                  // Mask: 0x8, PropSize: 0x10x48(0x1)(None)
	uint8                                        bOnlyVisibleOffScreen : 1;                         // Mask: 0x10, PropSize: 0x10x48(0x1)(None)
	uint8                                        bOnlyVisibleOnScreen : 1;                          // Mask: 0x20, PropSize: 0x10x48(0x1)(None)
	uint8                                        bAlwaysVisible : 1;                                // Mask: 0x40, PropSize: 0x10x48(0x1)(None)
	uint8                                        bCompanionIndicator : 1;                           // Mask: 0x80, PropSize: 0x10x48(0x1)(None)
	uint8                                        bShowDistance : 1;                                 // Mask: 0x1, PropSize: 0x10x49(0x1)(None)
	uint8                                        BitPad_3DD : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          IndicatorColor;                                    // 0x4C(0x10)(None)
	struct FLinearColor                          IconColor;                                         // 0x5C(0x10)(None)
	uint8                                        bUsePulseAnimation : 1;                            // Mask: 0x1, PropSize: 0x10x6C(0x1)(None)
	uint8                                        bShowProgress : 1;                                 // Mask: 0x2, PropSize: 0x10x6C(0x1)(None)
	uint8                                        BitPad_3DE : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProgressValue;                                     // 0x70(0x4)(None)
	uint8                                        Pad_47B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProgressLabelText;                                 // 0x78(0x10)(None)
	struct FLinearColor                          ProgressBarColor;                                  // 0x88(0x10)(None)
	struct FLinearColor                          ProgressLabelColor;                                // 0x98(0x10)(None)
	uint8                                        bShowProgressLabelWhenOffScreen : 1;               // Mask: 0x1, PropSize: 0x10xA8(0x1)(None)
	uint8                                        Pad_47B2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.MissionRelatedActorData
struct FMissionRelatedActorData
{
public:
	class AActor*                                RelatedActor;                                      // 0x0(0x8)(None)
	class FName                                  RelatedActorPropertyName;                          // 0x8(0x8)(None)
	enum class EMissionRelatedPropertyType       RelatedActorPropertyType;                          // 0x10(0x1)(None)
	enum class EMissionRelatedPropertyUsage      RelatedActorPropertyUsage;                         // 0x11(0x1)(None)
	uint8                                        Pad_47B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          RelatedActorPropertyTextColor;                     // 0x14(0x10)(None)
	struct FLinearColor                          LocalIndexMatchColorModifier;                      // 0x24(0x10)(None)
	bool                                         bUseLocalIndexMatchColorModifier;                  // 0x34(0x1)(None)
	uint8                                        Pad_47B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexMatchRangeOffset;                             // 0x38(0x4)(None)
	uint8                                        Pad_47B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.MissionPhaseRequirement
struct FMissionPhaseRequirement
{
public:
	class FName                                  DescriptionStringTag;                              // 0x0(0x8)(None)
	class UClass*                                RelatedType;                                       // 0x8(0x8)(ZeroConstructor)
	uint8                                        bUseRelatedTypeName : 1;                           // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_3DF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionRelatedActorData              OptionalRelatedActorData;                          // 0x18(0x40)(None)
	uint8                                        bIsComplete : 1;                                   // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        bUseCount : 1;                                     // Mask: 0x2, PropSize: 0x10x58(0x1)(None)
	uint8                                        bUseProgress : 1;                                  // Mask: 0x4, PropSize: 0x10x58(0x1)(None)
	uint8                                        bAutoCalculateProgressFromCount : 1;               // Mask: 0x8, PropSize: 0x10x58(0x1)(None)
	uint8                                        BitPad_3E0 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentCount;                                      // 0x5C(0x4)(None)
	int32                                        MaxCount;                                          // 0x60(0x4)(None)
	float                                        Progress;                                          // 0x64(0x4)(None)
	enum class EPhaseRequirementWidgetVisualState PhaseRequirementWidgetVisualState;                 // 0x68(0x1)(None)
	uint8                                        Pad_47B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CustomPhaseRequirementTextColor;                   // 0x6C(0x10)(None)
	struct FLinearColor                          CustomPhaseRequirementProgressBarColor;            // 0x7C(0x10)(None)
	uint8                                        Pad_47B9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TimeRange
struct FTimeRange
{
public:
	float                                        Min;                                               // 0x0(0x4)(None)
	float                                        Max;                                               // 0x4(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.MissionPhase
struct FMissionPhase
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FString                                DisplayText;                                       // 0x8(0x10)(None)
	uint8                                        bShowInUI : 1;                                     // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bUseBPGetPhaseDisplayText : 1;                     // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        bUseGeneratePhaseRequirements : 1;                 // Mask: 0x4, PropSize: 0x10x18(0x1)(None)
	uint8                                        bAutoSwitchToNextPhase : 1;                        // Mask: 0x8, PropSize: 0x10x18(0x1)(None)
	uint8                                        bIsLastPhase : 1;                                  // Mask: 0x10, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_3E1 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTimeAfterPhaseCompletes;                       // 0x1C(0x4)(None)
	class FName                                  NextPhaseName;                                     // 0x20(0x8)(None)
	struct FTimeRange                            AutoSwitchPhaseAttemptInterval;                    // 0x28(0x8)(None)
	class USoundBase*                            PhaseStartSound;                                   // 0x30(0x8)(ZeroConstructor)
	class USoundBase*                            PhaseEndSound;                                     // 0x38(0x8)(ZeroConstructor)
	class USoundBase*                            PhaseMusicLoop;                                    // 0x40(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ShooterGame.MissionPhaseData
struct FMissionPhaseData
{
public:
	uint8                                        bPhaseCompleted : 1;                               // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_47BB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.TeleportedCharacter
struct FTeleportedCharacter
{
public:
	class APrimalCharacter*                      Character;                                         // 0x0(0x8)(ZeroConstructor)
	class AController*                           Controller;                                        // 0x8(0x8)(None)
	struct FVector                               OriginalLocation;                                  // 0x10(0x18)(None)
	struct FRotator                              OriginalRotation;                                  // 0x28(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.MissionDinoPath
struct FMissionDinoPath
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x0(0x8)(ZeroConstructor)
	struct FVector                               CurrentTarget;                                     // 0x8(0x18)(None)
	struct FVector                               LastTarget;                                        // 0x20(0x18)(None)
	float                                        CurrentSplineKeyTarget;                            // 0x38(0x4)(None)
	float                                        LastSplineKeyTarget;                               // 0x3C(0x4)(None)
	double                                       LastUpdateTime;                                    // 0x40(0x8)(None)
	float                                        UpdateInterval;                                    // 0x48(0x4)(None)
	TWeakObjectPtr<class USplineComponent>       ForcePathSpline;                                   // 0x4C(0x8)(None)
	uint8                                        bReverseAtEnd : 1;                                 // Mask: 0x1, PropSize: 0x10x54(0x1)(None)
	uint8                                        Pad_47BC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CharacterAndControllerPair
struct FCharacterAndControllerPair
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(ZeroConstructor)
	class AShooterPlayerController*              Controller;                                        // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PlayerItems
struct FPlayerItems
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(None)
	TArray<struct FItemNetID>                    ItemIDs;                                           // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TaggedString
struct FTaggedString
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	class FString                                String;                                            // 0x8(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.RacePlayerData
struct FRacePlayerData
{
public:
	class AShooterPlayerController*              Controller;                                        // 0x0(0x8)(ZeroConstructor)
	class AShooterCharacter*                     Character;                                         // 0x8(0x8)(None)
	int32                                        TargetCheckpoint;                                  // 0x10(0x4)(None)
	uint8                                        Pad_47BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 CheckpointsHit;                                    // 0x18(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                CheckpointTimes;                                   // 0x28(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.MissionWorldBuffData
struct FMissionWorldBuffData
{
public:
	class FName                                  WorldBuffIdentifier;                               // 0x0(0x8)(None)
	int32                                        StacksToGive;                                      // 0x8(0x4)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.MountedDLCInfo
struct FMountedDLCInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Path;                                              // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ID;                                                // 0x20(0x10)(BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ProductId;                                         // 0x30(0x10)(AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        bAutoMount : 1;                                    // Mask: 0x1, PropSize: 0x10x40(0x1)(None)
	uint8                                        BitPad_3E2 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StoreProductIdOverride;                            // 0x48(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MountedDLCMapInfo
struct FMountedDLCMapInfo
{
public:
	class FString                                ID;                                                // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Map;                                               // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.Struct_MissionModule_Travel
struct FStruct_MissionModule_Travel
{
public:
	class FString                                RequirementsTitle;                                 // 0x0(0x10)(None)
	class FName                                  RequirementsMessage;                               // 0x10(0x8)(None)
	float                                        DelayAfterModule;                                  // 0x18(0x4)(None)
	float                                        DelayBeforeModule;                                 // 0x1C(0x4)(None)
	class FName                                  TriggerKeyOfPointToGoTo;                           // 0x20(0x8)(None)
	float                                        DistanceFromPointToHideIcon;                       // 0x28(0x4)(None)
	class FName                                  NavPointLabel;                                     // 0x2C(0x8)(None)
	uint8                                        Pad_47BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.LinkedZoneSpawnVolumeEntry
struct FLinkedZoneSpawnVolumeEntry
{
public:
	class ANPCZoneSpawnVolume*                   LinkedZoneSpawnVolume;                             // 0x0(0x8)(ZeroConstructor)
	TArray<class AActor*>                        ZoneSpawnVolumeFloors;                             // 0x8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        ZoneSpawnVolumeIgnoreCeilings;                     // 0x18(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ZoneSpawnVolumeIgnoreCeilingTags;                  // 0x28(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ZoneSpawnVolumeFloorTags;                          // 0x38(0x10)(None)
	float                                        EntryWeight;                                       // 0x48(0x4)(None)
	uint8                                        Pad_47C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.HibernationCountInfo
struct FHibernationCountInfo
{
public:
	TSoftClassPtr<class APrimalDinoCharacter>    ClassType;                                         // 0x0(0x30)(None)
	int32                                        Count;                                             // 0x30(0x4)(None)
	uint8                                        Pad_47C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.OceanDinoSpawnEntry
struct FOceanDinoSpawnEntry
{
public:
	class FString                                EntryFriendlyName;                                 // 0x0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class APrimalDinoCharacter>    SpawnDinoClass;                                    // 0x10(0x30)(None)
	float                                        SpawnDinoWeight;                                   // 0x40(0x4)(None)
	float                                        EntrySpawnDistanceMultiplier;                      // 0x44(0x4)(None)
	float                                        SpawnZOffset;                                      // 0x48(0x4)(None)
	float                                        MinimumDepthFromWaterSurface;                      // 0x4C(0x4)(None)
	float                                        MaxSpawnZ;                                         // 0x50(0x4)(None)
	float                                        NetworkAndStasisRangeMultiplier;                   // 0x54(0x4)(None)
	float                                        MinimumAllowedFreeDepthForSpawn;                   // 0x58(0x4)(None)
	int32                                        OverrideMaxValidSpawnPointAttempts;                // 0x5C(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.OceanDinoDepthEntry
struct FOceanDinoDepthEntry
{
public:
	TArray<struct FOceanDinoSpawnEntry>          OceanDinoSpawnEntries;                             // 0x0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                SectionFriendlyName;                               // 0x10(0x10)(None)
	float                                        StartAtDepthZ;                                     // 0x20(0x4)(None)
	uint8                                        Pad_47C2[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PaintingStreamingJob
struct FPaintingStreamingJob
{
public:
	uint8                                        Pad_47C3[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.AssetRetainer
struct FAssetRetainer
{
public:
	class UObject*                               HardReference;                                     // 0x0(0x8)(None)
	float                                        TimeLeft;                                          // 0x8(0x4)(None)
	uint8                                        Pad_47C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.MaxStatScaler
struct FMaxStatScaler
{
public:
	enum class EPrimalCharacterStatusValue       LevelUpValueType;                                  // 0x0(0x1)(None)
	uint8                                        Pad_47C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetValue;                                       // 0x4(0x4)(None)
	bool                                         TargetValueIsPercent;                              // 0x8(0x1)(None)
	uint8                                        Pad_47C6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PostProcessMaterialAdjuster
struct FPostProcessMaterialAdjuster
{
public:
	class UMaterialInterface*                    PostProcessParentMaterial;                         // 0x0(0x8)(None)
	TArray<class FName>                          ScalarParameterNames;                              // 0x8(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ScalarParameterValues;                             // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          VectorParameterNames;                              // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       VectorParameterValues;                             // 0x38(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.BuffMPCAdjuster
struct FBuffMPCAdjuster
{
public:
	class UMaterialParameterCollection*          MPC;                                               // 0x0(0x8)(None)
	TArray<class FName>                          ScalarParameterNames;                              // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ScalarParameterValues;                             // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          VectorParameterNames;                              // 0x28(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       VectorParameterValues;                             // 0x38(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.SerializedMissionData
struct FSerializedMissionData
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(None)
	class FString                                SerializedData;                                    // 0x8(0x10)(None)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct ShooterGame.CompanionEventSegmentData
struct FCompanionEventSegmentData
{
public:
	float                                        SegmentDuration;                                   // 0x0(0x4)(None)
	uint8                                        Pad_47C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionReactionData                SegmentCompanionReaction;                          // 0x8(0xB0)(ZeroConstructor)
	uint8                                        bMoveCompanionToLocation : 1;                      // Mask: 0x1, PropSize: 0x10xB8(0x1)(None)
	uint8                                        bMakeCompanionLookAtSomething : 1;                 // Mask: 0x2, PropSize: 0x10xB8(0x1)(None)
	uint8                                        BitPad_3E3 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MoveCompanionToLocationOffset;                     // 0xC0(0x18)(None)
	class AActor*                                MakeCompanionLookAtActor;                          // 0xD8(0x8)(None)
	struct FVector                               MakeCompanionLookAtLocation;                       // 0xE0(0x18)(None)
	float                                        CompanionLocationInterpSpeed;                      // 0xF8(0x4)(None)
	float                                        CompanionRotationInterpSpeed;                      // 0xFC(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.CompanionEventData
struct FCompanionEventData
{
public:
	uint8                                        EventType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_47C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventTitle;                                        // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCompanionEventSegmentData>    EventSegmentArray;                                 // 0x18(0x10)(None)
	float                                        EventTotalDuration;                                // 0x28(0x4)(None)
	uint8                                        Pad_47CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EventStartTime;                                    // 0x30(0x8)(None)
	int32                                        CurrentSegmentIndex;                               // 0x38(0x4)(None)
	uint8                                        Pad_47CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastSegmentStartTime;                              // 0x40(0x8)(None)
	double                                       EventEndTime;                                      // 0x48(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.GrappleAnchor
struct FGrappleAnchor
{
public:
	struct FVector                               AnchorWorldLocation;                               // 0x0(0x18)(None)
	class USceneComponent*                       AnchoredComponent;                                 // 0x18(0x8)(None)
	int32                                        AnchoredItemIndex;                                 // 0x20(0x4)(None)
	uint8                                        Pad_47CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AnchoredBoneName;                                  // 0x28(0x10)(None)
	struct FVector                               AnchorRelativeOffset;                              // 0x38(0x18)(None)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct ShooterGame.GrappleTether
struct FGrappleTether
{
public:
	class FString                                TetherTag;                                         // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        TetherAnchor_Start;                                // 0x10(0x50)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        TetherAnchor_End;                                  // 0x60(0x50)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        TetherAnchor_Visual_Start;                         // 0xB0(0x50)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        TetherAnchor_Visual_End;                           // 0x100(0x50)(ZeroConstructor)
	class APrimalCharacter*                      GrappledParentPrimalChar;                          // 0x150(0x8)(ZeroConstructor)
	class APrimalCharacter*                      GrappleOwner;                                      // 0x158(0x8)(ZeroConstructor)
	class APrimalBuff_Grappled*                  MasterGrappleBuff;                                 // 0x160(0x8)(None)
	float                                        TetherLifetime;                                    // 0x168(0x4)(None)
	uint8                                        Pad_47CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TetherCreationTime;                                // 0x170(0x8)(None)
	uint8                                        Pad_47CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAnyoneCanControl : 1;                             // Mask: 0x1, PropSize: 0x10x180(0x1)(None)
	uint8                                        bUseVisualAnchor_Start : 1;                        // Mask: 0x2, PropSize: 0x10x180(0x1)(None)
	uint8                                        bUseVisualAnchor_End : 1;                          // Mask: 0x4, PropSize: 0x10x180(0x1)(None)
	uint8                                        bTetherBroken : 1;                                 // Mask: 0x8, PropSize: 0x10x180(0x1)(None)
	uint8                                        BitPad_3E4 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastAboveBreakDistPastTetherLengthTime;            // 0x188(0x8)(None)
	float                                        TetherLength_Current;                              // 0x190(0x4)(None)
	uint8                                        Pad_47D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DirFromOwner_Current;                              // 0x198(0x18)(None)
	float                                        DistToOwner_Current;                               // 0x1B0(0x4)(None)
	float                                        OwnerDistFromTetherLimit_Current;                  // 0x1B4(0x4)(None)
};

// 0x178 (0x178 - 0x0)
// ScriptStruct ShooterGame.ReplicatedGrappleTetherData
struct FReplicatedGrappleTetherData
{
public:
	class FString                                Rep_TetherTag;                                     // 0x0(0x10)(ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        Rep_TetherAnchor_Start;                            // 0x10(0x50)(ZeroConstructor, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        Rep_TetherAnchor_End;                              // 0x60(0x50)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        Rep_TetherAnchor_Visual_Start;                     // 0xB0(0x50)(ZeroConstructor, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        Rep_TetherAnchor_Visual_End;                       // 0x100(0x50)(ZeroConstructor)
	class APrimalBuff_Grappled*                  Rep_MasterGrappledBuff;                            // 0x150(0x8)(None)
	float                                        Rep_TetherLifetime;                                // 0x158(0x4)(None)
	uint8                                        Pad_47D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Rep_TetherCreationTime;                            // 0x160(0x8)(None)
	uint8                                        Rep_bUseVisualAnchor_Start : 1;                    // Mask: 0x1, PropSize: 0x10x168(0x1)(None)
	uint8                                        Rep_bUseVisualAnchor_End : 1;                      // Mask: 0x2, PropSize: 0x10x168(0x1)(None)
	uint8                                        BitPad_3E5 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rep_TetherLength;                                  // 0x16C(0x4)(None)
	uint8                                        Rep_bAnyoneCanControl : 1;                         // Mask: 0x1, PropSize: 0x10x170(0x1)(None)
	uint8                                        Rep_bTetherBroken : 1;                             // Mask: 0x2, PropSize: 0x10x170(0x1)(None)
	uint8                                        Pad_47D3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct ShooterGame.CreateGrappleTetherData
struct FCreateGrappleTetherData
{
public:
	class FString                                WithTag;                                           // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        WithTetherStartAnchor;                             // 0x10(0x50)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        WithTetherEndAnchor;                               // 0x60(0x50)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        WithTetherVisualStartAnchor;                       // 0xB0(0x50)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGrappleAnchor                        WithTetherVisualEndAnchor;                         // 0x100(0x50)(ZeroConstructor)
	class APrimalBuff_Grappled*                  WithMasterGrappleBuff;                             // 0x150(0x8)(None)
	float                                        WithTetherLifetime;                                // 0x158(0x4)(None)
	uint8                                        bUseVisualAnchor_Start : 1;                        // Mask: 0x1, PropSize: 0x10x15C(0x1)(None)
	uint8                                        bUseVisualAnchor_End : 1;                          // Mask: 0x2, PropSize: 0x10x15C(0x1)(None)
	uint8                                        bAnyoneCanControl : 1;                             // Mask: 0x4, PropSize: 0x10x15C(0x1)(None)
	uint8                                        Pad_47D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.ClientMissionData
struct FClientMissionData
{
public:
	class AMissionType*                          Mission;                                           // 0x0(0x8)(ZeroConstructor)
	TArray<struct FMissionPhaseRequirement>      Requirements;                                      // 0x8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMissionPhaseRequirement>      LocalRequirements;                                 // 0x18(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMissionWorldIndicator>        MissionWorldIndicators;                            // 0x28(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMissionWorldIndicator>        LocalWorldIndicators;                              // 0x38(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FItemNetInfo>                  Items;                                             // 0x48(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.MissionEligibilityData
struct FMissionEligibilityData
{
public:
	class UClass*                                MissionType;                                       // 0x0(0x8)(None)
	class FName                                  IneligibleReasonType;                              // 0x8(0x8)(None)
	double                                       LastCompletedUtcTime;                              // 0x10(0x8)(None)
	uint8                                        bIsEligible : 1;                                   // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bCompleted : 1;                                    // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOnGlobalCooldown : 1;                             // Mask: 0x4, PropSize: 0x10x18(0x1)(None)
	uint8                                        bOnPerPlayerCooldown : 1;                          // Mask: 0x8, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_3E6 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MissionMaxDurationSeconds;                         // 0x1C(0x4)(None)
	double                                       MissionStartNetworkTime;                           // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ClientMissionEligibility
struct FClientMissionEligibility
{
public:
	uint8                                        bIsEligible : 1;                                   // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bCompleted : 1;                                    // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOnGlobalCooldown : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bOnPerPlayerCooldown : 1;                          // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bMinLevelRequirement : 1;                          // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3E7 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastUpdateNetworkTime;                             // 0x8(0x8)(None)
	double                                       LastCompletedUtcTime;                              // 0x10(0x8)(None)
	float                                        MissionMaxDurationSeconds;                         // 0x18(0x4)(None)
	uint8                                        Pad_47D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MissionStartNetworkTime;                           // 0x20(0x8)(None)
	class FString                                Reason;                                            // 0x28(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.ClientMissionSubscriptionData
struct FClientMissionSubscriptionData
{
public:
	TSoftClassPtr<class AMissionType>            MissionType;                                       // 0x0(0x30)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          Keys;                                              // 0x30(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.CableParticle
struct FCableParticle
{
public:
	bool                                         bFree;                                             // 0x0(0x1)(None)
	uint8                                        Pad_47D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FVector                               OldPosition;                                       // 0x20(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DefaultTextureParamOverride
struct FDefaultTextureParamOverride
{
public:
	class FName                                  TextureParamName;                                  // 0x0(0x8)(None)
	class UTexture2D*                            TextureValue;                                      // 0x8(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PrimalSnapshotPose
struct FPrimalSnapshotPose
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAnimSequence*                         Sequence;                                          // 0x10(0x8)(None)
	float                                        Time;                                              // 0x18(0x4)(None)
	bool                                         Pedestal;                                          // 0x1C(0x1)(None)
	uint8                                        Pad_47D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PedestalBone;                                      // 0x20(0x10)(None)
	struct FVector                               RootOffset;                                        // 0x30(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.VelocityBasedCharacterSoundInfo
struct FVelocityBasedCharacterSoundInfo
{
public:
	TArray<class USoundBase*>                    Sounds;                                            // 0x0(0x10)(None)
	struct FVector2D                             VelocityRange;                                     // 0x10(0x10)(None)
	bool                                         bAdjustByCharacterSize;                            // 0x20(0x1)(None)
	uint8                                        Pad_47DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerSize;                                         // 0x24(0x4)(None)
	float                                        UpperSize;                                         // 0x28(0x4)(None)
	int32                                        LowerOffset;                                       // 0x2C(0x4)(None)
	int32                                        UpperOffset;                                       // 0x30(0x4)(None)
	uint8                                        Pad_47DB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusStateThresholds
struct FPrimalCharacterStatusStateThresholds
{
public:
	TArray<float>                                HighThresholdStatusStateValues;                    // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class EPrimalCharacterStatusState> HighThresholdStatusStateType;                      // 0x10(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                LowThresholdStatusStateValues;                     // 0x20(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class EPrimalCharacterStatusState> LowThresholdStatusStateType;                       // 0x30(0x10)(None)
	bool                                         StatusStateThresholdValuesAbsolute;                // 0x40(0x1)(None)
	uint8                                        Pad_47DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusValueModifier
struct FPrimalCharacterStatusValueModifier
{
public:
	uint8                                        Pad_47DD[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.CinematicMaterial
struct FCinematicMaterial
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UMaterial>              CinematicMaterial;                                 // 0x8(0x30)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.ClimbingTypeSettings
struct FClimbingTypeSettings
{
public:
	uint8                                        bIsOneShot : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3E8 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(None)
	float                                        StaminaConsumption;                                // 0x8(0x4)(None)
	float                                        ConsumeDurabilityMultiplier;                       // 0xC(0x4)(None)
	float                                        AttachMoveTraceDistance;                           // 0x10(0x4)(None)
	float                                        AttachBackTraceDistance;                           // 0x14(0x4)(None)
	float                                        AttachForwardTraceDistance;                        // 0x18(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.ClimbingTransitionParams
struct FClimbingTransitionParams
{
public:
	float                                        LocationInterpSpeed;                               // 0x0(0x4)(None)
	float                                        RotationInterpSpeed;                               // 0x4(0x4)(None)
	float                                        OvershootDuration;                                 // 0x8(0x4)(None)
	float                                        OvershootCurveExp;                                 // 0xC(0x4)(None)
	float                                        OvershootCurveStartOffset;                         // 0x10(0x4)(None)
	float                                        OvershootCurveDirectionBias;                       // 0x14(0x4)(None)
	float                                        OvershootCurveStartBias;                           // 0x18(0x4)(None)
	float                                        OvershootCurveEndOffset;                           // 0x1C(0x4)(None)
	float                                        OvershootCurveEndBias;                             // 0x20(0x4)(None)
	float                                        CameraLocationInterpSpeed;                         // 0x24(0x4)(None)
	float                                        CameraRotationInterpSpeed;                         // 0x28(0x4)(None)
	bool                                         bCameraSwitch;                                     // 0x2C(0x1)(None)
	uint8                                        Pad_47DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraTransitionDuration;                          // 0x30(0x4)(None)
	uint8                                        Pad_47E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CameraSwitchStrength;                              // 0x38(0x18)(None)
	float                                        CameraSwitchLocationInterpSpeed;                   // 0x50(0x4)(None)
	float                                        CameraSwitchRotationInterpSpeed;                   // 0x54(0x4)(None)
	struct FRotator                              CameraSwitchOffset;                                // 0x58(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.ColorSetDefinition
struct FColorSetDefinition
{
public:
	class FString                                RegionName;                                        // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ColorEntryNames;                                   // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                RandomWeights;                                     // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                MinLevel;                                          // 0x30(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxLevel;                                          // 0x40(0x10)(None)
	uint8                                        Pad_47E1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.ARKDinoData
struct FARKDinoData
{
public:
	class UClass*                                DinoClass;                                         // 0x0(0x8)(None)
	TArray<uint8>                                DinoData;                                          // 0x8(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DinoNameInMap;                                     // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DinoName;                                          // 0x28(0x10)(None)
	bool                                         bNetInfoFromClient;                                // 0x38(0x1)(None)
	uint8                                        Pad_47E2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.HibernationZoneInfo
struct FHibernationZoneInfo
{
public:
	class ANPCZoneVolume*                        Volume;                                            // 0x0(0x8)(None)
	float                                        Weight;                                            // 0x8(0x4)(None)
	uint8                                        Pad_47E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.WildFollowerSpawnEntry
struct FWildFollowerSpawnEntry
{
public:
	TArray<float>                                WeightedChancesToAlsoSpawnWildFollowerOnSpawn;     // 0x0(0x10)(BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class APrimalDinoCharacter>    ClassOverride;                                     // 0x10(0x30)(None)
	uint8                                        bDontSpawnAsChild : 1;                             // Mask: 0x1, PropSize: 0x10x40(0x1)(None)
	uint8                                        bIgnoreConfigSpawnChanceMultiplier : 1;            // Mask: 0x2, PropSize: 0x10x40(0x1)(None)
	uint8                                        bIgnoreConfigSpawnCountMultiplier : 1;             // Mask: 0x4, PropSize: 0x10x40(0x1)(None)
	uint8                                        BitPad_3E9 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AgeRangeMin;                                       // 0x44(0x4)(None)
	float                                        AgeRangeMax;                                       // 0x48(0x4)(None)
	uint8                                        Pad_47E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DinoExtraDefaultItemList
struct FDinoExtraDefaultItemList
{
public:
	int32                                        MinimumDinoLevel;                                  // 0x0(0x4)(None)
	float                                        ChanceToGive;                                      // 0x4(0x4)(None)
	TArray<class UClass*>                        DefaultItemsToGive;                                // 0x8(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.DinoBaseLevelWeightEntry
struct FDinoBaseLevelWeightEntry
{
public:
	float                                        EntryWeight;                                       // 0x0(0x4)(None)
	float                                        BaseLevelMinRange;                                 // 0x4(0x4)(None)
	float                                        BaseLevelMaxRange;                                 // 0x8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoFoodEffectivenessMultipliers
struct FDinoFoodEffectivenessMultipliers
{
public:
	float                                        FoodEffectivenessMultiplier;                       // 0x0(0x4)(None)
	float                                        HealthEffectivenessMultiplier;                     // 0x4(0x4)(None)
	float                                        TorpidityEffectivenessMultiplier;                  // 0x8(0x4)(None)
	float                                        AffinityEffectivenessMultiplier;                   // 0xC(0x4)(None)
	float                                        AffinityOverride;                                  // 0x10(0x4)(None)
	float                                        StaminaEffectivenessMultiplier;                    // 0x14(0x4)(None)
	int32                                        FoodItemCategory;                                  // 0x18(0x4)(None)
	uint8                                        Pad_47E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                FoodItemParent;                                    // 0x20(0x8)(None)
	float                                        UntamedFoodConsumptionPriority;                    // 0x28(0x4)(None)
	uint8                                        Pad_47E7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalSaddleStructure
struct FPrimalSaddleStructure
{
public:
	struct FVector                               DinoRelativeLocation;                              // 0x0(0x18)(None)
	struct FRotator                              DinoRelativeRotation;                              // 0x18(0x18)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)
	class APrimalStructure*                      MyStructure;                                       // 0x38(0x8)(None)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct ShooterGame.DinoAttackInfo
struct FDinoAttackInfo
{
public:
	class FName                                  AttackName;                                        // 0x0(0x8)(None)
	float                                        AttackWeight;                                      // 0x8(0x4)(None)
	float                                        AttackRange;                                       // 0xC(0x4)(None)
	float                                        MinAttackRange;                                    // 0x10(0x4)(None)
	float                                        ActivateAttackRange;                               // 0x14(0x4)(None)
	float                                        AttackInterval;                                    // 0x18(0x4)(None)
	uint8                                        bHighQualityAttack : 1;                            // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bSkipUntamed : 1;                                  // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bSkipTamed : 1;                                    // Mask: 0x4, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOnlyOnWildDinos : 1;                              // Mask: 0x8, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bPreventWhenEncumbered : 1;                        // Mask: 0x10, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bRidingOnlyAllowOnGround : 1;                      // Mask: 0x20, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bRidingOnlyAllowWhileFlying : 1;                   // Mask: 0x40, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOnlyUseWithPlayersOrRiders : 1;                   // Mask: 0x80, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bOnlyUseWithPlayers : 1;                           // Mask: 0x1, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bPreventWhenSwimming : 1;                          // Mask: 0x2, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bPreventWhenInsufficientStamina : 1;               // Mask: 0x4, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bSkipOnFlyers : 1;                                 // Mask: 0x8, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bSkipAI : 1;                                       // Mask: 0x10, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bPreventOnFemale : 1;                              // Mask: 0x20, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bPreventOnMale : 1;                                // Mask: 0x40, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bPreventWhenDinoCarrying : 1;                      // Mask: 0x80, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bUseBlueprintCanRiderAttack : 1;                   // Mask: 0x1, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bRequiresWalking : 1;                              // Mask: 0x2, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bRequiresSwimming : 1;                             // Mask: 0x4, PropSize: 0x10x1E(0x1)(None)
	uint8                                        AttackStatusStarted : 1;                           // Mask: 0x8, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bAttackStopsMovement : 1;                          // Mask: 0x10, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bAttackStopsMovementAllowFalling : 1;              // Mask: 0x20, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bAttackWithJump : 1;                               // Mask: 0x40, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bLocationBasedAttack : 1;                          // Mask: 0x80, PropSize: 0x10x1E(0x1)(None)
	uint8                                        bDropCarriedCharacter : 1;                         // Mask: 0x1, PropSize: 0x10x1F(0x1)(None)
	uint8                                        bCancelAndDropIfCarriedCharacter : 1;              // Mask: 0x2, PropSize: 0x10x1F(0x1)(None)
	uint8                                        bPreventAttackWhileRunning : 1;                    // Mask: 0x4, PropSize: 0x10x1F(0x1)(None)
	uint8                                        ForceUpdateInRange : 1;                            // Mask: 0x8, PropSize: 0x10x1F(0x1)(None)
	uint8                                        ForceUpdateMeshSelf : 1;                           // Mask: 0x10, PropSize: 0x10x1F(0x1)(None)
	uint8                                        bUseSecondaryAnimationInAir : 1;                   // Mask: 0x20, PropSize: 0x10x1F(0x1)(None)
	uint8                                        bUseBlueprintCanAttack : 1;                        // Mask: 0x40, PropSize: 0x10x1F(0x1)(None)
	uint8                                        bUseBlueprintAdjustOutputDamage : 1;               // Mask: 0x80, PropSize: 0x10x1F(0x1)(None)
	uint8                                        bDisableRunningWhenAttacking : 1;                  // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        bKeepExecutingWhenAcquiringTarget : 1;             // Mask: 0x2, PropSize: 0x10x20(0x1)(None)
	uint8                                        bPreventWithRider : 1;                             // Mask: 0x4, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAIForceAttackDotProductCheck : 1;                 // Mask: 0x8, PropSize: 0x10x20(0x1)(None)
	uint8                                        bInstantlyHarvestCorpse : 1;                       // Mask: 0x10, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAddPawnVelocityToProjectile : 1;                  // Mask: 0x20, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAttackStopsRotation : 1;                          // Mask: 0x40, PropSize: 0x10x20(0x1)(None)
	uint8                                        bTamedAISpecialAttack : 1;                         // Mask: 0x80, PropSize: 0x10x20(0x1)(None)
	uint8                                        bPreventWhenCarryingExplosive : 1;                 // Mask: 0x1, PropSize: 0x10x21(0x1)(None)
	uint8                                        bAllowWhenAnimationPreventsInput : 1;              // Mask: 0x2, PropSize: 0x10x21(0x1)(None)
	uint8                                        bRequireLineOfSight : 1;                           // Mask: 0x4, PropSize: 0x10x21(0x1)(None)
	uint8                                        bUseBPOverrideGetAttackAnimationIndex : 1;         // Mask: 0x8, PropSize: 0x10x21(0x1)(None)
	uint8                                        bUseSecondaryAnimationWhenSwimming : 1;            // Mask: 0x10, PropSize: 0x10x21(0x1)(None)
	uint8                                        bUseTertiaryAnimationWhenSwimming : 1;             // Mask: 0x20, PropSize: 0x10x21(0x1)(None)
	uint8                                        bHighQualityAttackOnlyPlayerOrTamed : 1;           // Mask: 0x40, PropSize: 0x10x21(0x1)(None)
	uint8                                        bMeleeTraceForHitBlockers : 1;                     // Mask: 0x80, PropSize: 0x10x21(0x1)(None)
	uint8                                        bMeleeTraceForHitBlockersAddHeadsocket : 1;        // Mask: 0x1, PropSize: 0x10x22(0x1)(None)
	uint8                                        BitPad_3EA : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47E8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIgnoreCrouchAttack : 1;                           // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        bIgnoreResettingAttackIndexInTick : 1;             // Mask: 0x2, PropSize: 0x10x24(0x1)(None)
	uint8                                        bPreventSkippingAnimGraphDuringAttack : 1;         // Mask: 0x4, PropSize: 0x10x24(0x1)(None)
	uint8                                        BitPad_3EB : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ChildStateIndexes;                                 // 0x28(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        AttackWithJumpChance;                              // 0x38(0x4)(None)
	uint8                                        Pad_47EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastAttackTime;                                    // 0x40(0x8)(None)
	double                                       RiderLastAttackTime;                               // 0x48(0x8)(None)
	float                                        AttackSelectionExpirationTime;                     // 0x50(0x4)(None)
	uint8                                        Pad_47EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AttackSelectionTime;                               // 0x58(0x8)(None)
	float                                        AttackRotationRangeDegrees;                        // 0x60(0x4)(None)
	float                                        AttackRotationGroundSpeedMultiplier;               // 0x64(0x4)(None)
	struct FRotator                              AttackRotationRate;                                // 0x68(0x18)(None)
	TArray<class FName>                          MeleeSwingSockets;                                 // 0x80(0x10)(AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  RangedSocket;                                      // 0x90(0x8)(None)
	int32                                        MeleeDamageAmount;                                 // 0x98(0x4)(None)
	float                                        MeleeDamageImpulse;                                // 0x9C(0x4)(None)
	float                                        MeleeSwingRadius;                                  // 0xA0(0x4)(None)
	uint8                                        Pad_47EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MeleeDamageType;                                   // 0xA8(0x8)(ZeroConstructor)
	float                                        AttackOffset;                                      // 0xB0(0x4)(None)
	float                                        StaminaCost;                                       // 0xB4(0x4)(None)
	float                                        RiderAttackInterval;                               // 0xB8(0x4)(None)
	float                                        DotProductCheckMin;                                // 0xBC(0x4)(None)
	float                                        DotProductCheckMax;                                // 0xC0(0x4)(None)
	uint8                                        Pad_47ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  AttackAnimations;                                  // 0xC8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                AttackAnimationWeights;                            // 0xD8(0x10)(AutoWeak, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                AttackAnimationsTimeFromEndToConsiderFinished;     // 0xE8(0x10)(AutoWeak, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                ProjectileClass;                                   // 0xF8(0x8)(ZeroConstructor)
	class UClass*                                AttackStateTypeClass;                              // 0x100(0x8)(ZeroConstructor)
	float                                        AttackRunningSpeedModifier;                        // 0x108(0x4)(None)
	float                                        SwimmingAttackRunningSpeedModifier;                // 0x10C(0x4)(None)
	float                                        SetAttackTargetTime;                               // 0x110(0x4)(None)
	uint8                                        Pad_47EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalAIState*                        AttackStateType;                                   // 0x118(0x8)(None)
	TArray<struct FVector>                       LastSocketPositions;                               // 0x120(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       LastProjectileSpawnTime;                           // 0x130(0x8)(None)
	TArray<class FName>                          AttackAnimDamageImpactFXSocketNames;               // 0x138(0x10)(None)
	uint8                                        bUseClosestSocketsForDamageImpactFX : 1;           // Mask: 0x1, PropSize: 0x10x148(0x1)(None)
	uint8                                        bDisableAttackerDamageImpactFX : 1;                // Mask: 0x2, PropSize: 0x10x148(0x1)(None)
	uint8                                        Pad_47EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DinoSaddleStruct
struct FDinoSaddleStruct
{
public:
	class USkeletalMeshComponent*                Saddle;                                            // 0x0(0x8)(ZeroConstructor)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x8(0x8)(None)
	struct FItemNetID                            ItemID;                                            // 0x10(0x8)(None)
	bool                                         bJustRemoved;                                      // 0x18(0x1)(None)
	uint8                                        Pad_47F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.EngramEntries
struct FEngramEntries
{
public:
	TArray<class UClass*>                        EngramEntries;                                     // 0x0(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.HairStyleDefinitionMeshAnimbpPair
struct FHairStyleDefinitionMeshAnimbpPair
{
public:
	TSoftObjectPtr<class USkeletalMesh>          HairMesh;                                          // 0x0(0x30)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                AnimBlueprint;                                     // 0x30(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UTexture2D>             PlayerMeshTextureMask;                             // 0x38(0x30)(None)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ShooterGame.HairStyleDefinition
struct FHairStyleDefinition
{
public:
	bool                                         bIsHairStyleLocked;                                // 0x0(0x1)(None)
	bool                                         bUseTallHairOffsetCamera;                          // 0x1(0x1)(None)
	uint8                                        Pad_47F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UnlockHairStyleName;                               // 0x4(0x8)(None)
	uint8                                        Pad_47F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HairStyleName;                                     // 0x10(0x10)(AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FHairStyleDefinitionMeshAnimbpPair> HairMeshesMale;                                    // 0x20(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        MaleBeginHairMorphTargetRange;                     // 0x30(0x4)(None)
	uint8                                        Pad_47F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHairStyleDefinitionMeshAnimbpPair> HairMeshesFemale;                                  // 0x38(0x10)(ZeroConstructor, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     FemaleHairOverride;                                // 0x48(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        FemaleBeginHairMorphTargetRange;                   // 0x78(0x4)(None)
	uint8                                        Pad_47F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            HairStylePreviewIconImage;                         // 0x80(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UTexture2D>             FemaleOverrideHairStylePreviewIconImage;           // 0x88(0x30)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoAncestorsEntryBlueprint
struct FDinoAncestorsEntryBlueprint
{
public:
	class FString                                MaleName;                                          // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        MaleDinoID1;                                       // 0x10(0x4)(None)
	int32                                        MaleDinoID2;                                       // 0x14(0x4)(None)
	class FString                                FemaleName;                                        // 0x18(0x10)(None)
	int32                                        FemaleDinoID1;                                     // 0x28(0x4)(None)
	int32                                        FemaleDinoID2;                                     // 0x2C(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PlayerConfigDynamicMaterialVectorNameVectorTypePairs
struct FPlayerConfigDynamicMaterialVectorNameVectorTypePairs
{
public:
	enum class EPlayerConfigDynamicMaterialVectorTypes DynamicMaterialVectorType;                         // 0x0(0x1)(None)
	uint8                                        Pad_47F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NameUsedForDynamicMaterialVectorParam;             // 0x4(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PlayerConfigVoiceCollectionInfo
struct FPlayerConfigVoiceCollectionInfo
{
public:
	class UPrimaryDataAsset*                     VoiceCollectionRef;                                // 0x0(0x8)(None)
	class FString                                NameUsedForVoiceCollection;                        // 0x8(0x10)(None)
	uint8                                        bIsMasculineCategory : 1;                          // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bIsFeminineCategory : 1;                           // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        Pad_47F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.BoneTypeValueStruct
struct FBoneTypeValueStruct
{
public:
	enum class EBoneModifierType                 BoneModifierType;                                  // 0x0(0x1)(None)
	uint8                                        Pad_47F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PlayerDynamicMaterialFloat
struct FPlayerDynamicMaterialFloat
{
public:
	class FName                                  NameUsedForDynamicMaterialByteParam;               // 0x0(0x8)(None)
	float                                        MinValue;                                          // 0x8(0x4)(None)
	float                                        MaxValue;                                          // 0xC(0x4)(None)
	float                                        MinRandomSliderValue;                              // 0x10(0x4)(None)
	float                                        MaxRandomSliderValue;                              // 0x14(0x4)(None)
	float                                        DefaultValueMale;                                  // 0x18(0x4)(None)
	float                                        DefaultValueFemale;                                // 0x1C(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerDynamicMaterialVector
struct FPlayerDynamicMaterialVector
{
public:
	class FName                                  NameUsedForDynamicMaterialByteParam;               // 0x0(0x8)(None)
	struct FVector                               MinValue;                                          // 0x8(0x18)(None)
	struct FVector                               MaxValue;                                          // 0x20(0x18)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PlayerDynamicMaterialColors
struct FPlayerDynamicMaterialColors
{
public:
	class FName                                  NameUsedForDynamicMaterialByteParam;               // 0x0(0x8)(None)
	struct FColor                                Value;                                             // 0x8(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.PlayerBoneBodyPreset
struct FPlayerBoneBodyPreset
{
public:
	class FString                                BodyPresetName;                                    // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                            BodyPresetPreviewIconImage;                        // 0x10(0x8)(None)
	TArray<struct FBoneTypeValueStruct>          BoneModifierSliderValues;                          // 0x18(0x10)(AutoWeak, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                DynamicMaterialByteFloats;                         // 0x28(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPlayerDynamicMaterialVector>  DynamicMaterialByteVector;                         // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPlayerDynamicMaterialColors>  DynamicMaterialByteColors;                         // 0x48(0x10)(None)
	uint8                                        bMaleOnly : 1;                                     // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        bFemaleOnly : 1;                                   // Mask: 0x2, PropSize: 0x10x58(0x1)(None)
	uint8                                        Pad_47F8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.NameColorPair
struct FNameColorPair
{
public:
	class FName                                  MaterialParamName;                                 // 0x0(0x8)(None)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.NameScalarPair
struct FNameScalarPair
{
public:
	class FName                                  MaterialParamName;                                 // 0x0(0x8)(None)
	float                                        Value;                                             // 0x8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.LocalizedSoundCueEntry
struct FLocalizedSoundCueEntry
{
public:
	class FString                                TwoLetterISOLanguageName;                          // 0x0(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       LocalizedSoundCue;                                 // 0x10(0x20)(None)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteEntry
struct FExplorerNoteEntry
{
public:
	uint8                                        Pad_47F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExplorerNoteType;                                  // 0x4(0x4)(None)
	uint8                                        bIsIsland : 1;                                     // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsScorchedEarth : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsAberration : 1;                                 // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsExtinction : 1;                                 // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsGenesis1 : 1;                                   // Mask: 0x10, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsGenesis2 : 1;                                   // Mask: 0x20, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsDossier : 1;                                    // Mask: 0x40, PropSize: 0x10x8(0x1)(None)
	uint8                                        bDontRequireProximityToChest : 1;                  // Mask: 0x80, PropSize: 0x10x8(0x1)(None)
	uint8                                        bUnlockIgnorePopup : 1;                            // Mask: 0x1, PropSize: 0x10x9(0x1)(None)
	uint8                                        bUnlockIgnoreSound : 1;                            // Mask: 0x2, PropSize: 0x10x9(0x1)(None)
	uint8                                        bPreventXPBuff : 1;                                // Mask: 0x4, PropSize: 0x10x9(0x1)(None)
	uint8                                        BitPad_3EC : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_47FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExplorerNoteDescription;                           // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  DossierTameableDinoNameTag;                        // 0x20(0x8)(None)
	TSoftObjectPtr<class USkeletalMesh>          ExplorerNoteMesh;                                  // 0x28(0x30)(ZeroConstructor, AutoWeak, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UAnimInstance>           ExplorerNoteAnimBP;                                // 0x58(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       ExplorerNoteTexture;                               // 0x88(0x20)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                            ExplorerNoteIcon;                                  // 0xA8(0x8)(ZeroConstructor)
	class UMaterialInterface*                    ExplorerNoteIconMaterial;                          // 0xB0(0x8)(ZeroConstructor)
	class USoundBase*                            UnlockedSoundOverride;                             // 0xB8(0x8)(ZeroConstructor)
	float                                        ShowExplorerNoteTitleDelayTime;                    // 0xC0(0x4)(None)
	uint8                                        Pad_47FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ExplorerNoteOpenSound;                             // 0xC8(0x8)(ZeroConstructor)
	class USoundCue*                             ExplorerNoteCloseSound;                            // 0xD0(0x8)(None)
	class FString                                MoviePath;                                         // 0xD8(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  LocalizedSubtitle;                                 // 0xE8(0x18)(AssetRegistrySearchable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FLocalizedSoundCueEntry>       LocalizedAudio;                                    // 0x100(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteAchievement
struct FExplorerNoteAchievement
{
public:
	class FString                                AchievementName;                                   // 0x0(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ExplorerNoteIndices;                               // 0x10(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.UnlockableEmoteEntry
struct FUnlockableEmoteEntry
{
public:
	class FName                                  EmoteName;                                         // 0x0(0x8)(None)
	class FString                                EmoteDescription;                                  // 0x8(0x10)(AdvancedDisplay, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  EmoteGroup;                                        // 0x18(0x8)(None)
	class FString                                UseEmoteMessage;                                   // 0x20(0x10)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UAnimMontage>           MaleAnim;                                          // 0x30(0x30)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UAnimMontage>           FemaleAnim;                                        // 0x60(0x30)(ZeroConstructor)
	float                                        EmotePlayMinimumInterval;                          // 0x90(0x4)(None)
	bool                                         bGiveDefault;                                      // 0x94(0x1)(None)
	uint8                                        Pad_47FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EmoteIcon;                                         // 0x98(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.InventoryComponentDefaultItemsAppend
struct FInventoryComponentDefaultItemsAppend
{
public:
	TArray<class UClass*>                        InventoryComponentClasses;                         // 0x0(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        AddItems;                                          // 0x10(0x10)(ZeroConstructor, AutoWeak, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        RemoveItems;                                       // 0x20(0x10)(None)
	bool                                         bAddToForceAllowCrafting;                          // 0x30(0x1)(None)
	uint8                                        Pad_47FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MultiAchievement
struct FMultiAchievement
{
public:
	class FString                                UnlockAchievement;                                 // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        RequiredAchievements;                              // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ConfigCraftingResourceRequirement
struct FConfigCraftingResourceRequirement
{
public:
	float                                        BaseResourceRequirement;                           // 0x0(0x4)(None)
	uint8                                        Pad_47FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ResourceItemTypeString;                            // 0x8(0x10)(None)
	bool                                         bCraftingRequireExactResourceType;                 // 0x18(0x1)(None)
	uint8                                        Pad_47FF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ConfigItemCraftingCostOverride
struct FConfigItemCraftingCostOverride
{
public:
	class FString                                ItemClassString;                                   // 0x0(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FConfigCraftingResourceRequirement> BaseCraftingResourceRequirements;                  // 0x10(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.MaxItemQuantityOverride
struct FMaxItemQuantityOverride
{
public:
	int32                                        MaxItemQuantity;                                   // 0x0(0x4)(None)
	bool                                         bIgnoreMultiplier;                                 // 0x4(0x1)(None)
	uint8                                        Pad_4800[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ConfigMaxItemQuantityOverride
struct FConfigMaxItemQuantityOverride
{
public:
	class FString                                ItemClassString;                                   // 0x0(0x10)(None)
	struct FMaxItemQuantityOverride              Quantity;                                          // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ItemMaxItemQuantityOverride
struct FItemMaxItemQuantityOverride
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(None)
	struct FMaxItemQuantityOverride              Quantity;                                          // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemCraftingCostOverride
struct FItemCraftingCostOverride
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(ZeroConstructor)
	TArray<struct FCraftingResourceRequirement>  BaseCraftingResourceRequirements;                  // 0x8(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.ClassRemapping
struct FClassRemapping
{
public:
	TSoftClassPtr<class UObject>                 FromClass;                                         // 0x0(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UObject>                 ToClass;                                           // 0x30(0x30)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ObjectCorrelation
struct FObjectCorrelation
{
public:
	class UObject*                               FromObject;                                        // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ToObject;                                          // 0x8(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.OverrideAnimBlueprintEntry
struct FOverrideAnimBlueprintEntry
{
public:
	TSoftClassPtr<class UAnimInstance>           FromBPClass;                                       // 0x0(0x30)(ZeroConstructor, AutoWeak, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UAnimInstance>           ToBPClass;                                         // 0x30(0x30)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.ClassRemappingWeight
struct FClassRemappingWeight
{
public:
	TSoftClassPtr<class UObject>                 FromClass;                                         // 0x0(0x30)(ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class UObject>>         ToClasses;                                         // 0x30(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                Weights;                                           // 0x40(0x10)(None)
	class FName                                  ActiveEvent;                                       // 0x50(0x8)(None)
	uint8                                        bExactMatch : 1;                                   // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        Pad_4801[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.ClassAddition
struct FClassAddition
{
public:
	TSoftClassPtr<class UObject>                 ForClass;                                          // 0x0(0x30)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class UObject>>         ClassAdditions;                                    // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ActiveEventSupplyCrateWeight
struct FActiveEventSupplyCrateWeight
{
public:
	TArray<TSoftClassPtr<class UObject>>         ReplacementCrateClasses;                           // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                Weights;                                           // 0x10(0x10)(None)
	class FName                                  ActiveEvent;                                       // 0x20(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.BuffAddition
struct FBuffAddition
{
public:
	TSoftClassPtr<class APrimalCharacter>        ForClass;                                          // 0x0(0x30)(ZeroConstructor, AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        BuffAdditions;                                     // 0x30(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.AppIDItem
struct FAppIDItem
{
public:
	class FString                                AchievementID;                                     // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        AchievementIDs;                                    // 0x10(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  GiveItemIfEmoteNameUnlocked;                       // 0x20(0x8)(None)
	int32                                        AppID;                                             // 0x28(0x4)(None)
	int32                                        PlayerBadgeGroup;                                  // 0x2C(0x4)(None)
	bool                                         bForceNewDefaultCosmetic;                          // 0x30(0x1)(None)
	uint8                                        Pad_4802[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PlayerIDStrings;                                   // 0x38(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                ItemClass;                                         // 0x48(0x8)(ZeroConstructor)
	TArray<class UClass*>                        ItemClasses;                                       // 0x50(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.BoneModifierRange
struct FBoneModifierRange
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	struct FVector                               MinScale;                                          // 0x8(0x18)(None)
	struct FVector                               MaxScale;                                          // 0x20(0x18)(None)
	struct FVector                               MinTranslation;                                    // 0x38(0x18)(None)
	struct FVector                               MaxTranslation;                                    // 0x50(0x18)(None)
	bool                                         Recursive;                                         // 0x68(0x1)(None)
	uint8                                        Pad_4803[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.BoneModifierRangeArray
struct FBoneModifierRangeArray
{
public:
	uint8                                        bAffectsLegLength : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseExtraMax : 1;                                  // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3ED : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4804[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinLegLengthMultiplier;                            // 0x4(0x4)(None)
	float                                        MaxLegLengthMultiplier;                            // 0x8(0x4)(None)
	uint8                                        Pad_4805[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneModifierRange>            BoneArray;                                         // 0x10(0x10)(None)
	struct FVector2D                             GlobalFatRemap;                                    // 0x20(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.RandValueRange
struct FRandValueRange
{
public:
	float                                        MinVal;                                            // 0x0(0x4)(None)
	float                                        MaxVal;                                            // 0x4(0x4)(None)
	float                                        RandPower;                                         // 0x8(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DinoBabySetup
struct FDinoBabySetup
{
public:
	class FName                                  DinoNameTag;                                       // 0x0(0x8)(None)
	TArray<struct FBoneModifierRangeArray>       BabyBoneModifierRanges;                            // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                WildRandomScaleRangeWeights;                       // 0x18(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRandValueRange>               WildRandomScaleRanges;                             // 0x28(0x10)(None)
};

// 0xA38 (0xA38 - 0x0)
// ScriptStruct ShooterGame.PlayerCharacterGenderDefinition
struct FPlayerCharacterGenderDefinition
{
public:
	class FString                                GenderString;                                      // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                CharacterBlueprint;                                // 0x10(0x8)(ZeroConstructor)
	TArray<struct FLinearColor>                  ColorSetBody;                                      // 0x18(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FLinearColor>                  ColorSetHair;                                      // 0x28(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FLinearColor>                  ColorSetEyes;                                      // 0x38(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    CharacterPreviewMaterial;                          // 0x48(0x8)(ZeroConstructor)
	TArray<class FString>                        DefaultCharacterNames;                             // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                DefaultCharacterNameWeights;                       // 0x60(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBoneModifierRangeArray               CharacterBoneModifierRanges[0x1A];                 // 0x70(0x4E0)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBoneModifierRangeArray               ExtraCharacterBoneModifierMax[0x1A];               // 0x550(0x4E0)(None)
	class UClass*                                GlobalBoneModifiers;                               // 0xA30(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.TeamPingData
struct FTeamPingData
{
public:
	uint8                                        PingID;                                            // 0x0(0x1)(None)
	uint8                                        Pad_4806[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	class AActor*                                ToActor;                                           // 0x20(0x8)(None)
	int32                                        ByPlayerID;                                        // 0x28(0x4)(None)
	int32                                        TargetingTeam;                                     // 0x2C(0x4)(None)
	double                                       CreationTime;                                      // 0x30(0x8)(None)
	enum class ETeamPingType                     PingType;                                          // 0x38(0x1)(None)
	uint8                                        Pad_4807[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x40(0x10)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.TeamPingDataForClient
struct FTeamPingDataForClient
{
public:
	class FString                                PingText;                                          // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               Location;                                          // 0x10(0x18)(None)
	class AActor*                                ToActor;                                           // 0x28(0x8)(ZeroConstructor)
	int32                                        ByPlayerID;                                        // 0x30(0x4)(None)
	uint8                                        Pad_4808[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CreationTime;                                      // 0x38(0x8)(None)
	enum class ETeamPingType                     PingType;                                          // 0x40(0x1)(None)
	uint8                                        Pad_4809[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PingIcon;                                          // 0x48(0x8)(ZeroConstructor)
	struct FLinearColor                          PingColor;                                         // 0x50(0x10)(None)
	float                                        PingDuration;                                      // 0x60(0x4)(None)
	uint8                                        Pad_480A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x68(0x10)(None)
	class USoundCue*                             SoundOnPing;                                       // 0x78(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.TribeWar
struct FTribeWar
{
public:
	int32                                        EnemyTribeID;                                      // 0x0(0x4)(None)
	int32                                        StartDayNumber;                                    // 0x4(0x4)(None)
	int32                                        EndDayNumber;                                      // 0x8(0x4)(None)
	float                                        StartDayTime;                                      // 0xC(0x4)(None)
	float                                        EndDayTime;                                        // 0x10(0x4)(None)
	bool                                         bIsApproved;                                       // 0x14(0x1)(None)
	uint8                                        Pad_480B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitiatingTribeID;                                 // 0x18(0x4)(None)
	uint8                                        Pad_480C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EnemyTribeName;                                    // 0x20(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.TribeAlliance
struct FTribeAlliance
{
public:
	class FString                                AllianceName;                                      // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint32                                       AllianceID;                                        // 0x10(0x4)(None)
	uint8                                        Pad_480D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        MembersTribeName;                                  // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint32>                               MembersTribeID;                                    // 0x28(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint32>                               AdminsTribeID;                                     // 0x38(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.TribeRankGroup
struct FTribeRankGroup
{
public:
	class FString                                RankGroupName;                                     // 0x0(0x10)(None)
	uint8                                        RankGroupRank;                                     // 0x10(0x1)(None)
	uint8                                        InventoryRank;                                     // 0x11(0x1)(None)
	uint8                                        StructureActivationRank;                           // 0x12(0x1)(None)
	uint8                                        NewStructureActivationRank;                        // 0x13(0x1)(None)
	uint8                                        NewStructureInventoryRank;                         // 0x14(0x1)(None)
	uint8                                        PetOrderRank;                                      // 0x15(0x1)(None)
	uint8                                        PetRidingRank;                                     // 0x16(0x1)(None)
	uint8                                        InviteToGroupRank;                                 // 0x17(0x1)(None)
	uint8                                        MaxPromotionGroupRank;                             // 0x18(0x1)(None)
	uint8                                        MaxDemotionGroupRank;                              // 0x19(0x1)(None)
	uint8                                        MaxBanishmentGroupRank;                            // 0x1A(0x1)(None)
	uint8                                        NumInvitesRemaining;                               // 0x1B(0x1)(None)
	uint8                                        bPreventStructureDemolish : 1;                     // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bPreventStructureAttachment : 1;                   // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bPreventStructureBuildInRange : 1;                 // Mask: 0x4, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bPreventUnclaiming : 1;                            // Mask: 0x8, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bAllowInvites : 1;                                 // Mask: 0x10, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bLimitInvites : 1;                                 // Mask: 0x20, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bAllowDemotions : 1;                               // Mask: 0x40, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bAllowPromotions : 1;                              // Mask: 0x80, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bAllowBanishments : 1;                             // Mask: 0x1, PropSize: 0x10x1D(0x1)(None)
	uint8                                        bPreventWirelessCrafting : 1;                      // Mask: 0x2, PropSize: 0x10x1D(0x1)(None)
	uint8                                        BitPad_3EE : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_480E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        TeleportMembersRank;                               // 0x20(0x1)(None)
	uint8                                        TeleportDinosRank;                                 // 0x21(0x1)(None)
	uint8                                        Pad_480F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDefaultRank : 1;                                  // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        bAllowPing : 1;                                    // Mask: 0x2, PropSize: 0x10x24(0x1)(None)
	uint8                                        bAllowRallyPoint : 1;                              // Mask: 0x4, PropSize: 0x10x24(0x1)(None)
	uint8                                        Pad_4810[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
struct FPrimalPlayerCharacterConfigStruct
{
public:
	uint8                                        bIsFemale : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3EF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4811[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BodyColors[0x4];                                   // 0x4(0x40)(None)
	uint8                                        OverrideHeadHairColor[0x2];                        // 0x44(0x2)(None)
	uint8                                        OverrideFacialHairColor[0x2];                      // 0x46(0x2)(None)
	uint8                                        FacialHairIndex;                                   // 0x48(0x1)(None)
	uint8                                        HeadHairIndex;                                     // 0x49(0x1)(None)
	uint8                                        EyebrowIndex;                                      // 0x4A(0x1)(None)
	uint8                                        Pad_4812[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentOfFullHeadHairGrowth;                       // 0x4C(0x4)(None)
	float                                        PercentOfFullFacialHairGrowth;                     // 0x50(0x4)(None)
	uint8                                        Pad_4813[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerCharacterName;                               // 0x58(0x10)(None)
	float                                        RawBoneModifiers[0x1A];                            // 0x68(0x68)(None)
	uint8                                        DynamicMaterialBytes[0x32];                        // 0xD0(0x32)(None)
	uint8                                        Pad_4814[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerVoiceCollectionIndex;                        // 0x104(0x4)(None)
	uint8                                        bUsingCustomPlayerVoiceCollection : 1;             // Mask: 0x1, PropSize: 0x10x108(0x1)(None)
	uint8                                        BitPad_3F0 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4815[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerSpawnRegionIndex;                            // 0x10C(0x4)(None)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ShooterGame.CustomTrackedActorInfo
struct FCustomTrackedActorInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        TameAffinityPercent;                               // 0x10(0x4)(None)
	float                                        HealthPercent;                                     // 0x14(0x4)(None)
	float                                        HealthCurrent;                                     // 0x18(0x4)(None)
	float                                        HealthMax;                                         // 0x1C(0x4)(None)
	float                                        HungerPercent;                                     // 0x20(0x4)(None)
	float                                        HungerCurrent;                                     // 0x24(0x4)(None)
	float                                        HungerMax;                                         // 0x28(0x4)(None)
	float                                        TorpidityPercent;                                  // 0x2C(0x4)(None)
	float                                        TameEffectivenessPercent;                          // 0x30(0x4)(None)
	int32                                        TameEffectivenessLvlModifier;                      // 0x34(0x4)(None)
	struct FVector                               Location;                                          // 0x38(0x18)(None)
	bool                                         bIsConcious;                                       // 0x50(0x1)(None)
	bool                                         bUseGender;                                        // 0x51(0x1)(None)
	bool                                         bIsFemale;                                         // 0x52(0x1)(None)
	bool                                         bIsTamed;                                          // 0x53(0x1)(None)
	float                                        DinoImprintingQuality;                             // 0x54(0x4)(None)
	float                                        BabyNextCuddleTime;                                // 0x58(0x4)(None)
	float                                        BabyAge;                                           // 0x5C(0x4)(None)
	float                                        TimeUntilNextNamedAge;                             // 0x60(0x4)(None)
	uint8                                        Pad_4816[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastTameConsumedFoodTime;                          // 0x68(0x8)(None)
	class FString                                ImprinterName;                                     // 0x70(0x10)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        DataID1;                                           // 0x80(0x4)(None)
	int32                                        DataID2;                                           // 0x84(0x4)(None)
	class FString                                TargetName;                                        // 0x88(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bIsPlayer;                                         // 0x98(0x1)(None)
	bool                                         bIsFavorited;                                      // 0x99(0x1)(None)
	bool                                         bIsTrackedWaypoint;                                // 0x9A(0x1)(None)
	uint8                                        Pad_4817[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DinoEntry;                                         // 0xA0(0x8)(None)
	bool                                         bHideFromTrackListAndOnlyShowOnMap;                // 0xA8(0x1)(None)
	uint8                                        Pad_4818[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TribeName;                                         // 0xB0(0x10)(None)
	int32                                        TargetingTeam;                                     // 0xC0(0x4)(None)
	bool                                         bIsVehicle;                                        // 0xC4(0x1)(None)
	bool                                         bIsValidForCurrentFilter;                          // 0xC5(0x1)(None)
	uint8                                        Pad_4819[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0xC8(0x4)(None)
	uint8                                        Pad_481A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TamedAtTime;                                       // 0xD0(0x8)(None)
	bool                                         POIVisible;                                        // 0xD8(0x1)(None)
	uint8                                        Pad_481B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct ShooterGame.TrackedActorPlusInfoStruct
struct FTrackedActorPlusInfoStruct
{
public:
	class AActor*                                TrackedActor;                                      // 0x0(0x8)(ZeroConstructor)
	struct FCustomTrackedActorInfo               ReplicatedInfo;                                    // 0x8(0xE0)(None)
	struct FVector                               ActorLastKnownLocation;                            // 0xE8(0x18)(None)
	struct FVector                               LastPOILocation;                                   // 0x100(0x18)(None)
	int32                                        PreviousLinkedListTrackedActorID;                  // 0x118(0x4)(None)
	uint8                                        PreviousLinkedListTrackedActorCategory;            // 0x11C(0x1)(None)
	uint8                                        Pad_481C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NextLinkedListTrackedActorID;                      // 0x120(0x4)(None)
	uint8                                        NextLinkedListTrackedActorCategory;                // 0x124(0x1)(None)
	uint8                                        Pad_481D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct ShooterGame.TribeData
struct FTribeData
{
public:
	class FString                                TribeName;                                         // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       LastNameChangeTime;                                // 0x10(0x8)(None)
	uint32                                       OwnerPlayerDataId;                                 // 0x18(0x4)(None)
	int32                                        TribeID;                                           // 0x1C(0x4)(None)
	TArray<class FString>                        MembersPlayerName;                                 // 0x20(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint32>                               MembersPlayerDataID;                               // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint8>                                MembersRankGroups;                                 // 0x40(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<double>                               SlotFreedTime;                                     // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint32>                               TribeAdmins;                                       // 0x60(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTribeAlliance>                TribeAlliances;                                    // 0x70(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bSetGovernment;                                    // 0x80(0x1)(None)
	uint8                                        Pad_481E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTribeGovernment                      TribeGovernment;                                   // 0x84(0x14)(None)
	TArray<struct FPrimalPlayerCharacterConfigStruct> MembersConfigs;                                    // 0x98(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTribeWar>                     TribeWars;                                         // 0xA8(0x10)(AutoWeak, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        TribeLog;                                          // 0xB8(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        LogIndex;                                          // 0xC8(0x4)(None)
	uint8                                        Pad_481F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTribeRankGroup>               TribeRankGroups;                                   // 0xD0(0x10)(AutoWeak, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        NumTribeDinos;                                     // 0xE0(0x4)(None)
	uint8                                        Pad_4820[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTrackedActorPlusInfoStruct>   CachedTeamTameList_UpdatedOnInterval;              // 0xE8(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       LastNetworkTimeUpdatedCachedTeamTameList;          // 0xF8(0x8)(None)
	struct FTeamPingData                         RallyPointData;                                    // 0x100(0x50)(None)
	bool                                         bHaveRallyPointData;                               // 0x150(0x1)(None)
	uint8                                        Pad_4821[0x57];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ItemSetup
struct FItemSetup
{
public:
	class UClass*                                ItemType;                                          // 0x0(0x8)(None)
	class FString                                ItemBlueprintPath;                                 // 0x8(0x10)(None)
	float                                        MinQuality;                                        // 0x18(0x4)(None)
	float                                        MaxQuality;                                        // 0x1C(0x4)(None)
	int32                                        Quantity;                                          // 0x20(0x4)(None)
	uint8                                        bAutoEquip : 1;                                    // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        bDontStack : 1;                                    // Mask: 0x2, PropSize: 0x10x24(0x1)(None)
	uint8                                        bForceBlueprint : 1;                               // Mask: 0x4, PropSize: 0x10x24(0x1)(None)
	uint8                                        Pad_4822[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ShooterGame.DinoSetup
struct FDinoSetup
{
public:
	class UClass*                                DinoType;                                          // 0x0(0x8)(ZeroConstructor)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoSoftReference;                                 // 0x8(0x30)(ZeroConstructor, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DinoBlueprintPath;                                 // 0x38(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DinoName;                                          // 0x48(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        DinoLevel;                                         // 0x58(0x4)(None)
	uint8                                        BasePointsPerStat[0xC];                            // 0x5C(0xC)(None)
	uint8                                        PlayerAddedPointsPerStat[0xC];                     // 0x68(0xC)(None)
	uint8                                        Pad_4823[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnOffset;                                       // 0x78(0x18)(None)
	enum class EDinoTamedOrder                   DinoState;                                         // 0x90(0x1)(None)
	uint8                                        Pad_4824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPrimalCharacterStatusValue> PrioritizeStats;                                   // 0x98(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FItemSetup>                    TamedDinoInventory;                                // 0xA8(0x10)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                SaddleType;                                        // 0xB8(0x8)(ZeroConstructor)
	TSoftClassPtr<class UPrimalItem>             SaddleSoftReference;                               // 0xC0(0x30)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                SaddleBlueprintPath;                               // 0xF0(0x10)(None)
	float                                        SaddleQuality;                                     // 0x100(0x4)(None)
	float                                        SaddleMinRandomQuality;                            // 0x104(0x4)(None)
	float                                        RandomWeight;                                      // 0x108(0x4)(None)
	uint8                                        bIsTamed : 1;                                      // Mask: 0x1, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bIgnoreMaxTameLimit : 1;                           // Mask: 0x2, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bPreventSpawningAtTameLimit : 1;                   // Mask: 0x4, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bBlockTamedDialog : 1;                             // Mask: 0x8, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bAutoEquipSaddle : 1;                              // Mask: 0x10, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bUseFixedSpawnLevel : 1;                           // Mask: 0x20, PropSize: 0x10x10C(0x1)(None)
	uint8                                        BitPad_3F1 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4825[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WildRandomScaleOverride;                           // 0x110(0x4)(None)
	float                                        DinoImprintingQuality;                             // 0x114(0x4)(None)
	bool                                         bNetInfoFromClient;                                // 0x118(0x1)(None)
	uint8                                        Pad_4826[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoSetupGroup
struct FDinoSetupGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(None)
	float                                        RandomWeight;                                      // 0x8(0x4)(None)
	uint8                                        Pad_4827[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDinoSetup>                    Entries;                                           // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                EntriesSpawnNumberLimits;                          // 0x20(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemToDinoStatParams
struct FItemToDinoStatParams
{
public:
	enum class EPrimalItemStat                   ItemStat;                                          // 0x0(0x1)(None)
	enum class EPrimalCharacterStatusValue       DinoStat;                                          // 0x1(0x1)(None)
	uint8                                        Pad_4828[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinItemStatValue;                                  // 0x4(0x4)(None)
	int32                                        MaxItemStatValue;                                  // 0x8(0x4)(None)
	int32                                        MinDinoStatValue;                                  // 0xC(0x4)(None)
	int32                                        MaxDinoStatValue;                                  // 0x10(0x4)(None)
	enum class ESimpleCurve                      ConversionCurve;                                   // 0x14(0x1)(None)
	uint8                                        Pad_4829[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.NamedTeamDefinition
struct FNamedTeamDefinition
{
public:
	class FName                                  TeamName;                                          // 0x0(0x8)(None)
	uint8                                        bTargetingTeamExclusionList : 1;                   // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bTargetingTeamInclusionList : 1;                   // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        bAllowTargetsOnOwnTeam : 1;                        // Mask: 0x4, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIsCarnivore : 1;                                  // Mask: 0x8, PropSize: 0x10x8(0x1)(None)
	uint8                                        bTargetPlayersAndTamedOnly : 1;                    // Mask: 0x10, PropSize: 0x10x8(0x1)(None)
	uint8                                        bForceTargetPlayersAndTamed : 1;                   // Mask: 0x20, PropSize: 0x10x8(0x1)(None)
	uint8                                        bIgnoredByAllTeams : 1;                            // Mask: 0x40, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_3F2 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_482A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TeamNameList;                                      // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          TargetingMultiplierTeamNames;                      // 0x20(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          DontGiveDamageTeamList;                            // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          DontReceiveDamageTeamList;                         // 0x40(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          MaximumTargetableDistanceTeams;                    // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                MaximumTargetableDistances;                        // 0x60(0x10)(AutoWeak, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                TargetingMultiplierTeamWeights;                    // 0x70(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.ColorDefinition
struct FColorDefinition
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(None)
	struct FLinearColor                          ColorValue;                                        // 0x8(0x10)(None)
	bool                                         bHasOverridePriority;                              // 0x18(0x1)(None)
	uint8                                        Pad_482B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ExtraItemAttachmentInfo
struct FExtraItemAttachmentInfo
{
public:
	class UActorComponent*                       ExtraComponentsToAttach;                           // 0x0(0x8)(None)
	class FName                                  SocketToAttachTo;                                  // 0x8(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.ItemAttachmentInfo
struct FItemAttachmentInfo
{
public:
	class UActorComponent*                       ComponentToAttach;                                 // 0x0(0x8)(ZeroConstructor)
	TArray<struct FExtraItemAttachmentInfo>      ExtraItemAttachmentInfos;                          // 0x8(0x10)(ZeroConstructor, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  SocketToAttachTo;                                  // 0x18(0x8)(None)
	uint8                                        bCanBuildStructuresOn : 1;                         // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        bUseParentAnims : 1;                               // Mask: 0x2, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAttachToFirstPersonHands : 1;                     // Mask: 0x4, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAttachToThirdPersonWeaponMesh : 1;                // Mask: 0x8, PropSize: 0x10x20(0x1)(None)
	uint8                                        bDisabled : 1;                                     // Mask: 0x10, PropSize: 0x10x20(0x1)(None)
	uint8                                        bUseItemColors : 1;                                // Mask: 0x20, PropSize: 0x10x20(0x1)(None)
	uint8                                        bUseIgnoreAttachmentWhenEquipmentOfType : 1;       // Mask: 0x40, PropSize: 0x10x20(0x1)(None)
	uint8                                        bHideCharacterMesh : 1;                            // Mask: 0x80, PropSize: 0x10x20(0x1)(None)
	uint8                                        bAttachmentRequireWeaponSupportShield : 1;         // Mask: 0x1, PropSize: 0x10x21(0x1)(None)
	uint8                                        bForceDediAttachment : 1;                          // Mask: 0x2, PropSize: 0x10x21(0x1)(None)
	uint8                                        bForceVisibleInFirstPerson : 1;                    // Mask: 0x4, PropSize: 0x10x21(0x1)(None)
	uint8                                        bIgnoreEquipmentForceHideFirstPerson : 1;          // Mask: 0x8, PropSize: 0x10x21(0x1)(None)
	uint8                                        bAttachToFirstPersonCamera : 1;                    // Mask: 0x10, PropSize: 0x10x21(0x1)(None)
	uint8                                        bAttachToFirstPersonCameraCapsule : 1;             // Mask: 0x20, PropSize: 0x10x21(0x1)(None)
	uint8                                        bPersistShieldRefreshOnWeaponEquip : 1;            // Mask: 0x40, PropSize: 0x10x21(0x1)(None)
	uint8                                        bDisableForTaxidermy : 1;                          // Mask: 0x80, PropSize: 0x10x21(0x1)(None)
	uint8                                        bDontAddAttachedParentBounds : 1;                  // Mask: 0x1, PropSize: 0x10x22(0x1)(None)
	uint8                                        BitPad_3F3 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_482C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  OnlyUseAttachmentForActorClass;                    // 0x28(0x30)(ZeroConstructor)
	enum class EPrimalEquipmentType              IgnoreAttachmentWhenEquipmentOfType;               // 0x58(0x1)(None)
	uint8                                        Pad_482D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachedCompName;                                  // 0x5C(0x8)(None)
	TWeakObjectPtr<class UActorComponent>        AttachedCompReference;                             // 0x64(0x8)(None)
	uint8                                        Pad_482E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.LevelExperienceRamp
struct FLevelExperienceRamp
{
public:
	TArray<float>                                ExperiencePointsForLevel;                          // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DamageTypeAdjuster
struct FDamageTypeAdjuster
{
public:
	TSoftClassPtr<class UDamageType>             DamageTypeClass;                                   // 0x0(0x30)(None)
	float                                        DamageMultiplier;                                  // 0x30(0x4)(None)
	uint8                                        bIgnoreMultiplierIfWildDinoAttacker : 1;           // Mask: 0x1, PropSize: 0x10x34(0x1)(None)
	uint8                                        bIgnoreMultiplierIfTamedDinoAttacker : 1;          // Mask: 0x2, PropSize: 0x10x34(0x1)(None)
	uint8                                        bOnlyUseMultiplierIfWildDinoAttacker : 1;          // Mask: 0x4, PropSize: 0x10x34(0x1)(None)
	uint8                                        bOnlyUseMultiplierIfTamedDinoAttacker : 1;         // Mask: 0x8, PropSize: 0x10x34(0x1)(None)
	uint8                                        bOnlyUseMultiplierIfTamed : 1;                     // Mask: 0x10, PropSize: 0x10x34(0x1)(None)
	uint8                                        Pad_482F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusValueDefinition
struct FPrimalCharacterStatusValueDefinition
{
public:
	class UTexture2D*                            StatusValueIcon;                                   // 0x0(0x8)(None)
	class FString                                StatusValueName;                                   // 0x8(0x10)(None)
	bool                                         bLevelUpSetToMaxValue;                             // 0x18(0x1)(None)
	bool                                         bDisplayHideCurrentValue;                          // 0x19(0x1)(None)
	bool                                         bDisplayAsPercent;                                 // 0x1A(0x1)(None)
	uint8                                        Pad_4830[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.PrimalItemQuality
struct FPrimalItemQuality
{
public:
	struct FLinearColor                          QualityColor;                                      // 0x0(0x10)(None)
	class FString                                QualityName;                                       // 0x10(0x10)(None)
	float                                        QualityRandomMultiplierThreshold;                  // 0x20(0x4)(None)
	float                                        CraftingXPMultiplier;                              // 0x24(0x4)(None)
	float                                        RepairingXPMultiplier;                             // 0x28(0x4)(None)
	float                                        CraftingResourceRequirementsMultiplier;            // 0x2C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalItemDefinition
struct FPrimalItemDefinition
{
public:
	class UTexture2D*                            ItemTypeIcon;                                      // 0x0(0x8)(None)
	class FString                                ItemTypeName;                                      // 0x8(0x10)(None)
	struct FColor                                ItemTypeColor;                                     // 0x18(0x4)(None)
	uint8                                        Pad_4831[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PrimalItemStatDefinition
struct FPrimalItemStatDefinition
{
public:
	class UTexture2D*                            ItemStatIcon;                                      // 0x0(0x8)(None)
	class FString                                ItemStatName;                                      // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PrimalEquipmentDefinition
struct FPrimalEquipmentDefinition
{
public:
	class UTexture2D*                            EquipmentTypeIcon;                                 // 0x0(0x8)(None)
	class FString                                EquipmentTypeName;                                 // 0x8(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.StatusValueModifierDescription
struct FStatusValueModifierDescription
{
public:
	class UTexture2D*                            ModifierIcon;                                      // 0x0(0x8)(None)
	class FString                                ModifierName;                                      // 0x8(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ModifierDescription;                               // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FColor                                ModifierColor;                                     // 0x28(0x4)(None)
	bool                                         bDisplayHUDMessage;                                // 0x2C(0x1)(None)
	uint8                                        Pad_4832[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HUDMessage;                                        // 0x30(0x10)(None)
	struct FColor                                HUDMessageColor;                                   // 0x40(0x4)(None)
	bool                                         bPreventDrawingBuffDescription;                    // 0x44(0x1)(None)
	uint8                                        Pad_4833[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BuffType;                                          // 0x48(0x4)(None)
	bool                                         bPreventDisplayBuffHUD;                            // 0x4C(0x1)(None)
	uint8                                        Pad_4834[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusStateDefinition
struct FPrimalCharacterStatusStateDefinition
{
public:
	enum class EPrimalCharacterStatusValue       StatusValueType;                                   // 0x0(0x1)(None)
	uint8                                        Pad_4835[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StatusValueThresholdIndex;                         // 0x4(0x4)(None)
	class UTexture2D*                            StatusStateIcon;                                   // 0x8(0x8)(None)
	class FString                                StatusStateName;                                   // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                StatusStateDescription;                            // 0x20(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FColor                                StatusStateNameColor;                              // 0x30(0x4)(None)
	bool                                         bUsed;                                             // 0x34(0x1)(None)
	bool                                         bDisplayHUDMessage;                                // 0x35(0x1)(None)
	uint8                                        Pad_4836[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HUDMessage;                                        // 0x38(0x10)(None)
	struct FColor                                HUDMessageColor;                                   // 0x48(0x4)(None)
	int32                                        BuffType;                                          // 0x4C(0x4)(None)
	bool                                         bPreventDisplayBuffHUD;                            // 0x50(0x1)(None)
	uint8                                        Pad_4837[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.TutorialDefinition
struct FTutorialDefinition
{
public:
	class FString                                TutorialTitle;                                     // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                TutorialText;                                      // 0x10(0x10)(None)
	class UTexture2D*                            TutorialImage;                                     // 0x20(0x8)(None)
	float                                        TutorialDuration;                                  // 0x28(0x4)(None)
	int32                                        NextTutorialIndex;                                 // 0x2C(0x4)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateItemEntry
struct FSupplyCrateItemEntry
{
public:
	class FString                                ItemEntryName;                                     // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        EntryWeight;                                       // 0x10(0x4)(None)
	uint8                                        Pad_4838[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        Items;                                             // 0x18(0x10)(AutoWeak, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ItemClassStrings;                                  // 0x28(0x10)(AutoWeak, ContainsInstancedReference, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ItemsWeights;                                      // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ItemQuantityOverrides;                             // 0x48(0x10)(None)
	float                                        MinQuantity;                                       // 0x58(0x4)(None)
	float                                        MaxQuantity;                                       // 0x5C(0x4)(None)
	bool                                         bApplyQuantityToSingleItem;                        // 0x60(0x1)(None)
	uint8                                        Pad_4839[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        QuantityPower;                                     // 0x64(0x4)(None)
	float                                        MinRandomQuality;                                  // 0x68(0x4)(None)
	float                                        MinQuality;                                        // 0x6C(0x4)(None)
	float                                        MaxQuality;                                        // 0x70(0x4)(None)
	float                                        QualityPower;                                      // 0x74(0x4)(None)
	uint8                                        bForceBlueprint : 1;                               // Mask: 0x1, PropSize: 0x10x78(0x1)(None)
	uint8                                        bForcePreventGrinding : 1;                         // Mask: 0x2, PropSize: 0x10x78(0x1)(None)
	uint8                                        BitPad_3F4 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_483A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToBeBlueprintOverride;                       // 0x7C(0x4)(None)
	float                                        ItemStatClampsMultiplier;                          // 0x80(0x4)(None)
	float                                        ChanceToActuallyGiveItem;                          // 0x84(0x4)(None)
	float                                        RequiresMinQuality;                                // 0x88(0x4)(None)
	uint8                                        Pad_483B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateItemSet
struct FSupplyCrateItemSet
{
public:
	class FString                                SetName;                                           // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FSupplyCrateItemEntry>         ItemEntries;                                       // 0x10(0x10)(ZeroConstructor)
	float                                        MinNumItems;                                       // 0x20(0x4)(None)
	float                                        MaxNumItems;                                       // 0x24(0x4)(None)
	float                                        NumItemsPower;                                     // 0x28(0x4)(None)
	float                                        SetWeight;                                         // 0x2C(0x4)(None)
	bool                                         bItemsRandomWithoutReplacement;                    // 0x30(0x1)(None)
	uint8                                        Pad_483C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemSetOverride;                                   // 0x38(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ConfigSupplyCrateItemsOverride
struct FConfigSupplyCrateItemsOverride
{
public:
	class FString                                SupplyCrateClassString;                            // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        MinItemSets;                                       // 0x10(0x4)(None)
	int32                                        MaxItemSets;                                       // 0x14(0x4)(None)
	int32                                        NumItemSetsPower;                                  // 0x18(0x4)(None)
	bool                                         bSetsRandomWithoutReplacement;                     // 0x1C(0x1)(None)
	uint8                                        Pad_483D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSupplyCrateItemSet>           ItemSets;                                          // 0x20(0x10)(None)
	bool                                         bAppendItemSets;                                   // 0x30(0x1)(None)
	bool                                         bAppendPreventIncreasingMinMaxItemSets;            // 0x31(0x1)(None)
	uint8                                        Pad_483E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.NPCSpawnLimit
struct FNPCSpawnLimit
{
public:
	TSoftClassPtr<class APrimalDinoCharacter>    NPCClass;                                          // 0x0(0x30)(SimpleDisplay, AdvancedDisplay)
	class FString                                NPCClassString;                                    // 0x30(0x10)(None)
	float                                        MaxPercentageOfDesiredNumToAllow;                  // 0x40(0x4)(None)
	uint8                                        Pad_483F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.NPCDifficultyLevelRange
struct FNPCDifficultyLevelRange
{
public:
	TArray<float>                                EnemyLevelsMin;                                    // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                EnemyLevelsMax;                                    // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                GameDifficulties;                                  // 0x20(0x10)(None)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct ShooterGame.NPCSpawnEntry
struct FNPCSpawnEntry
{
public:
	class FString                                AnEntryName;                                       // 0x0(0x10)(AutoWeak, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> NPCsToSpawn;                                       // 0x10(0x10)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        NPCsToSpawnStrings;                                // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FClassRemappingWeight>         NPCRandomSpawnClassWeights;                        // 0x30(0x10)(ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       NPCsSpawnOffsets;                                  // 0x40(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                NPCsToSpawnPercentageChance;                       // 0x50(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                NPCMinLevelOffset;                                 // 0x60(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                NPCMaxLevelOffset;                                 // 0x70(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                NPCMinLevelMultiplier;                             // 0x80(0x10)(TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                NPCMaxLevelMultiplier;                             // 0x90(0x10)(AutoWeak, ContainsInstancedReference, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        bAddLevelOffsetBeforeMultiplier : 1;               // Mask: 0x1, PropSize: 0x10xA0(0x1)(None)
	uint8                                        BitPad_3F5 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4840[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                NPCOverrideLevel;                                  // 0xA8(0x10)(SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               ExtentCheck;                                       // 0xB8(0x18)(None)
	struct FVector                               GroupSpawnOffset;                                  // 0xD0(0x18)(None)
	float                                        EntryWeight;                                       // 0xE8(0x4)(None)
	float                                        ManualSpawnPointSpreadRadius;                      // 0xEC(0x4)(None)
	float                                        WaterOnlySpawnMinimumWaterHeight;                  // 0xF0(0x4)(None)
	float                                        MaximumWaterHeight;                                // 0xF4(0x4)(None)
	class UClass*                                ColorSets;                                         // 0xF8(0x8)(None)
	TArray<struct FNPCDifficultyLevelRange>      NPCDifficultyLevelRanges;                          // 0x100(0x10)(None)
	float                                        LevelDifficultyTestOverride;                       // 0x110(0x4)(None)
	float                                        SpawnMinDistanceFromStructuresMultiplier;          // 0x114(0x4)(None)
	float                                        SpawnMinDistanceFromPlayersMultiplier;             // 0x118(0x4)(None)
	float                                        SpawnMinDistanceFromTamedDinosMultiplier;          // 0x11C(0x4)(None)
	float                                        RandGroupSpawnOffsetZMin;                          // 0x120(0x4)(None)
	float                                        RandGroupSpawnOffsetZMax;                          // 0x124(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.NPCSpawnEntriesContainerAdditions
struct FNPCSpawnEntriesContainerAdditions
{
public:
	class UClass*                                SpawnEntriesContainerClass;                        // 0x0(0x8)(ZeroConstructor)
	class FString                                SpawnEntriesContainerClassString;                  // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FNPCSpawnEntry>                AdditionalNPCSpawnEntries;                         // 0x18(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FNPCSpawnLimit>                AdditionalNPCSpawnLimits;                          // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.GrinderItemReplacer
struct FGrinderItemReplacer
{
public:
	class UClass*                                Current;                                           // 0x0(0x8)(ZeroConstructor)
	class UClass*                                Replacement;                                       // 0x8(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.InvalidReferenceRedirector
struct FInvalidReferenceRedirector
{
public:
	class FString                                InvalidReferenceKey;                               // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable)
	class UClass*                                RedirectedClass;                                   // 0x10(0x8)(None)
	struct FSoftObjectPath                       RedirectedClassSoftReference;                      // 0x18(0x20)(BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        LimitedToMaps;                                     // 0x38(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.EmoteGroup
struct FEmoteGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(None)
	struct FLinearColor                          GroupColor;                                        // 0x8(0x10)(None)
	class UTexture2D*                            GroupIcon;                                         // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.WorldDefaultItemSet
struct FWorldDefaultItemSet
{
public:
	class FName                                  ItemSetName;                                       // 0x0(0x8)(None)
	TArray<class FName>                          MapName;                                           // 0x8(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bFirstTimeEquip;                                   // 0x18(0x1)(None)
	bool                                         bOnlyGiveItemSetOnce;                              // 0x19(0x1)(None)
	bool                                         bEquipOnNewPawn;                                   // 0x1A(0x1)(None)
	uint8                                        Pad_4841[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ForceEquipIfAppID;                                 // 0x1C(0x4)(None)
	TArray<class UClass*>                        ItemsToGive;                                       // 0x20(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.EscapeRoom_RoomItemSetup
struct FEscapeRoom_RoomItemSetup
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(ZeroConstructor)
	int32                                        NumItems;                                          // 0x8(0x4)(None)
	uint8                                        Pad_4842[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           MeshOverride;                                      // 0x10(0x8)(ZeroConstructor)
	struct FVector                               ScaleOverride;                                     // 0x18(0x18)(None)
	class UMaterialInterface*                    MaterialOverride;                                  // 0x30(0x8)(None)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ShooterGame.EscapeRoom_RoomSetup
struct FEscapeRoom_RoomSetup
{
public:
	TArray<bool>                                 RoomUnlockRequirements;                            // 0x0(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<bool>                                 UnlockHintTypes;                                   // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        CorrectHintWeight;                                 // 0x20(0x4)(None)
	uint8                                        Pad_4843[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                MultiplierPerReset;                                // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        NumDinosToKill;                                    // 0x38(0x4)(None)
	uint8                                        Pad_4844[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDinoSetupGroup>               RoomGroupDinoSetups;                               // 0x40(0x10)(ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEscapeRoom_RoomItemSetup             ItemSetup;                                         // 0x50(0x38)(None)
	int32                                        NumHintFloors;                                     // 0x88(0x4)(None)
	int32                                        NumHintRoomPulses;                                 // 0x8C(0x4)(None)
	float                                        TimeToComplete;                                    // 0x90(0x4)(None)
	bool                                         TeleportToNextRoomOnUnlock;                        // 0x94(0x1)(None)
	bool                                         TeleportToNextRoomOnCorrectOverlap;                // 0x95(0x1)(None)
	bool                                         SpawnEnemiesWithoutUnlockReq;                      // 0x96(0x1)(None)
	uint8                                        Pad_4845[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumDinosPerWave;                                   // 0x98(0x4)(None)
	float                                        WaveInterval;                                      // 0x9C(0x4)(None)
	TArray<bool>                                 ShowIndicatorsForUnlockReqs;                       // 0xA0(0x10)(None)
	int32                                        MaxActiveDinos;                                    // 0xB0(0x4)(None)
	bool                                         UseClosestDinosSpawnToPlayers;                     // 0xB4(0x1)(None)
	bool                                         UseForcedTargeting;                                // 0xB5(0x1)(None)
	uint8                                        Pad_4846[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAggroDistance;                                  // 0xB8(0x4)(None)
	bool                                         ChooseSingleUniqueUnlockReqForRoom;                // 0xBC(0x1)(None)
	uint8                                        Pad_4847[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.ExtraEggItem
struct FExtraEggItem
{
public:
	TSoftClassPtr<class UPrimalItem>             DropItem;                                          // 0x0(0x30)(ZeroConstructor)
	class FName                                  ActiveEventFilter;                                 // 0x30(0x8)(None)
	class UClass*                                ForDinoCharacter;                                  // 0x38(0x8)(None)
	float                                        DropChance;                                        // 0x40(0x4)(None)
	uint8                                        Pad_4848[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CryopodPersistantBuffs
struct FCryopodPersistantBuffs
{
public:
	class FString                                BuffClassString;                                   // 0x0(0x10)(None)
	int32                                        IDBitMask;                                         // 0x10(0x4)(None)
	uint8                                        Pad_4849[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.SubtitleStringEntry
struct FSubtitleStringEntry
{
public:
	class FText                                  BaseText;                                          // 0x0(0x18)(None)
	float                                        StartTime;                                         // 0x18(0x4)(None)
	float                                        EndTime;                                           // 0x1C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.SubtitleStringMap
struct FSubtitleStringMap
{
public:
	class FString                                MediaName;                                         // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FSubtitleStringEntry>          Subtitles;                                         // 0x10(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.FakeStaticMeshSocketData
struct FFakeStaticMeshSocketData
{
public:
	class FName                                  FakeSocketName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_484A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x10(0x60)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.AdditionalStaticMeshSockets
struct FAdditionalStaticMeshSockets
{
public:
	TSoftObjectPtr<class UStaticMesh>            ForStaticMesh;                                     // 0x0(0x30)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFakeStaticMeshSocketData>     AdditionalRelativeSockets;                         // 0x30(0x10)(None)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ShooterGame.ItemSpawnBlacklistInfo
struct FItemSpawnBlacklistInfo : public FTableRowBase
{
public:
	TSet<TSoftClassPtr<class UPrimalItem>>       ItemClasses;                                       // 0x8(0x50)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.CachedDBSet
struct FCachedDBSet
{
public:
	class FName                                  ModName;                                           // 0x0(0x8)(None)
	class UShooterWeaponDB*                      WeaponDB;                                          // 0x8(0x8)(ZeroConstructor)
	class UPrimalDinoDB*                         DinoDB;                                            // 0x10(0x8)(ZeroConstructor)
	class UPrimalStructureDB*                    StructureDB;                                       // 0x18(0x8)(ZeroConstructor)
	class UPrimalInventoryDB*                    InventoryDB;                                       // 0x20(0x8)(ZeroConstructor)
	class UPrimalMissionDB*                      MissionDB;                                         // 0x28(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CachedDBAccessor
struct FCachedDBAccessor
{
public:
	struct FCachedDBSet                          CachedDBs;                                         // 0x0(0x30)(ZeroConstructor)
	TArray<struct FCachedDBSet>                  OverrideCachedDBs;                                 // 0x30(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ComponentAttachmentEntry
struct FComponentAttachmentEntry
{
public:
	class UClass*                                ActorComponentClass;                               // 0x0(0x8)(None)
	struct FVector                               ComponentLocationOffset;                           // 0x8(0x18)(None)
	struct FRotator                              ComponentRotationOffset;                           // 0x20(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.DamageHarvestingEntry
struct FDamageHarvestingEntry
{
public:
	float                                        DamageMultiplier;                                  // 0x0(0x4)(None)
	float                                        HarvestQuantityMultiplier;                         // 0x4(0x4)(None)
	float                                        DamageHarvestAdditionalEffectiveness;              // 0x8(0x4)(None)
	float                                        DamageDurabilityConsumptionMultiplier;             // 0xC(0x4)(None)
	uint8                                        bAllowUnderwaterHarvesting : 1;                    // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_3F6 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_484B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageTypeParent;                                  // 0x18(0x8)(ZeroConstructor)
	class UClass*                                HarvestDamageFXOverride;                           // 0x20(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.HarvestResourceEntry
struct FHarvestResourceEntry
{
public:
	int32                                        OverrideQuantityMax;                               // 0x0(0x4)(None)
	int32                                        OverrideQuantityMin;                               // 0x4(0x4)(None)
	float                                        OverrideQuantityRandomPower;                       // 0x8(0x4)(None)
	float                                        EntryWeight;                                       // 0xC(0x4)(None)
	float                                        EffectivenessQuantityMultiplier;                   // 0x10(0x4)(None)
	float                                        EffectivenessQualityMultiplier;                    // 0x14(0x4)(None)
	class UClass*                                ResourceItem;                                      // 0x18(0x8)(ZeroConstructor)
	float                                        QualityMin;                                        // 0x20(0x4)(None)
	float                                        QualityMax;                                        // 0x24(0x4)(None)
	float                                        XPGainMax;                                         // 0x28(0x4)(None)
	float                                        XPGainMin;                                         // 0x2C(0x4)(None)
	TArray<TSoftClassPtr<class UDamageType>>     DamageTypeEntryValuesOverrides;                    // 0x30(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                DamageTypeEntryWeightOverrides;                    // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                DamageTypeEntryMinQuantityOverrides;               // 0x50(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                DamageTypeEntryMaxQuantityOverrides;               // 0x60(0x10)(None)
	uint8                                        bScaleWithDinoBabyAge : 1;                         // Mask: 0x1, PropSize: 0x10x70(0x1)(None)
	uint8                                        Pad_484C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemCraftingConsumptionReplenishment
struct FItemCraftingConsumptionReplenishment
{
public:
	TArray<class UClass*>                        ItemResourceClasses;                               // 0x0(0x10)(ZeroConstructor)
	class UClass*                                ToReplaceWithClass;                                // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ItemSpawnActorClassOverride
struct FItemSpawnActorClassOverride
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ActorClassOverride;                                // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ServerCustomFolder
struct FServerCustomFolder
{
public:
	int32                                        InventoryCompType;                                 // 0x0(0x4)(None)
	uint8                                        Pad_484D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FolderName;                                        // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FItemNetID>                    CustomFolderItemIds;                               // 0x18(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.EventItem
struct FEventItem
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(None)
	TSoftClassPtr<class UPrimalItem>             Item;                                              // 0x8(0x30)(None)
	bool                                         bIsEngram;                                         // 0x38(0x1)(None)
	uint8                                        Pad_484E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x440 (0x440 - 0x0)
// ScriptStruct ShooterGame.OverrideMultiuseButtonStyle
struct FOverrideMultiuseButtonStyle
{
public:
	struct FButtonStyle                          Style;                                             // 0x0(0x3F0)(ContainsInstancedReference, BlueprintCallable, TextExportTransient)
	struct FCustomButtonWidgetStyle              ExtendedStyle;                                     // 0x3F0(0x48)(None)
	uint8                                        Pad_484F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.WirelessResourceData
struct FWirelessResourceData
{
public:
	int32                                        Qty;                                               // 0x0(0x4)(None)
	uint8                                        Pad_4850[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPrimalInventoryComponent*>       Inventories;                                       // 0x8(0x50)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.ActorClassAttachmentInfo
struct FActorClassAttachmentInfo
{
public:
	TSoftClassPtr<class AActor>                  OwnerActorClassParent;                             // 0x0(0x30)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FItemAttachmentInfo>           ItemAttachmentInfos;                               // 0x30(0x10)(ZeroConstructor)
	class FName                                  PlayerMeshTextureMaskParamName;                    // 0x40(0x8)(None)
	class UTexture2D*                            PlayerMeshTextureMask;                             // 0x48(0x8)(ZeroConstructor)
	class UTexture2D*                            PlayerMeshNoItemDefaultTextureMask;                // 0x50(0x8)(ZeroConstructor)
	int32                                        PlayerMeshTextureMaskMaterialIndexNew;             // 0x58(0x4)(None)
	int32                                        PlayerMeshTextureMaskMaterialIndexAlt;             // 0x5C(0x4)(None)
	class FName                                  FPVHandsMeshTextureMaskParamName;                  // 0x60(0x8)(None)
	class UTexture2D*                            FPVHandsMeshTextureMask;                           // 0x68(0x8)(None)
	int32                                        FPVHandsMeshTextureMaskMaterialIndex;              // 0x70(0x4)(None)
	int32                                        FPVHandsMeshTextureMaskMaterialIndex2;             // 0x74(0x4)(None)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct ShooterGame.CropItemPhaseData
struct FCropItemPhaseData
{
public:
	float                                        NextStageFertilizerCacheThreshold;                 // 0x0(0x4)(None)
	uint8                                        Pad_4851[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            StageStaticMesh;                                   // 0x8(0x30)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UStaticMesh>>    StageStaticMeshes;                                 // 0x38(0x10)(ZeroConstructor, AdvancedDisplay, TextExportTransient)
	TSoftObjectPtr<class UStaticMesh>            HasFruitStageStaticMesh;                           // 0x48(0x30)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UStaticMesh>>    HasFruitStageStaticMeshes;                         // 0x78(0x10)(ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               StageStaticMeshScale3D;                            // 0x88(0x18)(None)
	struct FVector                               StageStaticMeshTranslationOffset;                  // 0xA0(0x18)(None)
	struct FRotator                              StageStaticMeshRotationOffset;                     // 0xB8(0x18)(None)
	TArray<struct FVector>                       StageStaticMeshScales3D;                           // 0xD0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       StageStaticMeshTranslationOffsets;                 // 0xE0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRotator>                      StageStaticMeshRotationOffsets;                    // 0xF0(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        StageReachedItemsToGive;                           // 0x100(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                StageReachedItemsToGiveWeights;                    // 0x110(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        StageBlockCollisions;                              // 0x120(0x1)(None)
	bool                                         bUseStageStructure;                                // 0x121(0x1)(None)
	uint8                                        Pad_4852[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APrimalStructure>        StageStructure;                                    // 0x128(0x30)(None)
	struct FVector                               StageStructureOffset;                              // 0x158(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.RequiresInventorySubclassMapping
struct FRequiresInventorySubclassMapping
{
public:
	TSoftClassPtr<class UPrimalInventoryComponent> InventoryComponentClassParent;                     // 0x0(0x30)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class UPrimalInventoryComponent>> RequiresInventoryComponentClassChildren;           // 0x30(0x10)(None)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.SaddlePassengerSeatDefinition
struct FSaddlePassengerSeatDefinition
{
public:
	class FName                                  AttachBoneName;                                    // 0x0(0x8)(None)
	class FName                                  AttachBoneNameEnemyDino;                           // 0x8(0x8)(None)
	class FName                                  AttachBoneNameDino;                                // 0x10(0x8)(None)
	class FString                                BoardActionText;                                   // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient)
	class UTexture2D*                            BoardActionIcon;                                   // 0x28(0x8)(ZeroConstructor)
	struct FVector                               UnboardLocationOffset;                             // 0x30(0x18)(None)
	class UClass*                                BoardingRequiresEngram;                            // 0x48(0x8)(ZeroConstructor)
	struct FVector                               FPVCameraLocationOffset;                           // 0x50(0x18)(None)
	struct FVector                               AttachRelativeLocation;                            // 0x68(0x18)(None)
	struct FRotator                              AttachRelativeRotation;                            // 0x80(0x18)(None)
	struct FRotator                              DinoOverrideAttachRelativeRotation;                // 0x98(0x18)(None)
	TSoftObjectPtr<class UAnimSequence>          CharacterAdditiveAnim;                             // 0xB0(0x30)(None)
	uint8                                        bHideCharacterLowerBody : 1;                       // Mask: 0x1, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bUseCharacterPitch : 1;                            // Mask: 0x2, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bLimitCameraYaw : 1;                               // Mask: 0x4, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bUseDinoRotationToLimitCameraYaw : 1;              // Mask: 0x8, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bWeaponIgnoreDino : 1;                             // Mask: 0x10, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bHideDinoForLocalPassenger : 1;                    // Mask: 0x20, PropSize: 0x10xE0(0x1)(None)
	uint8                                        CharacterAdditiveAnimIsNonAdditive : 1;            // Mask: 0x40, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bAllowDinoPassenger : 1;                           // Mask: 0x80, PropSize: 0x10xE0(0x1)(None)
	uint8                                        bPreventManualPassenger : 1;                       // Mask: 0x1, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bDinoOverrideAttachRelativeRotation : 1;           // Mask: 0x2, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bUseBoneNameDinoOverride : 1;                      // Mask: 0x4, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bSavePassenger : 1;                                // Mask: 0x8, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bPreventDamageToSeatedDino : 1;                    // Mask: 0x10, PropSize: 0x10xE1(0x1)(None)
	uint8                                        BitPad_3F7 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4853[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraYawRange;                                    // 0xE4(0x4)(None)
	float                                        AimOffsetYawFactor;                                // 0xE8(0x4)(None)
	float                                        AimOffsetPitchFactor;                              // 0xEC(0x4)(None)
	float                                        AimOffsetYawBias;                                  // 0xF0(0x4)(None)
	float                                        AimOffsetPitchBias;                                // 0xF4(0x4)(None)
	float                                        ExtraHypoThermalInsulation;                        // 0xF8(0x4)(None)
	float                                        ExtraHyperThermalInsulation;                       // 0xFC(0x4)(None)
	uint8                                        bIsSaddleTurret : 1;                               // Mask: 0x1, PropSize: 0x10x100(0x1)(None)
	uint8                                        bLimitTurretPitch : 1;                             // Mask: 0x2, PropSize: 0x10x100(0x1)(None)
	uint8                                        BitPad_3F8 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4854[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurretPitchMin;                                    // 0x104(0x4)(None)
	float                                        TurretPitchMax;                                    // 0x108(0x4)(None)
	uint8                                        bAllowOrbitCam : 1;                                // Mask: 0x1, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bAllowTPV : 1;                                     // Mask: 0x2, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bPreventPassengerWeapons : 1;                      // Mask: 0x4, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bAllowAccessDinoInventory : 1;                     // Mask: 0x8, PropSize: 0x10x10C(0x1)(None)
	uint8                                        bUnboardUseLastRotation : 1;                       // Mask: 0x10, PropSize: 0x10x10C(0x1)(None)
	uint8                                        Pad_4855[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct ShooterGame.ItemStatInfo
struct FItemStatInfo
{
public:
	uint8                                        bUsed : 1;                                         // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bCalculateAsPercent : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bDisplayAsPercent : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bRequiresSubmerged : 1;                            // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bPreventIfSubmerged : 1;                           // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bHideStatFromTooltip : 1;                          // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3F9 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4856[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultModifierValue;                              // 0x4(0x4)(None)
	int32                                        RandomizerRangeOverride;                           // 0x8(0x4)(None)
	float                                        RandomizerRangeMultiplier;                         // 0xC(0x4)(None)
	float                                        TheRandomizerPower;                                // 0x10(0x4)(None)
	float                                        StateModifierScale;                                // 0x14(0x4)(None)
	float                                        InitialValueConstant;                              // 0x18(0x4)(None)
	float                                        RatingValueMultiplier;                             // 0x1C(0x4)(None)
	float                                        AbsoluteMaxValue;                                  // 0x20(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.UnreplicatedEggData
struct FUnreplicatedEggData
{
public:
	TArray<int32>                                EggNumberOfLevelUpPointsApplied;                   // 0x0(0x10)(Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                EggNumberMutationsApplied;                         // 0x10(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        EggTamedIneffectivenessModifier;                   // 0x20(0x4)(None)
	uint8                                        Pad_4857[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                EggColorSetIndices;                                // 0x28(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDinoAncestorsEntryBlueprint>  EggDinoAncestors;                                  // 0x38(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDinoAncestorsEntryBlueprint>  EggDinoAncestorsMale;                              // 0x48(0x10)(None)
	int32                                        EggRandomMutationsFemale;                          // 0x58(0x4)(None)
	int32                                        EggRandomMutationsMale;                            // 0x5C(0x4)(None)
	int32                                        EggGenderOverride;                                 // 0x60(0x4)(None)
	uint8                                        Pad_4858[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.UseItemAddCharacterStatusValue
struct FUseItemAddCharacterStatusValue
{
public:
	float                                        BaseAmountToAdd;                                   // 0x0(0x4)(None)
	uint8                                        bPercentOfMaxStatusValue : 1;                      // Mask: 0x1, PropSize: 0x10x4(0x1)(None)
	uint8                                        bPercentOfCurrentStatusValue : 1;                  // Mask: 0x2, PropSize: 0x10x4(0x1)(None)
	uint8                                        bUseItemQuality : 1;                               // Mask: 0x4, PropSize: 0x10x4(0x1)(None)
	uint8                                        bDontRequireLessThanMaxToUse : 1;                  // Mask: 0x8, PropSize: 0x10x4(0x1)(None)
	uint8                                        bAddOverTime : 1;                                  // Mask: 0x10, PropSize: 0x10x4(0x1)(None)
	uint8                                        bAddOverTimeSpeedInSeconds : 1;                    // Mask: 0x20, PropSize: 0x10x4(0x1)(None)
	uint8                                        bContinueOnUnchangedValue : 1;                     // Mask: 0x40, PropSize: 0x10x4(0x1)(None)
	uint8                                        bSetValue : 1;                                     // Mask: 0x80, PropSize: 0x10x4(0x1)(None)
	uint8                                        bSetAdditionalValue : 1;                           // Mask: 0x1, PropSize: 0x10x5(0x1)(None)
	uint8                                        bResetExistingModifierDescriptionIndex : 1;        // Mask: 0x2, PropSize: 0x10x5(0x1)(None)
	uint8                                        bForceUseStatOnDinos : 1;                          // Mask: 0x4, PropSize: 0x10x5(0x1)(None)
	uint8                                        BitPad_3FA : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4859[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LimitExistingModifierDescriptionToMaxAmount;       // 0x8(0x4)(None)
	float                                        AddOverTimeSpeed;                                  // 0xC(0x4)(None)
	float                                        PercentAbsoluteMaxValue;                           // 0x10(0x4)(None)
	float                                        PercentAbsoluteMinValue;                           // 0x14(0x4)(None)
	int32                                        StatusValueModifierDescriptionIndex;               // 0x18(0x4)(None)
	float                                        ItemQualityAddValueMultiplier;                     // 0x1C(0x4)(None)
	enum class EPrimalCharacterStatusValue       StatusValueType;                                   // 0x20(0x1)(None)
	enum class EPrimalCharacterStatusValue       StopAtValueNearMax;                                // 0x21(0x1)(None)
	uint8                                        Pad_485A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UDamageType>             ScaleValueByCharacterDamageType;                   // 0x28(0x30)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemCraftQueueEntry
struct FItemCraftQueueEntry
{
public:
	struct FItemNetID                            ItemID;                                            // 0x0(0x8)(None)
	int32                                        Quantity;                                          // 0x8(0x4)(None)
	bool                                         bIsRepair;                                         // 0xC(0x1)(None)
	bool                                         bIgnoreInventoryRequirement;                       // 0xD(0x1)(None)
	uint8                                        Pad_485B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RepairPercentage;                                  // 0x10(0x4)(None)
	float                                        RepairSpeedMultiplier;                             // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CustomContextSubmenu
struct FCustomContextSubmenu
{
public:
	class FName                                  SubmenuName;                                       // 0x0(0x8)(None)
	TArray<class FName>                          SubmenuOptions;                                    // 0x8(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.CustomContextMenuData
struct FCustomContextMenuData
{
public:
	class FName                                  ContextItemName;                                   // 0x0(0x8)(None)
	class FText                                  DisplayString;                                     // 0x8(0x18)(None)
	class FName                                  OptionalKeybindName;                               // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.PrimalMapMarkerEntryData
struct FPrimalMapMarkerEntryData
{
public:
	int32                                        Coord1;                                            // 0x0(0x4)(None)
	int32                                        Coord2;                                            // 0x4(0x4)(None)
	class FString                                Name;                                              // 0x8(0x10)(None)
	bool                                         bOverrideMarkerTextColor;                          // 0x18(0x1)(None)
	uint8                                        Pad_485C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                OverrideMarkerTextColor;                           // 0x1C(0x4)(None)
	float                                        Coord1f;                                           // 0x20(0x4)(None)
	float                                        Coord2f;                                           // 0x24(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MapMarkerPerMapInfo
struct FMapMarkerPerMapInfo
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalMapMarkerEntryData>     MapMarkers;                                        // 0x10(0x10)(None)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ShooterGame.ArkTributePlayerDataListing
struct FArkTributePlayerDataListing
{
public:
	uint64                                       PlayerDataID;                                      // 0x0(0x8)(None)
	class FString                                PlayerName;                                        // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient)
	class FString                                PlayerStats[0xC];                                  // 0x18(0xC0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient)
	bool                                         bWasAllowDPCUpload;                                // 0xD8(0x1)(None)
	uint8                                        Pad_485D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UploadingServerMapName;                            // 0xE0(0x10)(BlueprintCallable, NonPIEDuplicateTransient)
	class FString                                UploadingServerName;                               // 0xF0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bWithItems;                                        // 0x100(0x1)(None)
	uint8                                        Pad_485E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ItemCount;                                         // 0x104(0x4)(None)
	float                                        Version;                                           // 0x108(0x4)(None)
	uint32                                       ExpirationTimeUTC;                                 // 0x10C(0x4)(None)
	TArray<uint8>                                PlayerDataBytes;                                   // 0x110(0x10)(None)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ShooterGame.ARKTributeDinoListing
struct FARKTributeDinoListing
{
public:
	class FString                                DinoName;                                          // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient)
	class FString                                DinoStats[0xC];                                    // 0x10(0xC0)(None)
	float                                        DinoExperiencePoints;                              // 0xD0(0x4)(None)
	uint8                                        Pad_485F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DinoClass;                                         // 0xD8(0x8)(None)
	uint32                                       DinoID1;                                           // 0xE0(0x4)(None)
	uint32                                       DinoID2;                                           // 0xE4(0x4)(None)
	uint32                                       ExpirationTimeUTC;                                 // 0xE8(0x4)(None)
	uint8                                        Pad_4860[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x134 (0x138 - 0x4)
// ScriptStruct ShooterGame.ARKTributeDino
struct FARKTributeDino : public FArkTributeEntity
{
public:
	uint8                                        Pad_4861[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APrimalDinoCharacter>    DinoClassPtr;                                      // 0x8(0x30)(AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint8>                                DinoData;                                          // 0x38(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient)
	class FString                                DinoName;                                          // 0x48(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient)
	class FString                                DinoNameInMap;                                     // 0x58(0x10)(Protected, NonPIEDuplicateTransient)
	class FString                                DinoStats[0xC];                                    // 0x68(0xC0)(None)
	float                                        DinoExperiencePoints;                              // 0x128(0x4)(None)
	float                                        Version;                                           // 0x12C(0x4)(None)
	uint32                                       DinoID1;                                           // 0x130(0x4)(None)
	uint32                                       DinoID2;                                           // 0x134(0x4)(None)
};

// 0x1D4 (0x1D8 - 0x4)
// ScriptStruct ShooterGame.ArkTributeInventoryItem
struct FArkTributeInventoryItem : public FArkTributeEntity
{
public:
	uint8                                        Pad_4862[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemNetInfo                          ArkTributeItem;                                    // 0x8(0x1C8)(None)
	float                                        Version;                                           // 0x1D0(0x4)(None)
	uint8                                        Pad_4863[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.ArkInventoryData
struct FArkInventoryData
{
public:
	TArray<struct FArkTributeInventoryItem>      ArkItems;                                          // 0x0(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FARKTributeDino>               ArkTamedDinosData;                                 // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FArkTributePlayerData>         ArkPlayerData;                                     // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.EngramCustomFolder
struct FEngramCustomFolder
{
public:
	class FString                                FolderName;                                        // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        EngramCustomFolderItemClasses;                     // 0x10(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PhotoModeMotionControlTrackData
struct FPhotoModeMotionControlTrackData
{
public:
	float                                        TickTime;                                          // 0x0(0x4)(None)
	uint8                                        Pad_4864[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TickLoc;                                           // 0x8(0x18)(None)
	struct FRotator                              TickRot;                                           // 0x20(0x18)(None)
	float                                        FocalLength;                                       // 0x38(0x4)(None)
	float                                        FocusDistance;                                     // 0x3C(0x4)(None)
	float                                        Aperture;                                          // 0x40(0x4)(None)
	uint8                                        Pad_4865[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PhotoModeMotionControlTrackInfo
struct FPhotoModeMotionControlTrackInfo
{
public:
	struct FVector                               StartLoc;                                          // 0x0(0x18)(None)
	struct FRotator                              StartRot;                                          // 0x18(0x18)(None)
	TArray<struct FPhotoModeMotionControlTrackData> TickData;                                          // 0x30(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DinoOrderID
struct FDinoOrderID
{
public:
	int32                                        DinoID1;                                           // 0x0(0x4)(None)
	int32                                        DinoID2;                                           // 0x4(0x4)(None)
	class FString                                DinoName;                                          // 0x8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoOrderGroup
struct FDinoOrderGroup
{
public:
	class FString                                DinoOrderGroupName;                                // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        DinoOrderClasses;                                  // 0x10(0x10)(Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDinoOrderID>                  DinoOrderIDs;                                      // 0x20(0x10)(None)
};

// 0x2C8 (0x2C8 - 0x0)
// ScriptStruct ShooterGame.PrimalPersistentCharacterStatsStruct
struct FPrimalPersistentCharacterStatsStruct
{
public:
	uint16                                       CharacterStatusComponent_ExtraCharacterLevel;      // 0x0(0x2)(None)
	uint8                                        Pad_4866[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CharacterStatusComponent_ExperiencePoints;         // 0x4(0x4)(None)
	int32                                        PlayerState_TotalEngramPoints;                     // 0x8(0x4)(None)
	int32                                        PlayerState_PurchasedEngramPoints;                 // 0xC(0x4)(None)
	int32                                        CharacterStatusComponent_HighestExtraCharacterLevel; // 0x10(0x4)(None)
	int32                                        CharacterStatusComponent_LastRespecAtExtraCharacterLevel; // 0x14(0x4)(None)
	double                                       CharacterStatusComponent_LastRespecUtcTimeSeconds; // 0x18(0x8)(None)
	TArray<uint32>                               PerMapExplorerNoteUnlocks;                         // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          EmoteUnlocks;                                      // 0x30(0x10)(AutoWeak, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        PlayerState_EngramBlueprints;                      // 0x40(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient)
	uint8                                        CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC]; // 0x50(0xC)(None)
	uint8                                        Pad_4867[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PlayerState_DefaultItemSlotClasses[0xA];           // 0x60(0x50)(ZeroConstructor)
	uint8                                        PlayerState_DefaultItemSlotEngrams[0xA];           // 0xB0(0xA)(None)
	uint8                                        Pad_4868[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDinoOrderGroup                       DinoOrderGroups[0xA];                              // 0xC0(0x1E0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CurrentlySelectedDinoOrderGroup;                   // 0x2A0(0x4)(None)
	float                                        PercentageOfHeadHairGrowth;                        // 0x2A4(0x4)(None)
	bool                                         bHasUnlockedAllExplorerNotes;                      // 0x2A8(0x1)(None)
	uint8                                        Pad_4869[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentageOfFacialHairGrowth;                      // 0x2AC(0x4)(None)
	uint8                                        FacialHairIndex;                                   // 0x2B0(0x1)(None)
	uint8                                        HeadHairIndex;                                     // 0x2B1(0x1)(None)
	uint8                                        EyebrowIndex;                                      // 0x2B2(0x1)(None)
	uint8                                        Pad_486A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        ForcedUnlockDefaultCosmetics;                      // 0x2B8(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.LatestMissionScore
struct FLatestMissionScore
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(None)
	struct FLeaderboardRow                       LatestScore;                                       // 0x8(0x48)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	struct FLeaderboardRow                       BestScore;                                         // 0x50(0x48)(None)
	bool                                         bHasValidScore;                                    // 0x98(0x1)(None)
	uint8                                        Pad_486B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.VectorBoolPair
struct FVectorBoolPair
{
public:
	struct FVector                               VectorVal;                                         // 0x0(0x18)(None)
	bool                                         BoolVal;                                           // 0x18(0x1)(None)
	uint8                                        Pad_486C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TrackedActorIDCategoryPair
struct FTrackedActorIDCategoryPair
{
public:
	int32                                        ID;                                                // 0x0(0x4)(None)
	enum class ETrackedActorCategory             Category;                                          // 0x4(0x1)(None)
	uint8                                        Pad_486D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TrackedActorIDCategoryPairWithBool
struct FTrackedActorIDCategoryPairWithBool
{
public:
	int32                                        ID;                                                // 0x0(0x4)(None)
	enum class ETrackedActorCategory             Category;                                          // 0x4(0x1)(None)
	bool                                         BoolVal;                                           // 0x5(0x1)(None)
	uint8                                        Pad_486E[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4F8 (0x4F8 - 0x0)
// ScriptStruct ShooterGame.PrimalPlayerDataStruct
struct FPrimalPlayerDataStruct
{
public:
	uint64                                       PlayerDataID;                                      // 0x0(0x8)(None)
	struct FUniqueNetIdRepl                      UniqueID;                                          // 0x8(0x30)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient)
	class FString                                SavedNetworkAddress;                               // 0x38(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient)
	class FString                                PlayerName;                                        // 0x48(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient)
	uint32                                       LocalPlayerIndex;                                  // 0x58(0x4)(None)
	uint8                                        bFirstSpawned : 1;                                 // Mask: 0x1, PropSize: 0x10x5C(0x1)(None)
	uint8                                        bUseSpectator : 1;                                 // Mask: 0x2, PropSize: 0x10x5C(0x1)(None)
	uint8                                        BitPad_3FB : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_486F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalPlayerCharacterConfigStruct    MyPlayerCharacterConfig;                           // 0x60(0x110)(SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient)
	int32                                        LastPinCodeUsed;                                   // 0x170(0x4)(None)
	uint8                                        Pad_4870[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalPersistentCharacterStatsStruct MyPersistentCharacterStats;                        // 0x178(0x2C8)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        NumPersonalDinos;                                  // 0x440(0x4)(None)
	int32                                        TribeID;                                           // 0x444(0x4)(None)
	TArray<int32>                                AppIDSet;                                          // 0x448(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        PlayerDataVersion;                                 // 0x458(0x4)(None)
	uint8                                        Pad_4871[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NextAllowedRespawnTime;                            // 0x460(0x8)(None)
	double                                       LastTimeDiedToEnemyTeam;                           // 0x468(0x8)(None)
	double                                       LoginTime;                                         // 0x470(0x8)(None)
	double                                       LastLoginTime;                                     // 0x478(0x8)(None)
	float                                        AllowedRespawnInterval;                            // 0x480(0x4)(None)
	float                                        NumOfDeaths;                                       // 0x484(0x4)(None)
	int32                                        SpawnDayNumber;                                    // 0x488(0x4)(None)
	float                                        SpawnDayTime;                                      // 0x48C(0x4)(None)
	double                                       LastInventoryRetrievalUTCTime;                     // 0x490(0x8)(None)
	double                                       SuicideCooldownStartTime;                          // 0x498(0x8)(None)
	TArray<struct FLatestMissionScore>           LatestMissionScores;                               // 0x4A0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTrackedActorPlusInfoStruct>   PersonalCachedTeamActorList_UpdatedOnInterval;     // 0x4B0(0x10)(ContainsInstancedReference, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       LastNetworkTimeUpdatedPersonalCachedTeamActorLists; // 0x4C0(0x8)(None)
	TArray<struct FVectorBoolPair>               ServerSavedLastDeathLocations;                     // 0x4C8(0x10)(AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTrackedActorIDCategoryPair>   SavedFavoritedTrackedActorInfo;                    // 0x4D8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTrackedActorIDCategoryPairWithBool> SavedWaypointTrackedActorInfo;                     // 0x4E8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.EngramsSetSoftReferenceMapping
struct FEngramsSetSoftReferenceMapping
{
public:
	TArray<class FString>                        EngramSetToUnlock;                                 // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.BossEngramsSoftReferenceMapping
struct FBossEngramsSoftReferenceMapping
{
public:
	TArray<struct FEngramsSetSoftReferenceMapping> EngramSets;                                        // 0x0(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.ManagedBoneSetup
struct FManagedBoneSetup
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	enum class ETraceType                        TraceType;                                         // 0x8(0x1)(None)
	uint8                                        bNoHitDefaultToCenter : 1;                         // Mask: 0x1, PropSize: 0x10x9(0x1)(None)
	uint8                                        BitPad_3FC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4872[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartOffset;                                       // 0xC(0x4)(None)
	float                                        LineTraceLength;                                   // 0x10(0x4)(None)
	float                                        LaunchSpeed;                                       // 0x14(0x4)(None)
	float                                        GravityOverride;                                   // 0x18(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalChatFontData
struct FPrimalChatFontData
{
public:
	class FName                                  FontName;                                          // 0x0(0x8)(None)
	int32                                        FontSize;                                          // 0x8(0x4)(None)
	struct FSlateColor                           FontColor;                                         // 0xC(0x14)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSnapTagSettings
struct FPrimalStructureSnapTagSettings
{
public:
	TArray<class FName>                          SnapToStructureTagsToExclude;                      // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SnapFromStructureTagsToExclude;                    // 0x10(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SnapToStructureTagsToInclude;                      // 0x20(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SnapFromStructureTagsToInclude;                    // 0x30(0x10)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSnapPointOverride
struct FPrimalStructureSnapPointOverride
{
public:
	class UStaticMesh*                           StaticMeshOverride;                                // 0x0(0x8)(ZeroConstructor)
	TSoftClassPtr<class APrimalStructure>        StructureClassOverride;                            // 0x8(0x30)(ZeroConstructor)
	struct FVector                               PreviewLocOffset;                                  // 0x38(0x18)(None)
	struct FRotator                              PreviewRotOffset;                                  // 0x50(0x18)(None)
	struct FVector                               PreviewScaleOffset;                                // 0x68(0x18)(None)
	class APrimalStructure*                      StructureClassCDO;                                 // 0x80(0x8)(None)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSnapPoint
struct FPrimalStructureSnapPoint
{
public:
	class FName                                  SnapPointDescription;                              // 0x0(0x8)(None)
	struct FVector                               PointLocOffset;                                    // 0x8(0x18)(None)
	struct FRotator                              PointRotOffset;                                    // 0x20(0x18)(None)
	struct FRotator                              PointComparisonExtraRotOffset;                     // 0x38(0x18)(None)
	uint8                                        bAttachToPoint : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(None)
	uint8                                        bAttachFromPoint : 1;                              // Mask: 0x2, PropSize: 0x10x50(0x1)(None)
	uint8                                        bHighPriorityAttachToPoint : 1;                    // Mask: 0x4, PropSize: 0x10x50(0x1)(None)
	uint8                                        bSnapToUseAlternatePlacemenTraceScale : 1;         // Mask: 0x8, PropSize: 0x10x50(0x1)(None)
	uint8                                        bAttachToDisableEncroachmentCheck : 1;             // Mask: 0x10, PropSize: 0x10x50(0x1)(None)
	uint8                                        bInvalidForStructureLinking : 1;                   // Mask: 0x20, PropSize: 0x10x50(0x1)(None)
	uint8                                        bSnapForceNoGroundRequirement : 1;                 // Mask: 0x40, PropSize: 0x10x50(0x1)(None)
	uint8                                        bSnapToOnlyAllowSingleAttachment : 1;              // Mask: 0x80, PropSize: 0x10x50(0x1)(None)
	uint8                                        bPorthole : 1;                                     // Mask: 0x1, PropSize: 0x10x51(0x1)(None)
	uint8                                        BitPad_3FD : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4873[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ToPointSnapTypeFlags;                              // 0x54(0x4)(None)
	struct FIntVector                            ExtraSnapTypeFlags;                                // 0x58(0xC)(None)
	int32                                        ToPointSnapTypeExcludeFlags;                       // 0x64(0x4)(None)
	struct FIntVector                            ExtraSnapTypeExcludeFlags;                         // 0x68(0xC)(None)
	int32                                        SnapPointMatchGroup;                               // 0x74(0x4)(None)
	struct FIntVector                            ExtraSnapPointMatchGroup;                          // 0x78(0xC)(None)
	class FName                                  SnapTag;                                           // 0x84(0x8)(None)
	class FName                                  StaticMeshSnapSocketName;                          // 0x8C(0x8)(None)
	uint8                                        Pad_4874[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class APrimalStructure>> SnapToStructureTypesToExclude;                     // 0x98(0x10)(ZeroConstructor, AutoWeak, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class APrimalStructure>> SnapFromStructureTypesToExclude;                   // 0xA8(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class APrimalStructure>> SnapToStructureTypesToInclude;                     // 0xB8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class APrimalStructure>> SnapFromStructureTypesToInclude;                   // 0xC8(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	struct FPrimalStructureSnapTagSettings       SnapTags;                                          // 0xD8(0x40)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	struct FPrimalStructureSnapPointOverride     SnapPointOverride;                                 // 0x118(0x88)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PlacementData
struct FPlacementData
{
public:
	struct FVector                               AdjustedLocation;                                  // 0x0(0x18)(None)
	struct FRotator                              AdjustedRotation;                                  // 0x18(0x18)(None)
	bool                                         bSnapped;                                          // 0x30(0x1)(None)
	bool                                         bDisableEncroachmentCheck;                         // 0x31(0x1)(None)
	uint8                                        Pad_4875[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MySnapToIndex;                                     // 0x34(0x4)(None)
	int32                                        TheirSnapToIndex;                                  // 0x38(0x4)(None)
	uint8                                        Pad_4876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                FloorHitActor;                                     // 0x40(0x8)(ZeroConstructor)
	class APrimalStructure*                      ParentStructure;                                   // 0x48(0x8)(ZeroConstructor)
	class APrimalStructure*                      ForcePlacedOnFloorParentStructure;                 // 0x50(0x8)(ZeroConstructor)
	class APrimalStructure*                      ReplacesStructure;                                 // 0x58(0x8)(ZeroConstructor)
	class APawn*                                 AttachToPawn;                                      // 0x60(0x8)(ZeroConstructor)
	class FName                                  AttachToBone;                                      // 0x68(0x8)(None)
	class APrimalDinoCharacter*                  DinoCharacter;                                     // 0x70(0x8)(None)
	float                                        HeightOffset;                                      // 0x78(0x4)(None)
	float                                        YawRotOffset;                                      // 0x7C(0x4)(None)
	int32                                        PlacingAlignmentMode;                              // 0x80(0x4)(None)
	bool                                         bIgnoreSnappingIfOptional;                         // 0x84(0x1)(None)
	bool                                         bIsChoosingRotation;                               // 0x85(0x1)(None)
	uint8                                        Pad_4877[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalDroppedItemOnPlatform
struct FPrimalDroppedItemOnPlatform
{
public:
	struct FVector                               ItemRelativeLocation;                              // 0x0(0x18)(None)
	struct FRotator                              ItemRelativeRotation;                              // 0x18(0x18)(None)
	class FName                                  BoneName;                                          // 0x30(0x8)(None)
	class APrimalStructureItemContainer*         MyItem;                                            // 0x38(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ItemToDisplayInStructureTooltip
struct FItemToDisplayInStructureTooltip
{
public:
	class UClass*                                PrimalItem;                                        // 0x0(0x8)(None)
	int32                                        Quantity;                                          // 0x8(0x4)(None)
	uint8                                        Pad_4878[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModuleGroupHeader;                                 // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.SeatingSpot
struct FSeatingSpot
{
public:
	int32                                        SeatNumber;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4879[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocationOffset;                                    // 0x8(0x18)(None)
	struct FRotator                              RotationOffset;                                    // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.Porthole
struct FPorthole
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
	class FName                                  DisplayName;                                       // 0x1C(0x8)(None)
	uint8                                        Pad_487A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         CollisionComp;                                     // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.KeyBindingItem
struct FKeyBindingItem
{
public:
	uint8                                        bIsAxisMapping : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_3FE : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_487B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WidgetName;                                        // 0x4(0x8)(None)
	uint8                                        Pad_487C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionName;                                        // 0x10(0x10)(None)
	float                                        Scale;                                             // 0x20(0x4)(None)
	uint8                                        Pad_487D[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x40 - 0x20)
// ScriptStruct ShooterGame.ControllerEvent
struct FControllerEvent : public FInputEvent
{
public:
	uint8                                        Pad_487E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.PrimalWirelessReferences
struct FPrimalWirelessReferences
{
public:
	TSet<class APrimalStructureItemContainer*>   WirelessSources;                                   // 0x0(0x50)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSet<class APrimalStructureItemContainer*>   WirelessConsumers;                                 // 0x50(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PropertyModifierDefinition
struct FPropertyModifierDefinition
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(None)
	bool                                         bNeedsManualReplication;                           // 0x8(0x1)(None)
	enum class EWorldBuffPropertyLocation        BuffPropertyLocation;                              // 0x9(0x1)(None)
	uint8                                        Pad_487F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierValue;                                     // 0xC(0x4)(None)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ShooterGame.WorldBuffDefinition
struct FWorldBuffDefinition
{
public:
	class FName                                  WorldBuffIdentifier;                               // 0x0(0x8)(None)
	class FText                                  WorldBuffDisplayTitle;                             // 0x8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient)
	struct FLinearColor                          WorldBuffDisplayTitleColor;                        // 0x20(0x10)(None)
	class FText                                  WorldBuffDisplayText;                              // 0x30(0x18)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient)
	class UTexture2D*                            WorldBuffDisplayIcon;                              // 0x48(0x8)(ZeroConstructor)
	class FText                                  WorldBuffServerNotificationText;                   // 0x50(0x18)(SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                          WorldBuffServerNotificationTextColor;              // 0x68(0x10)(None)
	class UTexture2D*                            WorldBuffServerNotificationIcon;                   // 0x78(0x8)(ZeroConstructor)
	class USoundBase*                            WorldBuffServerNotificationSound;                  // 0x80(0x8)(ZeroConstructor)
	int32                                        StackLimit;                                        // 0x88(0x4)(None)
	float                                        WorldBuffDuration;                                 // 0x8C(0x4)(None)
	TArray<class FName>                          WorldBuffsToRemoveOnStart;                         // 0x90(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          WorldBuffsToPreventWhileActive;                    // 0xA0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient)
	float                                        TimeFromEndToAllowReplacement;                     // 0xB0(0x4)(None)
	class FName                                  WorldBuffSetName;                                  // 0xB4(0x8)(None)
	enum class EWorldBuffDifficultyType          BuffDifficulty;                                    // 0xBC(0x1)(None)
	uint8                                        Pad_4880[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DifficultyDisplayText;                             // 0xC0(0x10)(AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        bRefreshTimerAtFullStacks : 1;                     // Mask: 0x1, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bStacksExtendDuration : 1;                         // Mask: 0x2, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bStacksIncreaseEffect : 1;                         // Mask: 0x4, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bRemoveAllOtherWorldBuffsOnStart : 1;              // Mask: 0x8, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bPreventAddingAnyOtherWorldBuffs : 1;              // Mask: 0x10, PropSize: 0x10xD0(0x1)(None)
	uint8                                        bForceDisableServerNotifications : 1;              // Mask: 0x20, PropSize: 0x10xD0(0x1)(None)
	uint8                                        BitPad_3FF : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4881[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                WorldBuffCustomImplementation;                     // 0xD8(0x8)(None)
	TArray<struct FPropertyModifierDefinition>   PropertyModifiers;                                 // 0xE0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.FoliageReskinDefinition
struct FFoliageReskinDefinition
{
public:
	class FString                                ForFoliage;                                        // 0x0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            NewFoliageMaterials;                               // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            OverrideDestructionMaterials;                      // 0x20(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.LevelStaticMeshReskinDefinition
struct FLevelStaticMeshReskinDefinition
{
public:
	class FString                                MaterialNameToReplace;                             // 0x0(0x10)(None)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.SublevelOverrideDefinition
struct FSublevelOverrideDefinition
{
public:
	class FName                                  SublevelPackageToReplace;                          // 0x0(0x8)(None)
	class FName                                  SublevelPackageToActivate;                         // 0x8(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.SublevelOverrideGroup
struct FSublevelOverrideGroup
{
public:
	class FString                                ForMapName;                                        // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bUseSublevelOverrides;                             // 0x10(0x1)(None)
	uint8                                        Pad_4882[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSublevelOverrideDefinition>   SublevelOverrides;                                 // 0x18(0x10)(AutoWeak, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FLevelStaticMeshReskinDefinition> StaticMeshReskins;                                 // 0x28(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.ActiveEventGlobalStatusAdjustments
struct FActiveEventGlobalStatusAdjustments
{
public:
	class FName                                  ActiveEvent;                                       // 0x0(0x8)(None)
	float                                        GlobalStatusAdjustmentRateMultipliersPositive[0xC]; // 0x8(0x30)(None)
	float                                        GlobalStatusAdjustmentRateMultipliersNegative[0xC]; // 0x38(0x30)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.CustomWheelSettings
struct FCustomWheelSettings
{
public:
	class FString                                CenterText;                                        // 0x0(0x10)(None)
	struct FLinearColor                          CenterTextColorOverride;                           // 0x10(0x10)(None)
	struct FVector2D                             CenterImageSize;                                   // 0x20(0x10)(None)
	class UTexture2D*                            CenterImage;                                       // 0x30(0x8)(None)
	int32                                        MinNumDivisions;                                   // 0x38(0x4)(None)
	float                                        InnerDistance;                                     // 0x3C(0x4)(None)
	float                                        OuterDistance;                                     // 0x40(0x4)(None)
	uint8                                        bUseCenterTextColorOverride : 1;                   // Mask: 0x1, PropSize: 0x10x44(0x1)(None)
	uint8                                        Pad_4883[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.CustomWheelEntry
struct FCustomWheelEntry
{
public:
	TWeakObjectPtr<class UObject>                Target;                                            // 0x0(0x8)(ZeroConstructor)
	class FString                                TargetFunctionName;                                // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, ExposeOnSpawn)
	class FString                                Label;                                             // 0x18(0x10)(None)
	int32                                        Priority;                                          // 0x28(0x4)(None)
	float                                        ActivationTime;                                    // 0x2C(0x4)(None)
	class USoundBase*                            ActivationSound;                                   // 0x30(0x8)(ZeroConstructor)
	int32                                        CustomDataInt;                                     // 0x38(0x4)(None)
	class FName                                  CustomDataName;                                    // 0x3C(0x8)(None)
	struct FLinearColor                          TextColorOverride;                                 // 0x44(0x10)(None)
	struct FLinearColor                          BackgroundColorOverride;                           // 0x54(0x10)(None)
	uint8                                        bUseTextColorOverride : 1;                         // Mask: 0x1, PropSize: 0x10x64(0x1)(None)
	uint8                                        bUseBackgroundColorOverride : 1;                   // Mask: 0x2, PropSize: 0x10x64(0x1)(None)
	uint8                                        bPersistWheelOnActivation : 1;                     // Mask: 0x4, PropSize: 0x10x64(0x1)(None)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x8, PropSize: 0x10x64(0x1)(None)
	uint8                                        bDrawMultiUseOption : 1;                           // Mask: 0x10, PropSize: 0x10x64(0x1)(None)
	uint8                                        BitPad_400 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4884[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BPDrawEntryTargetRef;                              // 0x68(0x8)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ShooterGame.ShooterCharacterPostUpdateTickFunction
struct FShooterCharacterPostUpdateTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_4885[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PlayerStatusStateCharacterSound
struct FPlayerStatusStateCharacterSound
{
public:
	enum class EPrimalCharacterStatusState       StateType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_4886[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundToPlay;                                       // 0x8(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.AllyRadarDatas
struct FAllyRadarDatas
{
public:
	struct FVector                               LastKnownPlayerLocation;                           // 0x0(0x18)(None)
	class FString                                PlayerName;                                        // 0x18(0x10)(ContainsInstancedReference, Protected, ExposeOnSpawn)
	class FString                                LinkedPlayerIDString;                              // 0x28(0x10)(AssetRegistrySearchable, Protected, ExposeOnSpawn)
	class FString                                TribeName;                                         // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn)
	class FString                                PlatformProfileName;                               // 0x48(0x10)(None)
	int32                                        TeamID;                                            // 0x58(0x4)(None)
	float                                        LastKnownHealthCurrent;                            // 0x5C(0x4)(None)
	float                                        LastKnownHealthMax;                                // 0x60(0x4)(None)
	uint8                                        Pad_4887[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteLocationsPair
struct FExplorerNoteLocationsPair
{
public:
	int32                                        ExplorerNoteIndex;                                 // 0x0(0x4)(None)
	uint8                                        Pad_4888[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CheatString;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DinoClassCountStruct
struct FDinoClassCountStruct
{
public:
	class UClass*                                DinoClass;                                         // 0x0(0x8)(None)
	int32                                        NumberofTamedClass;                                // 0x8(0x4)(None)
	int32                                        NumberofTamedBabyClass;                            // 0xC(0x4)(None)
	int32                                        NumberofTamedFemalesClass;                         // 0x10(0x4)(None)
	int32                                        NumberofWildClass;                                 // 0x14(0x4)(None)
	int32                                        NumberofWildBabyClass;                             // 0x18(0x4)(None)
	int32                                        NumberofWildFemalesClass;                          // 0x1C(0x4)(None)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ShooterGame.Rotator_NetQuantize
struct FRotator_NetQuantize : public FRotator
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ShooterGame.Rotator_NetQuantizeNoRoll
struct FRotator_NetQuantizeNoRoll : public FRotator
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ShooterGame.Rotator_NetQuantizeYawOnly
struct FRotator_NetQuantizeYawOnly : public FRotator
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.OverrideDamageHarvestingEntry
struct FOverrideDamageHarvestingEntry
{
public:
	TArray<class UClass*>                        ForHarvestingComponents;                           // 0x0(0x10)(ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDamageHarvestingEntry                HarvestEntryOverride;                              // 0x10(0x28)(ZeroConstructor)
	TArray<struct FHarvestResourceEntry>         HarvestResourceEntriesOverride;                    // 0x38(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.TargetClassDamageScaler
struct FTargetClassDamageScaler
{
public:
	class UClass*                                TargetClass;                                       // 0x0(0x8)(None)
	float                                        DamageScale;                                       // 0x8(0x4)(None)
	uint8                                        Pad_4889[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.AssetPathObjectPair
struct FAssetPathObjectPair
{
public:
	struct FSoftObjectPath                       AssetPath;                                         // 0x0(0x20)(None)
	class UObject*                               AssetObject;                                       // 0x20(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.AudioComponentWrapper
struct FAudioComponentWrapper
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(None)
	uint8                                        Pad_488A[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PlayerBanInfo
struct FPlayerBanInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(None)
	uint32                                       Timeout;                                           // 0x10(0x4)(None)
	uint8                                        Pad_488B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.CachedTeamTameListStruct
struct FCachedTeamTameListStruct
{
public:
	int32                                        TargetingTeam;                                     // 0x0(0x4)(None)
	uint8                                        Pad_488C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTrackedActorPlusInfoStruct>   CachedTeamTameList;                                // 0x8(0x10)(ZeroConstructor)
	class AShooterPlayerController*              InitiatedPlayerRef;                                // 0x18(0x8)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PlayersAwaitingUpdatedCachedTeamTameListStruct
struct FPlayersAwaitingUpdatedCachedTeamTameListStruct
{
public:
	TWeakObjectPtr<class AShooterPlayerController> PlayerController;                                  // 0x0(0x8)(None)
	bool                                         bIsStaleInfo;                                      // 0x8(0x1)(None)
	uint8                                        Pad_488D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.MissionGlobalData
struct FMissionGlobalData
{
public:
	double                                       LastMissionDeactivatedUtcTime;                     // 0x0(0x8)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ShooterGame.DinoSpawnWeightMultiplier
struct FDinoSpawnWeightMultiplier
{
public:
	class FName                                  DinoNameTag;                                       // 0x0(0x8)(None)
	float                                        SpawnWeightMultiplier;                             // 0x8(0x4)(None)
	bool                                         OverrideSpawnLimitPercentage;                      // 0xC(0x1)(None)
	uint8                                        Pad_488E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnLimitPercentage;                              // 0x10(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.ConfigNPCSpawnEntriesContainer
struct FConfigNPCSpawnEntriesContainer
{
public:
	class FString                                NPCSpawnEntriesContainerClassString;               // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FNPCSpawnEntry>                NPCSpawnEntries;                                   // 0x10(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FNPCSpawnLimit>                NPCSpawnLimits;                                    // 0x20(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerDeathReason
struct FPlayerDeathReason
{
public:
	int32                                        PlayerID;                                          // 0x0(0x4)(None)
	uint8                                        Pad_488F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeathReason;                                       // 0x8(0x10)(None)
	double                                       DiedAtTime;                                        // 0x18(0x8)(None)
	struct FVector                               DeathLocation;                                     // 0x20(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.EngramEntryOverride
struct FEngramEntryOverride
{
public:
	class FString                                EngramClassName;                                   // 0x0(0x10)(None)
	int32                                        EngramIndex;                                       // 0x10(0x4)(None)
	bool                                         EngramHidden;                                      // 0x14(0x1)(None)
	uint8                                        Pad_4890[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EngramPointsCost;                                  // 0x18(0x4)(None)
	int32                                        EngramLevelRequirement;                            // 0x1C(0x4)(None)
	bool                                         RemoveEngramPreReq;                                // 0x20(0x1)(None)
	uint8                                        Pad_4891[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.EngramEntryAutoUnlock
struct FEngramEntryAutoUnlock
{
public:
	class FString                                EngramClassName;                                   // 0x0(0x10)(None)
	int32                                        LevelToAutoUnlock;                                 // 0x10(0x4)(None)
	uint8                                        Pad_4892[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ClassMultiplier
struct FClassMultiplier
{
public:
	class FString                                ClassName;                                         // 0x0(0x10)(None)
	float                                        Multiplier;                                        // 0x10(0x4)(None)
	uint8                                        Pad_4893[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.TributePlayerTribeInfo
struct FTributePlayerTribeInfo
{
public:
	TArray<uint64>                               PlayerDataIDs;                                     // 0x0(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint64>                               TribeIDs;                                          // 0x10(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.AtlasAdminCommandTrackingEntry
struct FAtlasAdminCommandTrackingEntry
{
public:
	uint32                                       ServerUTCTime;                                     // 0x0(0x4)(None)
	uint8                                        Pad_4894[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        PlayerID;                                          // 0x8(0x8)(None)
	class FString                                SteamID;                                           // 0x10(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn)
	class FString                                IP;                                                // 0x20(0x10)(AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn)
	struct FVector                               Location;                                          // 0x30(0x18)(None)
	class FString                                CommandType;                                       // 0x48(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn)
	class FString                                Command;                                           // 0x58(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DynamicUndermeshVolumes_Data
struct FDynamicUndermeshVolumes_Data
{
public:
	int32                                        X;                                                 // 0x0(0x4)(None)
	int32                                        Y;                                                 // 0x4(0x4)(None)
	int32                                        Z;                                                 // 0x8(0x4)(None)
	int32                                        R;                                                 // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DynamicUndermeshVolumes_MapSet
struct FDynamicUndermeshVolumes_MapSet
{
public:
	class FString                                Map;                                               // 0x0(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDynamicUndermeshVolumes_Data> Volumes;                                           // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DynamicUndermeshVolumes_Root
struct FDynamicUndermeshVolumes_Root
{
public:
	TArray<struct FDynamicUndermeshVolumes_MapSet> Root;                                              // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.GameIniData
struct FGameIniData
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn)
	class FString                                PropertyValue;                                     // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DinoDownloadData
struct FDinoDownloadData
{
public:
	uint32                                       AllowDownloadTimeUTC;                              // 0x0(0x4)(None)
	uint8                                        Pad_4895[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                UniqueDino;                                        // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.WorldBuffPersistantData
struct FWorldBuffPersistantData
{
public:
	class FName                                  WorldBuffIdentifier;                               // 0x0(0x8)(None)
	int32                                        StackCount;                                        // 0x8(0x4)(None)
	uint8                                        Pad_4896[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WorldBuffStartTime;                                // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DepthOfFieldSetting
struct FDepthOfFieldSetting
{
public:
	float                                        FocalDistance;                                     // 0x0(0x4)(None)
	float                                        FocalRegion;                                       // 0x4(0x4)(None)
	float                                        NearTransitionRegion;                              // 0x8(0x4)(None)
	float                                        FarTransitionRegion;                               // 0xC(0x4)(None)
	float                                        Scale;                                             // 0x10(0x4)(None)
	float                                        MaxBokehSize;                                      // 0x14(0x4)(None)
	float                                        Occlusion;                                         // 0x18(0x4)(None)
	bool                                         UseGaussianBlur;                                   // 0x1C(0x1)(None)
	uint8                                        Pad_4897[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ActiveEventMainMenuOverride
struct FActiveEventMainMenuOverride
{
public:
	class FName                                  ActiveEvent;                                       // 0x0(0x8)(None)
	class UTexture2D*                            MainMenuBG;                                        // 0x8(0x8)(None)
	class FString                                MusicFilename;                                     // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ShooterForceFeedback
struct FShooterForceFeedback
{
public:
	class UForceFeedbackEffect*                  FFE;                                               // 0x0(0x8)(None)
	int32                                        Priority;                                          // 0x8(0x4)(None)
	bool                                         PlayWhenPaused;                                    // 0xC(0x1)(None)
	enum class EHapticEffectType                 Type;                                              // 0xD(0x1)(None)
	uint8                                        Pad_4898[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.HUDRichTextOverlayData
struct FHUDRichTextOverlayData
{
public:
	class FString                                DisplayText;                                       // 0x0(0x10)(None)
	struct FLinearColor                          DefaultTextColor;                                  // 0x10(0x10)(None)
	uint8                                        bIgnoreDefaultTextColor : 1;                       // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        BitPad_401 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4899[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Position;                                          // 0x28(0x10)(None)
	enum class ETextJustify                      TextAlignment;                                     // 0x38(0x1)(None)
	enum class EHorizontalAlignment              HorizontalScreenAnchor;                            // 0x39(0x1)(None)
	enum class EVerticalAlignment                VerticalScreenAnchor;                              // 0x3A(0x1)(None)
	enum class EHorizontalAlignment              HorizontalWidgetAlignment;                         // 0x3B(0x1)(None)
	enum class EVerticalAlignment                VerticalWidgetAlignment;                           // 0x3C(0x1)(None)
	uint8                                        Pad_489A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x40(0x4)(None)
	uint8                                        bUseAutoWrap : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(None)
	uint8                                        BitPad_402 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_489B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AutoSizeOverride;                                  // 0x48(0x10)(None)
	class AActor*                                Instigator;                                        // 0x58(0x8)(None)
	uint8                                        Pad_489C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.HUDNotification
struct FHUDNotification
{
public:
	class FString                                NotificationString;                                // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn)
	class UMaterialInterface*                    NotificationMaterial;                              // 0x10(0x8)(ZeroConstructor)
	class UTexture2D*                            NotificationTexture;                               // 0x18(0x8)(ZeroConstructor)
	float                                        RemainingDisplayTime;                              // 0x20(0x4)(None)
	struct FColor                                NotificationColor;                                 // 0x24(0x4)(None)
	float                                        NotificationScale;                                 // 0x28(0x4)(None)
	float                                        LastYPos;                                          // 0x2C(0x4)(None)
	double                                       StartedTime;                                       // 0x30(0x8)(None)
	int32                                        MessageTypeID;                                     // 0x38(0x4)(None)
	int32                                        ItemMsgType;                                       // 0x3C(0x4)(None)
	class UClass*                                ItemClass;                                         // 0x40(0x8)(None)
	class FString                                ItemName;                                          // 0x48(0x10)(None)
	int32                                        ItemQuantity;                                      // 0x58(0x4)(None)
	float                                        ItemQuantityFloat;                                 // 0x5C(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.HintReplacementKeysForKeyboardControls
struct FHintReplacementKeysForKeyboardControls
{
public:
	class FString                                KeyboardControl;                                   // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ReplacementGamepadControls;                        // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PrimalTriggerEffect
struct FPrimalTriggerEffect
{
public:
	enum class ETriggerEffectType                Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_489D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Position;                                          // 0x4(0x4)(None)
	int32                                        Strength;                                          // 0x8(0x4)(None)
	int32                                        EndPosition;                                       // 0xC(0x4)(None)
	int32                                        EndStrength;                                       // 0x10(0x4)(None)
	int32                                        Frequency;                                         // 0x14(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DinoMapMarkerInfo
struct FDinoMapMarkerInfo
{
public:
	class APrimalDinoCharacter*                  Dino;                                              // 0x0(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  MarkerComponent;                                   // 0x8(0x8)(None)
	struct FVector                               DinoLocation;                                      // 0x10(0x18)(None)
	int32                                        PreviousLatitudeNumber;                            // 0x28(0x4)(None)
	int32                                        PreviousLongitudeNumber;                           // 0x2C(0x4)(None)
	struct FColor                                MarkerColor;                                       // 0x30(0x4)(None)
	uint8                                        Pad_489E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// ScriptStruct ShooterGame.NonClusterCharacterUploadData
struct FNonClusterCharacterUploadData
{
public:
	struct FArkTributePlayerData                 PlayerData;                                        // 0x0(0x120)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint64                                       TribeID;                                           // 0x120(0x8)(None)
	TArray<struct FItemNetInfo>                  Items;                                             // 0x128(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.PrimalStats
struct FPrimalStats
{
public:
	bool                                         bUsed;                                             // 0x0(0x1)(None)
	uint8                                        Pad_489F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StartStatsTime;                                    // 0x8(0x8)(None)
	int32                                        PrimalStatsValues[0x7];                            // 0x10(0x1C)(None)
	uint8                                        Pad_48A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.PingData
struct FPingData
{
public:
	uint8                                        PingID;                                            // 0x0(0x1)(None)
	uint8                                        Pad_48A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PingedLocation;                                    // 0x8(0x18)(None)
	class UPrimitiveComponent*                   PingedComponent;                                   // 0x20(0x8)(ZeroConstructor)
	class UTexture2D*                            PingIcon;                                          // 0x28(0x8)(ZeroConstructor)
	int32                                        CreatedByPlayerID;                                 // 0x30(0x4)(None)
	uint8                                        Pad_48A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CreatedByPlayerChar;                               // 0x38(0x8)(ZeroConstructor)
	TArray<class AShooterCharacter*>             RespondedPlayerChars;                              // 0x40(0x10)(None)
	double                                       PingCreationTime;                                  // 0x50(0x8)(None)
	uint8                                        bHasBeenViewed : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        bIsDying : 1;                                      // Mask: 0x2, PropSize: 0x10x58(0x1)(None)
	uint8                                        bIsDead : 1;                                       // Mask: 0x4, PropSize: 0x10x58(0x1)(None)
	uint8                                        Pad_48A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ReplicatePingData
struct FReplicatePingData
{
public:
	uint8                                        Rep_PingID;                                        // 0x0(0x1)(None)
	uint8                                        Pad_48A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Rep_PingedLocation;                                // 0x8(0x18)(None)
	class UPrimitiveComponent*                   Rep_PingedComponent;                               // 0x20(0x8)(ZeroConstructor)
	uint32                                       Rep_PingedByPlayerID;                              // 0x28(0x4)(None)
	uint8                                        Pad_48A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     Rep_PingedByPlayerChar;                            // 0x30(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructuresOnFloor
struct FStructuresOnFloor
{
public:
	class APrimalStructure*                      FloorStructure;                                    // 0x0(0x8)(ZeroConstructor)
	TArray<class APrimalStructure*>              StructuresOnFloor;                                 // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructHighlightInfo
struct FStructHighlightInfo
{
public:
	TWeakObjectPtr<class APrimalStructure>       Structure;                                         // 0x0(0x8)(None)
	struct FLinearColor                          HighlightColor;                                    // 0x8(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.AdminPlayerDataInfo
struct FAdminPlayerDataInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerSteamName;                                   // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                SteamID;                                           // 0x20(0x10)(None)
	int64                                        LinkedPlayerID;                                    // 0x30(0x8)(None)
	bool                                         IsHost;                                            // 0x38(0x1)(None)
	uint8                                        Pad_48A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.AlivePlayerDataInfo
struct FAlivePlayerDataInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerSteamName;                                   // 0x10(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	uint64                                       PlayerID;                                          // 0x20(0x8)(None)
	class FString                                TribeName;                                         // 0x28(0x10)(None)
	uint64                                       TargetingTeamID;                                   // 0x38(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.AliveNameAndLocation
struct FAliveNameAndLocation
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                TribeName;                                         // 0x10(0x10)(None)
	uint32                                       TargetingTeam;                                     // 0x20(0x4)(None)
	uint8                                        Pad_48A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       PlayerID;                                          // 0x28(0x8)(None)
	struct FVector                               Location;                                          // 0x30(0x18)(None)
};

// 0x2A0 (0x2A0 - 0x0)
// ScriptStruct ShooterGame.ServerOptions
struct FServerOptions
{
public:
	class FString                                MaxStructuresInRange;                              // 0x0(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DifficultyOffset;                                  // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                GlobalVoiceChat;                                   // 0x20(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ProximityChat;                                     // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                NoTributeDownloads;                                // 0x40(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                AllowThirdPersonPlayer;                            // 0x50(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                AlwaysNotifyPlayerLeft;                            // 0x60(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DontAlwaysNotifyPlayerJoined;                      // 0x70(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ServerHardcore;                                    // 0x80(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ServerPVE;                                         // 0x90(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ServerCrosshair;                                   // 0xA0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ServerForceNoHUD;                                  // 0xB0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ShowMapPlayerLocation;                             // 0xC0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ServerPassword;                                    // 0xD0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ServerAdminPassword;                               // 0xE0(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                SpectatorPassword;                                 // 0xF0(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DayCycleSpeedScale;                                // 0x100(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DayTimeSpeedScale;                                 // 0x110(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                NightTimeSpeedScale;                               // 0x120(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DinoDamageMultiplier;                              // 0x130(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerDamageMultiplier;                            // 0x140(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                StructureDamageMultiplier;                         // 0x150(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerResistanceMultiplier;                        // 0x160(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                DinoResistanceMultiplier;                          // 0x170(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                StructureResistanceMultiplier;                     // 0x180(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                XPMultiplier;                                      // 0x190(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                TamingSpeedMultiplier;                             // 0x1A0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                HarvestAmountMultiplier;                           // 0x1B0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerCharacterWaterDrainMultiplier;               // 0x1C0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerCharacterFoodDrainMultiplier;                // 0x1D0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                DinoCharacterFoodDrainMultiplier;                  // 0x1E0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerCharacterStaminaDrainMultiplier;             // 0x1F0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                DinoCharacterStaminaDrainMultiplier;               // 0x200(0x10)(Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                PlayerCharacterHealthRecoveryMultiplier;           // 0x210(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                DinoCharacterHealthRecoveryMultiplier;             // 0x220(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                DinoCountMultiplier;                               // 0x230(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                HarvestHealthMultiplier;                           // 0x240(0x10)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                PvEStructureDecayPeriodMultiplier;                 // 0x250(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                ResourcesRespawnPeriodMultiplier;                  // 0x260(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                EnablePvPGamma;                                    // 0x270(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                DisableStructureDecayPvE;                          // 0x280(0x10)(AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn)
	class FString                                AllowFlyerCarryPvE;                                // 0x290(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.SpawnPointInfo
struct FSpawnPointInfo
{
public:
	int32                                        SpawnPointID;                                      // 0x0(0x4)(None)
	uint8                                        Pad_48A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BedName;                                           // 0x8(0x10)(None)
	class ABiomeZoneVolume*                      SpawnPointVolume;                                  // 0x18(0x8)(ZeroConstructor)
	class UClass*                                SpawnPointActorClass;                              // 0x20(0x8)(None)
	struct FVector                               AtLocation;                                        // 0x28(0x18)(None)
	double                                       NextAllowedUseTime;                                // 0x40(0x8)(None)
	bool                                         bAllowedUse;                                       // 0x48(0x1)(None)
	uint8                                        Pad_48A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ProjectileWeaponData
struct FProjectileWeaponData
{
public:
	float                                        ProjectileLife;                                    // 0x0(0x4)(None)
	int32                                        ExplosionDamage;                                   // 0x4(0x4)(None)
	float                                        ExplosionImpulse;                                  // 0x8(0x4)(None)
	int32                                        DirectDamage;                                      // 0xC(0x4)(None)
	float                                        DirectImpulse;                                     // 0x10(0x4)(None)
	float                                        ExplosionRadius;                                   // 0x14(0x4)(None)
	class UClass*                                DamageType;                                        // 0x18(0x8)(ZeroConstructor)
	class UClass*                                DirectDamageType;                                  // 0x20(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.DataSet
struct FDataSet
{
public:
	class FName                                  DataSetName;                                       // 0x0(0x8)(None)
	TArray<class FName>                          ListNames;                                         // 0x8(0x10)(BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ListStrings;                                       // 0x18(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ListInts;                                          // 0x28(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ListFloats;                                        // 0x38(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       ListObjects;                                       // 0x48(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        ListActors;                                        // 0x58(0x10)(None)
	uint8                                        Pad_48AC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.DestructionGeoCollectionInfo
struct FDestructionGeoCollectionInfo
{
public:
	TSoftObjectPtr<class UGeometryCollection>    SoftDestructionGeoCollectionAsset;                 // 0x0(0x30)(None)
	struct FVector                               DestructibleMeshLocationOffset;                    // 0x30(0x18)(None)
	struct FVector                               DestructibleMeshScaleOverride;                     // 0x48(0x18)(None)
	struct FRotator                              DestructibleMeshRotationOffset;                    // 0x60(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ClassNameReplacement
struct FClassNameReplacement
{
public:
	class FString                                FromClassName;                                     // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                ToClassName;                                       // 0x10(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.ActionReportItem
struct FActionReportItem
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                TribeName;                                         // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                TimeOfDeath;                                       // 0x20(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                LevelOfDeath;                                      // 0x30(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DeathMessage;                                      // 0x40(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.ARKTributeData
struct FARKTributeData
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(None)
	enum class EPrimalARKTributeDataType         DataType;                                          // 0x10(0x1)(None)
	uint8                                        Pad_48AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                DataBytes;                                         // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DataClassName;                                     // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                DataTagName;                                       // 0x38(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn)
	class FString                                Name;                                              // 0x48(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        DataStats;                                         // 0x58(0x10)(None)
	double                                       LastReceiveDataTime;                               // 0x68(0x8)(None)
	uint32                                       DataID1;                                           // 0x70(0x4)(None)
	uint32                                       DataID2;                                           // 0x74(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.TamingDinoInfo
struct FTamingDinoInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	float                                        TameAffinityPercent;                               // 0x10(0x4)(None)
	float                                        HealthPercent;                                     // 0x14(0x4)(None)
	float                                        HealthCurrent;                                     // 0x18(0x4)(None)
	float                                        HealthMax;                                         // 0x1C(0x4)(None)
	float                                        HungerPercent;                                     // 0x20(0x4)(None)
	float                                        HungerCurrent;                                     // 0x24(0x4)(None)
	float                                        HungerMax;                                         // 0x28(0x4)(None)
	float                                        TorpidityPercent;                                  // 0x2C(0x4)(None)
	float                                        TameEffectivenessPercent;                          // 0x30(0x4)(None)
	int32                                        TameEffectivenessLvlModifier;                      // 0x34(0x4)(None)
	struct FVector                               Location;                                          // 0x38(0x18)(None)
	bool                                         bIsConcious;                                       // 0x50(0x1)(None)
	bool                                         bUseGender;                                        // 0x51(0x1)(None)
	bool                                         bIsFemale;                                         // 0x52(0x1)(None)
	bool                                         bIsTamed;                                          // 0x53(0x1)(None)
	uint32                                       DataID1;                                           // 0x54(0x4)(None)
	uint32                                       DataID2;                                           // 0x58(0x4)(None)
	bool                                         bIsFavorited;                                      // 0x5C(0x1)(None)
	uint8                                        Pad_48AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DinoEntry;                                         // 0x60(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TooltipTextInfo
struct FTooltipTextInfo
{
public:
	class FString                                Text;                                              // 0x0(0x10)(None)
	struct FColor                                Color;                                             // 0x10(0x4)(None)
	bool                                         bOnMinimalUI;                                      // 0x14(0x1)(None)
	uint8                                        Pad_48AF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.StatValuePair
struct FStatValuePair
{
public:
	enum class EPrimalCharacterStatusValue       Stat;                                              // 0x0(0x1)(None)
	uint8                                        Pad_48B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.WeightedObjectList
struct FWeightedObjectList
{
public:
	TArray<float>                                Weights;                                           // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       AssociatedObjects;                                 // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
struct FDamagePrimalCharacterStatusValueModifier
{
public:
	enum class EPrimalCharacterStatusValue       ValueType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_48B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bSpeedToAddInSeconds : 1;                          // Mask: 0x1, PropSize: 0x10x4(0x1)(None)
	uint8                                        bContinueOnUnchangedValue : 1;                     // Mask: 0x2, PropSize: 0x10x4(0x1)(None)
	uint8                                        bIgnorePawnDamageAdjusters : 1;                    // Mask: 0x4, PropSize: 0x10x4(0x1)(None)
	uint8                                        bResetExistingModifierDescriptionIndex : 1;        // Mask: 0x8, PropSize: 0x10x4(0x1)(None)
	uint8                                        bSetValue : 1;                                     // Mask: 0x10, PropSize: 0x10x4(0x1)(None)
	uint8                                        bSetAdditionalValue : 1;                           // Mask: 0x20, PropSize: 0x10x4(0x1)(None)
	uint8                                        BitPad_403 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LimitExistingModifierDescriptionToMaxAmount;       // 0x8(0x4)(None)
	int32                                        UseAbsoluteDamageAmount;                           // 0xC(0x4)(None)
	float                                        DamageMultiplierAmountToAdd;                       // 0x10(0x4)(None)
	float                                        SpeedToAdd;                                        // 0x14(0x4)(None)
	int32                                        StatusValueModifierDescriptionIndex;               // 0x18(0x4)(None)
	uint8                                        bUsePercentualDamage : 1;                          // Mask: 0x1, PropSize: 0x10x1C(0x1)(None)
	uint8                                        bMakeUntameable : 1;                               // Mask: 0x2, PropSize: 0x10x1C(0x1)(None)
	uint8                                        BitPad_404 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentualDamage;                                  // 0x20(0x4)(None)
	uint8                                        Pad_48B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ScaleValueByCharacterDamageType;                   // 0x28(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.ServerChatMessage
struct FServerChatMessage
{
public:
	uint8                                        Pad_48B5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MessageText;                                       // 0x8(0x10)(None)
	struct FLinearColor                          MessageColor;                                      // 0x18(0x10)(None)
	bool                                         bIsBold;                                           // 0x28(0x1)(None)
	uint8                                        Pad_48B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisplayScale;                                      // 0x2C(0x4)(None)
	float                                        DisplayTime;                                       // 0x30(0x4)(None)
	uint8                                        Pad_48B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            MessageIcon;                                       // 0x38(0x8)(ZeroConstructor)
	class USoundBase*                            SoundToPlay;                                       // 0x40(0x8)(None)
	int32                                        MessageTypeID;                                     // 0x48(0x4)(None)
	uint8                                        Pad_48B8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.RangedValues
struct FRangedValues
{
public:
	int32                                        Range;                                             // 0x0(0x4)(None)
	int32                                        Value;                                             // 0x4(0x4)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ShooterGame.PrimalChatMessage
struct FPrimalChatMessage
{
public:
	class FString                                SenderName;                                        // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                SenderSteamName;                                   // 0x10(0x10)(Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                SenderTribeName;                                   // 0x20(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn)
	uint32                                       SenderId;                                          // 0x30(0x4)(None)
	uint8                                        Pad_48B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                Receiver;                                          // 0x48(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn)
	int32                                        SenderTeamIndex;                                   // 0x58(0x4)(None)
	uint8                                        Pad_48BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReceivedTime;                                      // 0x60(0x8)(None)
	enum class EChatSendMode                     SendMode;                                          // 0x68(0x1)(None)
	uint8                                        Pad_48BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       RadioFrequency;                                    // 0x6C(0x4)(None)
	enum class EChatType                         ChatType;                                          // 0x70(0x1)(None)
	uint8                                        Pad_48BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SenderIcon;                                        // 0x78(0x8)(None)
	class FString                                UserId;                                            // 0x80(0x10)(None)
	uint8                                        SenderIsAdmin : 1;                                 // Mask: 0x1, PropSize: 0x10x90(0x1)(None)
	uint8                                        Pad_48BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct ShooterGame.PrimalImageStyle
struct FPrimalImageStyle
{
public:
	class FName                                  StyleName;                                         // 0x0(0x8)(None)
	uint8                                        Pad_48BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInlineTextImageStyle                 ImageStyle;                                        // 0x10(0xF0)(None)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct ShooterGame.PrimalTextStyle
struct FPrimalTextStyle
{
public:
	class FName                                  StyleName;                                         // 0x0(0x8)(None)
	uint8                                        Pad_48BF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       TextStyle;                                         // 0x10(0x340)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.BoneDamageAdjuster
struct FBoneDamageAdjuster
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	float                                        DamageMultiplier;                                  // 0x8(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PaintItem
struct FPaintItem
{
public:
	class UPrimalInventoryComponent*             InventoryComp;                                     // 0x0(0x8)(None)
	struct FItemNetID                            ItemID;                                            // 0x8(0x8)(None)
	uint8                                        ColorCode;                                         // 0x10(0x1)(None)
	uint8                                        Pad_48C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        X;                                                 // 0x14(0x4)(None)
	float                                        Y;                                                 // 0x18(0x4)(None)
	uint8                                        Pad_48C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ItemMultiplier
struct FItemMultiplier
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(None)
	float                                        ItemMultiplier;                                    // 0x8(0x4)(None)
	uint8                                        Pad_48C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.SaveLoadDyePaintingItem
struct FSaveLoadDyePaintingItem
{
public:
	struct FItemNetID                            ItemID;                                            // 0x0(0x8)(None)
	class FString                                ColorName;                                         // 0x8(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FColor                                DyeColor;                                          // 0x18(0x4)(None)
	float                                        MissingPercentage;                                 // 0x1C(0x4)(None)
	float                                        NeededPercentage;                                  // 0x20(0x4)(None)
	int16                                        ArchIndex;                                         // 0x24(0x2)(None)
	uint8                                        Pad_48C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ColorPixels;                                       // 0x28(0x10)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.FishSnareData
struct FFishSnareData
{
public:
	TWeakObjectPtr<class APrimalDinoCharacter>   DinoCharacter;                                     // 0x0(0x8)(None)
	float                                        SnareTime;                                         // 0x8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.GamePadKeyName
struct FGamePadKeyName
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                Name;                                              // 0x18(0x10)(None)
	class UTexture2D*                            KeyIcon;                                           // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.BlueprintVisualLogEntry
struct FBlueprintVisualLogEntry
{
public:
	class FString                                Category;                                          // 0x0(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                Key;                                               // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                Value;                                             // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.AvailableMission
struct FAvailableMission
{
public:
	class UClass*                                MissionClass;                                      // 0x0(0x8)(None)
	uint8                                        Pad_48C4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.MissionMetaData
struct FMissionMetaData
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(None)
	class UClass*                                MissionMetaDataClass;                              // 0x8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.MissionAlertEntry
struct FMissionAlertEntry
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(ZeroConstructor)
	int32                                        Count;                                             // 0x8(0x4)(None)
	uint8                                        Pad_48C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Label;                                             // 0x10(0x10)(None)
	class UClass*                                ItemType;                                          // 0x20(0x8)(None)
	uint8                                        bShowCount : 1;                                    // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        Pad_48C6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.LootTableEntry
struct FLootTableEntry
{
public:
	enum class ELootItemType                     LootItemType;                                      // 0x0(0x1)(None)
	uint8                                        Pad_48C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        LootItemClasses;                                   // 0x8(0x10)(None)
	float                                        Weight;                                            // 0x18(0x4)(None)
	enum class ESimpleCurve                      QuantityCurve;                                     // 0x1C(0x1)(None)
	uint8                                        Pad_48C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinQuantity;                                       // 0x20(0x4)(None)
	int32                                        MaxQuantity;                                       // 0x24(0x4)(None)
	enum class ESimpleCurve                      QualityCurve;                                      // 0x28(0x1)(None)
	uint8                                        Pad_48C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             QualityRange;                                      // 0x30(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TekGrenadeLauncherSlot
struct FTekGrenadeLauncherSlot
{
public:
	class UClass*                                AmmoType;                                          // 0x0(0x8)(None)
	double                                       LastFireTime;                                      // 0x8(0x8)(None)
	bool                                         bIsLoaded;                                         // 0x10(0x1)(None)
	uint8                                        Pad_48CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct ShooterGame.HUDElement
struct FHUDElement
{
public:
	enum class EHUDElementType                   Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_48CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsVisible : 1;                                    // Mask: 0x1, PropSize: 0x10x4(0x1)(None)
	uint8                                        bIsEditorOnly : 1;                                 // Mask: 0x2, PropSize: 0x10x4(0x1)(None)
	uint8                                        bRespectPlayerUIScaleSetting : 1;                  // Mask: 0x4, PropSize: 0x10x4(0x1)(None)
	uint8                                        bTitleIsExtendedInfo : 1;                          // Mask: 0x8, PropSize: 0x10x4(0x1)(None)
	uint8                                        bLabelIsExtendedInfo : 1;                          // Mask: 0x10, PropSize: 0x10x4(0x1)(None)
	uint8                                        BitPad_405 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	enum class ETextJustify                      TextAlignment_Title;                               // 0x18(0x1)(None)
	uint8                                        Pad_48CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Label;                                             // 0x20(0x10)(None)
	enum class ETextJustify                      TextAlignment_Label;                               // 0x30(0x1)(None)
	enum class EHUDElementHorizontalAlignment    TextContainerHorizontalAlignment;                  // 0x31(0x1)(None)
	enum class EHUDElementVerticalAlignment      TextContainerVerticalAlignment;                    // 0x32(0x1)(None)
	uint8                                        Pad_48CE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZOrder;                                            // 0x34(0x4)(None)
	float                                        Progress;                                          // 0x38(0x4)(None)
	struct FLinearColor                          TextColor;                                         // 0x3C(0x10)(None)
	float                                        TextScale;                                         // 0x4C(0x4)(None)
	struct FMargin                               TextPadding;                                       // 0x50(0x10)(None)
	struct FLinearColor                          BackgroundImageColor;                              // 0x60(0x10)(None)
	struct FLinearColor                          ProgressColor;                                     // 0x70(0x10)(None)
	enum class EProgressBarFillType              ProgressBarFillType;                               // 0x80(0x1)(None)
	enum class EHUDElementAnchorMode             AnchorMode;                                        // 0x81(0x1)(None)
	uint8                                        Pad_48CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnchors                              Anchor;                                            // 0x88(0x20)(None)
	struct FVector2D                             Location;                                          // 0xA8(0x10)(None)
	uint8                                        bOverrideLocationForUIScaling : 1;                 // Mask: 0x1, PropSize: 0x10xB8(0x1)(None)
	uint8                                        BitPad_406 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationAtMinScale;                                // 0xC0(0x10)(None)
	struct FVector2D                             LocationAtDefaultScale;                            // 0xD0(0x10)(None)
	struct FVector2D                             LocationAtMaxScale;                                // 0xE0(0x10)(None)
	struct FVector2D                             Size;                                              // 0xF0(0x10)(None)
	struct FVector2D                             Scale;                                             // 0x100(0x10)(None)
	class UTexture2D*                            BackgroundImage;                                   // 0x110(0x8)(ZeroConstructor)
	class UTexture2D*                            ProgressBarFillImage;                              // 0x118(0x8)(ZeroConstructor)
	struct FMargin                               ProgressBarPadding;                                // 0x120(0x10)(None)
	struct FVector2D                             ProgressBarScale;                                  // 0x130(0x10)(None)
	class UTexture2D*                            Icon;                                              // 0x140(0x8)(None)
	struct FVector2D                             IconSize;                                          // 0x148(0x10)(None)
	struct FVector2D                             IconScale;                                         // 0x158(0x10)(None)
	struct FLinearColor                          IconColor;                                         // 0x168(0x10)(None)
	struct FMargin                               IconPadding;                                       // 0x178(0x10)(None)
	float                                        IconRotation;                                      // 0x188(0x4)(None)
	struct FMargin                               ProgressBarFillImageMargin;                        // 0x18C(0x10)(None)
	struct FMargin                               ProgressBarBackgroundImageMargin;                  // 0x19C(0x10)(None)
	uint8                                        bUseGamepadIcon : 1;                               // Mask: 0x1, PropSize: 0x10x1AC(0x1)(None)
	uint8                                        Pad_48D1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.LeaderboardDisplayRow
struct FLeaderboardDisplayRow
{
public:
	class UTexture2D*                            RowIcon;                                           // 0x0(0x8)(None)
	TArray<class FString>                        Columns;                                           // 0x8(0x10)(None)
	uint8                                        Pad_48D3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.MekBackpackData
struct FMekBackpackData
{
public:
	class FName                                  BackpackType;                                      // 0x0(0x8)(None)
	TArray<bool>                                 BoolData;                                          // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                FloatData;                                         // 0x18(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<double>                               TimeData;                                          // 0x28(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       VectorData;                                        // 0x38(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        StringData;                                        // 0x48(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.HitMarkerSettings
struct FHitMarkerSettings
{
public:
	uint8                                        bIsVisible : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bPlayHitSound : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_407 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(None)
	float                                        DrawDuration;                                      // 0x14(0x4)(None)
	struct FVector2D                             Scale;                                             // 0x18(0x10)(None)
	class USoundBase*                            HitSound;                                          // 0x28(0x8)(None)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct ShooterGame.PointOfInterestData
struct FPointOfInterestData
{
public:
	uint8                                        PointType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_48DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PointTag;                                          // 0x4(0x8)(None)
	uint8                                        Pad_48DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PointTitle;                                        // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	class FString                                PointDescription;                                  // 0x20(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	struct FVector                               PointLocation;                                     // 0x30(0x18)(None)
	struct FRotator                              PointRotation;                                     // 0x48(0x18)(None)
	class AActor*                                PointActor;                                        // 0x60(0x8)(ZeroConstructor)
	float                                        PointVisibleDistance;                              // 0x68(0x4)(None)
	float                                        PointVisibleDotProductRange;                       // 0x6C(0x4)(None)
	class UTexture2D*                            PointIcon;                                         // 0x70(0x8)(ZeroConstructor)
	class UParticleSystem*                       ViewedPointVFX;                                    // 0x78(0x8)(ZeroConstructor)
	class USoundCue*                             ViewedPointSFX;                                    // 0x80(0x8)(ZeroConstructor)
	class UClass*                                PointCosmeticActorClass;                           // 0x88(0x8)(ZeroConstructor)
	struct FTransform                            PointCosmeticActorOffsetTransform;                 // 0x90(0x60)(None)
	uint8                                        bHidePointOfInterestTitleBar : 1;                  // Mask: 0x1, PropSize: 0x10xF0(0x1)(None)
	uint8                                        bPointTagValidated : 1;                            // Mask: 0x2, PropSize: 0x10xF0(0x1)(None)
	uint8                                        bPointTagRequiresValidation : 1;                   // Mask: 0x4, PropSize: 0x10xF0(0x1)(None)
	uint8                                        bOnlyVisibleOffScreen : 1;                         // Mask: 0x8, PropSize: 0x10xF0(0x1)(None)
	uint8                                        bOnlyVisibleOnScreen : 1;                          // Mask: 0x10, PropSize: 0x10xF0(0x1)(None)
	uint8                                        bAlwaysVisible : 1;                                // Mask: 0x20, PropSize: 0x10xF0(0x1)(None)
	uint8                                        BitPad_408 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            LocationAddedSound;                                // 0xF8(0x8)(ZeroConstructor)
	class USoundBase*                            LocationReachedSound;                              // 0x100(0x8)(ZeroConstructor)
	struct FVector                               WidgetLocationOffset;                              // 0x108(0x18)(None)
	float                                        WidgetHiddenDistance;                              // 0x120(0x4)(None)
	struct FLinearColor                          IndicatorColor;                                    // 0x124(0x10)(None)
	struct FLinearColor                          IconColor;                                         // 0x134(0x10)(None)
	uint8                                        bUsePulseAnimation : 1;                            // Mask: 0x1, PropSize: 0x10x144(0x1)(None)
	uint8                                        bShowProgress : 1;                                 // Mask: 0x2, PropSize: 0x10x144(0x1)(None)
	uint8                                        BitPad_409 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProgressValue;                                     // 0x148(0x4)(None)
	uint8                                        Pad_48DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProgressLabelText;                                 // 0x150(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	struct FLinearColor                          ProgressBarColor;                                  // 0x160(0x10)(None)
	struct FLinearColor                          ProgressLabelColor;                                // 0x170(0x10)(None)
	uint8                                        bShowProgressLabelWhenOffScreen : 1;               // Mask: 0x1, PropSize: 0x10x180(0x1)(None)
	uint8                                        bOnlyVisibleOnMap : 1;                             // Mask: 0x2, PropSize: 0x10x180(0x1)(None)
	uint8                                        BitPad_40A : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterID;                                       // 0x184(0x4)(None)
	uint8                                        CharacterIsPlayer : 1;                             // Mask: 0x1, PropSize: 0x10x188(0x1)(None)
	uint8                                        BitPad_40B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlphaMultiplier;                                   // 0x18C(0x4)(None)
	float                                        ScaleMultiplier;                                   // 0x190(0x4)(None)
	uint8                                        bShowSecondaryProgress : 1;                        // Mask: 0x1, PropSize: 0x10x194(0x1)(None)
	uint8                                        BitPad_40C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondaryProgressValue;                            // 0x198(0x4)(None)
	struct FLinearColor                          SecondaryProgressBarColor;                         // 0x19C(0x10)(None)
	uint8                                        bCanDismissPOI : 1;                                // Mask: 0x1, PropSize: 0x10x1AC(0x1)(None)
	uint8                                        BitPad_40D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UseDismissIndex;                                   // 0x1B0(0x4)(None)
	uint8                                        Pad_48E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DismissActorAction;                                // 0x1B8(0x8)(None)
	class FString                                DistanceString;                                    // 0x1C0(0x10)(None)
	uint8                                        bPreventTextClose : 1;                             // Mask: 0x1, PropSize: 0x10x1D0(0x1)(None)
	uint8                                        Pad_48E4[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x300 (0x300 - 0x0)
// ScriptStruct ShooterGame.PointOfInterestCompanionBehavior
struct FPointOfInterestCompanionBehavior
{
public:
	float                                        CompanionFocusRange;                               // 0x0(0x4)(None)
	float                                        CompanionOrbitWithinRange;                         // 0x4(0x4)(None)
	float                                        CompanionOrbitRadius;                              // 0x8(0x4)(None)
	uint8                                        Pad_48E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OrbitOriginOffset;                                 // 0x10(0x18)(None)
	float                                        CompanionReachedOrbitWithinDistOverride;           // 0x28(0x4)(None)
	float                                        InterpToOrbitSpeedOverride;                        // 0x2C(0x4)(None)
	float                                        InterpAroundOrbitSpeedOverride;                    // 0x30(0x4)(None)
	uint8                                        Pad_48E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionReactionData                CompanionReaction_WithinRange;                     // 0x38(0xB0)(ZeroConstructor, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	struct FCompanionReactionData                CompanionReaction_StartOrbit;                      // 0xE8(0xB0)(ZeroConstructor, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	struct FCompanionReactionData                CompanionReaction_ReachedOrbit;                    // 0x198(0xB0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	struct FCompanionReactionData                CompanionReaction_PointViewed;                     // 0x248(0xB0)(None)
	uint8                                        bForceCompanionFocus : 1;                          // Mask: 0x1, PropSize: 0x10x2F8(0x1)(None)
	uint8                                        bOrbitingCompanionLooksAtPoint : 1;                // Mask: 0x2, PropSize: 0x10x2F8(0x1)(None)
	uint8                                        bForceCompanionLookAtPointActor : 1;               // Mask: 0x4, PropSize: 0x10x2F8(0x1)(None)
	uint8                                        bRandomlyOrbitAroundAndScan : 1;                   // Mask: 0x8, PropSize: 0x10x2F8(0x1)(None)
	uint8                                        Pad_48E7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4E0 (0x4E0 - 0x0)
// ScriptStruct ShooterGame.PointOfInterestData_ForCompanion
struct FPointOfInterestData_ForCompanion
{
public:
	struct FPointOfInterestData                  PointData;                                         // 0x0(0x1E0)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	struct FPointOfInterestCompanionBehavior     PointCompanionBehavior;                            // 0x1E0(0x300)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.MissionWaypointInfo
struct FMissionWaypointInfo
{
public:
	bool                                         bWaypointActive;                                   // 0x0(0x1)(None)
	uint8                                        Pad_48E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaypointDestination;                               // 0x8(0x18)(None)
	class FString                                WaypointTitle;                                     // 0x20(0x10)(None)
	class FName                                  WaypointID;                                        // 0x30(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.TamingWaypointInfo
struct FTamingWaypointInfo
{
public:
	bool                                         bWaypointActive;                                   // 0x0(0x1)(None)
	uint8                                        Pad_48E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaypointDestination;                               // 0x8(0x18)(None)
	class FString                                WaypointTitle;                                     // 0x20(0x10)(Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	int32                                        WaypointID;                                        // 0x30(0x4)(None)
	uint8                                        Pad_48EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x38(0x8)(ZeroConstructor)
	struct FTamingDinoInfo                       DinoInfo;                                          // 0x40(0x68)(None)
	float                                        ProgressBarPercent;                                // 0xA8(0x4)(None)
	bool                                         bIsTamed;                                          // 0xAC(0x1)(None)
	uint8                                        Pad_48EB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ShooterGame.TrackedActorWaypointInfo
struct FTrackedActorWaypointInfo
{
public:
	bool                                         bWaypointActive;                                   // 0x0(0x1)(None)
	uint8                                        Pad_48EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaypointDestination;                               // 0x8(0x18)(None)
	class FString                                WaypointTitle;                                     // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn)
	int32                                        WaypointID;                                        // 0x30(0x4)(None)
	uint8                                        Pad_48ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x38(0x8)(ZeroConstructor)
	struct FCustomTrackedActorInfo               DinoInfo;                                          // 0x40(0xE0)(None)
	float                                        ProgressBarPercent;                                // 0x120(0x4)(None)
	bool                                         bIsTamed;                                          // 0x124(0x1)(None)
	uint8                                        Pad_48EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TamedAtTime;                                       // 0x128(0x8)(None)
	struct FVector                               LastPOILocation;                                   // 0x130(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.TeleportDestination
struct FTeleportDestination
{
public:
	class FString                                DestinationTitle;                                  // 0x0(0x10)(None)
	struct FVector                               DestinationLocation;                               // 0x10(0x18)(None)
	struct FRotator                              DestinationRotation;                               // 0x28(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.MinimapMark
struct FMinimapMark
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	class FName                                  CustomTag;                                         // 0x10(0x8)(None)
	struct FVector                               Location;                                          // 0x18(0x18)(None)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(None)
	int32                                        ID;                                                // 0x40(0x4)(None)
	uint8                                        Pad_48EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            MarkIcon;                                          // 0x48(0x8)(None)
	class FName                                  MapName;                                           // 0x50(0x8)(None)
	uint8                                        bIsShowing : 1;                                    // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        BitPad_40E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          IconColor;                                         // 0x5C(0x10)(None)
	uint8                                        bIsShowingText : 1;                                // Mask: 0x1, PropSize: 0x10x6C(0x1)(None)
	uint8                                        BitPad_40F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterID;                                       // 0x70(0x4)(None)
	uint8                                        CharacterIsPlayer : 1;                             // Mask: 0x1, PropSize: 0x10x74(0x1)(None)
	uint8                                        Pad_48F2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ShooterGame.MassTeleportData
struct FMassTeleportData
{
public:
	struct FTeleportDestination                  MyTeleportDestination;                             // 0x0(0x40)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       MyTeleportStartTime;                               // 0x40(0x8)(None)
	float                                        MyTeleportDuration;                                // 0x48(0x4)(None)
	float                                        MyTeleportRadius;                                  // 0x4C(0x4)(None)
	class AActor*                                InitiatedByActor;                                  // 0x50(0x8)(ZeroConstructor)
	uint8                                        Pad_48F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitiatedAtTransform;                              // 0x60(0x60)(None)
	class UClass*                                BuffToApply;                                       // 0xC0(0x8)(ZeroConstructor)
	TArray<class AActor*>                        MyTeleportingActors;                               // 0xC8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        bTeleportSnapsToGround : 1;                        // Mask: 0x1, PropSize: 0x10xD8(0x1)(None)
	uint8                                        BitPad_410 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    MyTeleportingActorTransformOffsets;                // 0xE0(0x10)(AutoWeak, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                MyTeleportingDelays;                               // 0xF0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                MyTeleportationAttemptMap;                         // 0x100(0x10)(None)
	uint8                                        bMaintainRotation : 1;                             // Mask: 0x1, PropSize: 0x10x110(0x1)(None)
	uint8                                        Pad_48F5[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.CrateTemporaryQualityModifiers
struct FCrateTemporaryQualityModifiers
{
public:
	class FName                                  CustomTag;                                         // 0x0(0x8)(None)
	class FString                                ClassString;                                       // 0x8(0x10)(None)
	float                                        QualityMultiplierModifier;                         // 0x18(0x4)(None)
	uint8                                        Pad_48F6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CrateTemporaryQualityModifierSet
struct FCrateTemporaryQualityModifierSet
{
public:
	class FName                                  SetTag;                                            // 0x0(0x8)(None)
	TArray<struct FCrateTemporaryQualityModifiers> Modifiers;                                         // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ResourceTemporaryAmountModifiers
struct FResourceTemporaryAmountModifiers
{
public:
	class FName                                  CustomTag;                                         // 0x0(0x8)(None)
	class FString                                HarvestComponentClassString;                       // 0x8(0x10)(None)
	float                                        ResourceAmountMultiplierModifier;                  // 0x18(0x4)(None)
	uint8                                        Pad_48F7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ResourceTemporaryAmountModifierSet
struct FResourceTemporaryAmountModifierSet
{
public:
	class FName                                  SetTag;                                            // 0x0(0x8)(None)
	TArray<struct FResourceTemporaryAmountModifiers> Modifiers;                                         // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.UserCosmeticInfo
struct FUserCosmeticInfo
{
public:
	class FString                                TribeFlagFile;                                     // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.DinoAbilityInfo
struct FDinoAbilityInfo
{
public:
	class FName                                  InputAction;                                       // 0x0(0x8)(None)
	class FString                                AbilityName;                                       // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance)
	class FString                                AbilityDescription;                                // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DinoAbilities
struct FDinoAbilities
{
public:
	class FName                                  DinoTag;                                           // 0x0(0x8)(None)
	TArray<struct FDinoAbilityInfo>              AbilityInfos;                                      // 0x8(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.SOTFScorePlayerData
struct FSOTFScorePlayerData
{
public:
	int32                                        LinkedID;                                          // 0x0(0x4)(None)
	uint8                                        Pad_48F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x8(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance)
	int32                                        PlayersKilled;                                     // 0x18(0x4)(None)
	int32                                        DinosKilled;                                       // 0x1C(0x4)(None)
	double                                       DeathTime;                                         // 0x20(0x8)(None)
	class FString                                KilledBy;                                          // 0x28(0x10)(None)
	class UClass*                                DeathDamageCauserClass;                            // 0x38(0x8)(None)
	int32                                        KillerTeam;                                        // 0x40(0x4)(None)
	uint8                                        Pad_48F9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.SOTFScoreTribeData
struct FSOTFScoreTribeData
{
public:
	int32                                        TargetingTeam;                                     // 0x0(0x4)(None)
	int32                                        PlayersKilledByDinos;                              // 0x4(0x4)(None)
	int32                                        DinosKilledByDinos;                                // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PrimalCameraInterpParams
struct FPrimalCameraInterpParams
{
public:
	float                                        SpringStiffness;                                   // 0x0(0x4)(None)
	float                                        CriticalDamping;                                   // 0x4(0x4)(None)
	float                                        TargetVelocity;                                    // 0x8(0x4)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraPitchBasedModifier
struct FPrimalCameraPitchBasedModifier
{
public:
	struct FVector2D                             ApplyBetweenPitchValues;                           // 0x0(0x10)(None)
	uint8                                        bLerpValue : 1;                                    // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_411 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LerpBetweenPitchValues;                            // 0x18(0x10)(None)
	float                                        ExponentialLerpBase;                               // 0x28(0x4)(None)
	enum class EAxis                             InterpParamsAxis;                                  // 0x2C(0x1)(None)
	uint8                                        Pad_48FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             FinalInterpParams;                                 // 0x30(0xC)(None)
	uint8                                        bOverrideArmLengthStartingLerpValue : 1;           // Mask: 0x1, PropSize: 0x10x3C(0x1)(None)
	uint8                                        BitPad_412 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArmLengthStartingLerpValue;                        // 0x40(0x4)(None)
	float                                        FinalArmLength;                                    // 0x44(0x4)(None)
	uint8                                        bOverrideArmLengthInterpParams : 1;                // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        BitPad_413 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             FinalArmLengthInterpParams;                        // 0x4C(0xC)(None)
	uint8                                        bOverridePivotLocationOffset : 1;                  // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        bOverridePivotLocationOffsetStartingLerpValue : 1; // Mask: 0x2, PropSize: 0x10x58(0x1)(None)
	uint8                                        BitPad_414 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PivotLocationOffsetStartingLerpValue;              // 0x60(0x18)(None)
	struct FVector                               FinalPivotOffset;                                  // 0x78(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraInterpScreenAreaModifier
struct FPrimalCameraInterpScreenAreaModifier
{
public:
	uint8                                        bApplyOnXAxis : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bApplyOnYAxis : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_415 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenCoords;                                      // 0x8(0x10)(None)
	uint8                                        bLerpValue : 1;                                    // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_416 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4900[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenCoordsForLerping;                            // 0x20(0x10)(None)
	uint8                                        bOverrideStartingParamsForLerping : 1;             // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        BitPad_417 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4901[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             StartingInterpParamsForLerping;                    // 0x34(0xC)(None)
	float                                        ExponentialLerpBase;                               // 0x40(0x4)(None)
	struct FPrimalCameraInterpParams             NewInterpParams;                                   // 0x44(0xC)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraParamsOverride
struct FPrimalCameraParamsOverride
{
public:
	class FName                                  CameraPivotBoneName;                               // 0x0(0x8)(None)
	uint8                                        bOverridePivotLocationOffsetSettings : 1;          // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bUsePivotLocationOffset : 1;                       // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_418 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4902[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PivotLocationOffset;                               // 0x10(0x18)(None)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsX;                  // 0x28(0xC)(None)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsY;                  // 0x34(0xC)(None)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsZ;                  // 0x40(0xC)(None)
	struct FPrimalCameraInterpParams             CameraPivotRotationInterpParams;                   // 0x4C(0xC)(None)
	float                                        CameraArmLength;                                   // 0x58(0x4)(None)
	struct FPrimalCameraInterpParams             CameraArmLengthInterpParams;                       // 0x5C(0xC)(None)
	TArray<struct FVector2D>                     RemoveOriginalPitchModifiersInPitchRange;          // 0x68(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0x78(0x10)(None)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraParams
struct FPrimalCameraParams
{
public:
	class FName                                  CameraPivotBoneName;                               // 0x0(0x8)(None)
	uint8                                        bUsePivotLocationOffset : 1;                       // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        bDinoUseOldSystemCameraLocation : 1;               // Mask: 0x2, PropSize: 0x10x8(0x1)(None)
	uint8                                        BitPad_419 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4903[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PivotLocationOffset;                               // 0x10(0x18)(None)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsX;                  // 0x28(0xC)(None)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsY;                  // 0x34(0xC)(None)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsZ;                  // 0x40(0xC)(None)
	uint8                                        Pad_4904[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsXModifiers;                            // 0x50(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsYModifiers;                            // 0x60(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsZModifiers;                            // 0x70(0x10)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        PositivePitchZDistOff;                             // 0x80(0x4)(None)
	struct FPrimalCameraInterpParams             CameraPivotRotationInterpParams;                   // 0x84(0xC)(None)
	uint8                                        bLerpRotationInterpParamsBasedOnRotationSpeed : 1; // Mask: 0x1, PropSize: 0x10x90(0x1)(None)
	uint8                                        BitPad_41A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4905[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             MaxCameraPivotRotationInterpParams;                // 0x94(0xC)(None)
	float                                        YawDeltaToStartLerping;                            // 0xA0(0x4)(None)
	float                                        YawDeltaToEndLerping;                              // 0xA4(0x4)(None)
	float                                        CameraArmLength;                                   // 0xA8(0x4)(None)
	struct FPrimalCameraInterpParams             CameraArmLengthInterpParams;                       // 0xAC(0xC)(None)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xB8(0x10)(None)
	struct FVector2D                             AnimAimOffsetPitchRange;                           // 0xC8(0x10)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettingsConditions
struct FPrimalCameraSettingsConditions
{
public:
	enum class ECameraSetting_BoolCondition      RequireMoving;                                     // 0x0(0x1)(None)
	enum class ECameraSetting_BoolCondition      RequireSprinting;                                  // 0x1(0x1)(None)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettings
struct FPrimalCameraSettings
{
public:
	class FName                                  Description;                                       // 0x0(0x8)(None)
	struct FPrimalCameraSettingsConditions       Conditions;                                        // 0x8(0x2)(None)
	uint8                                        Pad_4906[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraParams                   CameraParams;                                      // 0x10(0xD8)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettingsOverride
struct FPrimalCameraSettingsOverride
{
public:
	class FName                                  Description;                                       // 0x0(0x8)(None)
	struct FPrimalCameraSettingsConditions       Conditions;                                        // 0x8(0x2)(None)
	uint8                                        Pad_4907[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraParamsOverride           CameraParamsOverride;                              // 0x10(0x88)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettingsOverrideGroup
struct FPrimalCameraSettingsOverrideGroup
{
public:
	TArray<struct FPrimalCameraSettingsOverride> SettingsOverrides;                                 // 0x0(0x10)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraPivotZInterpOverrides
struct FPrimalCameraPivotZInterpOverrides
{
public:
	uint8                                        bOverridePivotZInterpForCrouching : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_41B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4908[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             CrouchPivotZInterpParams;                          // 0x4(0xC)(None)
	uint8                                        bOverridePivotZInterpForProne : 1;                 // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_41C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4909[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             PronePivotZInterpParams;                           // 0x14(0xC)(None)
	uint8                                        bOverridePivotZInterpForLongFalls : 1;             // Mask: 0x1, PropSize: 0x10x20(0x1)(None)
	uint8                                        BitPad_41D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_490A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             LongFallPivotZInterpParams;                        // 0x24(0xC)(None)
	float                                        InterpSpeedToReachLongFallZInterpParams;           // 0x30(0x4)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.CameraInterpMovementBasedMultipliers
struct FCameraInterpMovementBasedMultipliers
{
public:
	uint8                                        bUseSpringStiffnessSpeedMultipliers : 1;           // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bApplySpringStiffnessSpeedMultipliersToZ : 1;      // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bUseSpeedMultipliersForBackwardsMovement : 1;      // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_41E : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_490B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BackwardsMovementReferenceSpeedForSpringStiffnessMultiplier; // 0x4(0x4)(None)
	float                                        WalkingReferenceSpeedForSpringStiffnessMultiplier; // 0x8(0x4)(None)
	float                                        RunningReferenceSpeedForSpringStiffnessMultiplier; // 0xC(0x4)(None)
	float                                        BaseBackwardsMovementSpeedMultiplierExponent;      // 0x10(0x4)(None)
	float                                        BaseWalkingSpeedMultiplierExponent;                // 0x14(0x4)(None)
	float                                        BaseRunningSpeedMultiplierExponent;                // 0x18(0x4)(None)
	float                                        MinAllowedBaseBackwardsMovementSpeedMultiplier;    // 0x1C(0x4)(None)
	float                                        MinAllowedBaseWalkingSpeedMultiplier;              // 0x20(0x4)(None)
	float                                        MinAllowedBaseRunningSpeedMultiplier;              // 0x24(0x4)(None)
	float                                        MaxAllowedBaseBackwardsMovementSpeedMultiplier;    // 0x28(0x4)(None)
	float                                        MaxAllowedBaseWalkingSpeedMultiplier;              // 0x2C(0x4)(None)
	float                                        MaxAllowedBaseRunningSpeedMultiplier;              // 0x30(0x4)(None)
	uint8                                        Pad_490C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ExtraBackwardsMovementSpringStiffnessMultiplier;   // 0x38(0x18)(None)
	struct FVector                               ExtraWalkingSpringStiffnessMultiplier;             // 0x50(0x18)(None)
	struct FVector                               ExtraRunningSpringStiffnessMultiplier;             // 0x68(0x18)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraProfile
struct FPrimalCameraProfile
{
public:
	uint8                                        bUseCameraRotationToDetermineInterpAxes : 1;       // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_41F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_490D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapPivotToFinalLocationAfterDistance;             // 0x4(0x4)(None)
	float                                        FlyingSnapPivotToFinalLocationAfterDistance;       // 0x8(0x4)(None)
	uint8                                        Pad_490E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCameraInterpMovementBasedMultipliers CameraPivotInterpMultipliers;                      // 0x10(0x80)(None)
	struct FPrimalCameraSettings                 DefaultPrimalCameraSettings;                       // 0x90(0xE8)(AutoWeak, ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraSettings>         AdditionalPrimalCameraSettings;                    // 0x178(0x10)(None)
	struct FPrimalCameraPivotZInterpOverrides    CameraPivotZInterpOverrides;                       // 0x188(0x34)(None)
	uint8                                        Pad_490F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.HibernationEntity
struct FHibernationEntity
{
public:
	uint8                                        Pad_4910[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ShooterGame.StructureVariant
struct FStructureVariant
{
public:
	class FString                                VariantName;                                       // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance)
	class FName                                  VariantTag;                                        // 0x10(0x8)(None)
	bool                                         bUseBPAllowSwitchToVariant;                        // 0x18(0x1)(None)
	uint8                                        Pad_4911[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x20(0x30)(ZeroConstructor, Protected, TextExportTransient, PersistentInstance)
	bool                                         bUseMeshTransform;                                 // 0x50(0x1)(None)
	uint8                                        Pad_4912[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MeshTransform;                                     // 0x60(0x60)(None)
	TSoftObjectPtr<class UGeometryCollection>    DestroyedMeshOverride;                             // 0xC0(0x30)(ZeroConstructor, AutoWeak, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDestructionGeoCollectionInfo> DestroyedMeshesOverride;                           // 0xF0(0x10)(ZeroConstructor, AssetRegistrySearchable, Protected, TextExportTransient, PersistentInstance)
	TSoftObjectPtr<class UTexture2D>             VariantIcon;                                       // 0x100(0x30)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructureVariantAdditionEntry
struct FStructureVariantAdditionEntry
{
public:
	class FName                                  ForStructureTierTag;                               // 0x0(0x8)(None)
	TArray<struct FStructureVariant>             Variants;                                          // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructureVariantAddition
struct FStructureVariantAddition
{
public:
	class FName                                  ForStructureTag;                                   // 0x0(0x8)(None)
	TArray<struct FStructureVariantAdditionEntry> VariantEntries;                                    // 0x8(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.StructureToBuildAddition
struct FStructureToBuildAddition
{
public:
	TSoftClassPtr<class UPrimalItem>             ForStructureItem;                                  // 0x0(0x30)(ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class APrimalStructure>> AdditionalStructures;                              // 0x30(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CDOModification_SinglePropertyBase
struct FCDOModification_SinglePropertyBase
{
public:
	TSoftClassPtr<class UObject>                 TheClass;                                          // 0x0(0x30)(None)
	class FName                                  PropertyName;                                      // 0x30(0x8)(None)
	bool                                         bAlsoApplyToChildrenClasses;                       // 0x38(0x1)(None)
	bool                                         bDontApplyToChildClassIfVarIsEdited;               // 0x39(0x1)(None)
	uint8                                        Pad_4913[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.BoolPropertyPair
struct FBoolPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	bool                                         BoolPropertyValue;                                 // 0x40(0x1)(None)
	uint8                                        Pad_4914[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.FloatPropertyPair
struct FFloatPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	float                                        FloatPropertyValue;                                // 0x40(0x4)(None)
	uint8                                        Pad_4915[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.DoublePropertyPair
struct FDoublePropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	double                                       DoublePropertyValue;                               // 0x40(0x8)(None)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct ShooterGame.StringPropertyPair
struct FStringPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	class FString                                StringPropertyValue;                               // 0x40(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.IntPropertyPair
struct FIntPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	int32                                        IntPropertyValue;                                  // 0x40(0x4)(None)
	uint8                                        Pad_4916[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ShooterGame.VectorPropertyPair
struct FVectorPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	struct FVector                               VectorPropertyValue;                               // 0x40(0x18)(None)
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ShooterGame.RotatorPropertyPair
struct FRotatorPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	struct FRotator                              RotatorPropertyValue;                              // 0x40(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.CDOModification_ArrayBase
struct FCDOModification_ArrayBase
{
public:
	TSoftClassPtr<class UObject>                 TheClass;                                          // 0x0(0x30)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  PropertyName;                                      // 0x30(0x8)(None)
	bool                                         bAlsoApplyToChildrenClasses;                       // 0x38(0x1)(None)
	bool                                         bDontApplyToChildClassIfVarIsEdited;               // 0x39(0x1)(None)
	enum class ECDOArrayModificationType         ArrayOperation;                                    // 0x3A(0x1)(None)
	uint8                                        Pad_4917[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               IndexesToModify;                                   // 0x40(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint32>                               IndexesToRemove;                                   // 0x50(0x10)(None)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_BoolArray
struct FCDOModification_BoolArray : public FCDOModification_ArrayBase
{
public:
	TArray<bool>                                 Values;                                            // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_IntArray
struct FCDOModification_IntArray : public FCDOModification_ArrayBase
{
public:
	TArray<int32>                                Values;                                            // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_FloatArray
struct FCDOModification_FloatArray : public FCDOModification_ArrayBase
{
public:
	TArray<float>                                Values;                                            // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_DoubleArray
struct FCDOModification_DoubleArray : public FCDOModification_ArrayBase
{
public:
	TArray<double>                               Values;                                            // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_StringArray
struct FCDOModification_StringArray : public FCDOModification_ArrayBase
{
public:
	TArray<class FString>                        Values;                                            // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_VectorArray
struct FCDOModification_VectorArray : public FCDOModification_ArrayBase
{
public:
	TArray<struct FVector>                       Values;                                            // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.CDOClassDebug
struct FCDOClassDebug
{
public:
	class FName                                  Description;                                       // 0x0(0x8)(None)
	TSoftClassPtr<class UObject>                 TheClass;                                          // 0x8(0x30)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        bDontDebugShooterCharacters : 1;                   // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        BitPad_420 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4918[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PropertyNames;                                     // 0x40(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CDODebugData
struct FCDODebugData
{
public:
	float                                        RadiusToSearchForActors;                           // 0x0(0x4)(None)
	uint8                                        Pad_4919[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCDOClassDebug>                TheDebugData;                                      // 0x8(0x10)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ShooterGame.NetChangeDefaultPropertyValue
struct FNetChangeDefaultPropertyValue
{
public:
	TArray<struct FBoolPropertyPair>             BoolProperties;                                    // 0x0(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCDOModification_BoolArray>    BoolArrayProperties;                               // 0x10(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FIntPropertyPair>              IntProperties;                                     // 0x20(0x10)(ZeroConstructor, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCDOModification_IntArray>     IntArrayProperties;                                // 0x30(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFloatPropertyPair>            FloatProperties;                                   // 0x40(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCDOModification_FloatArray>   FloatArrayProperties;                              // 0x50(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDoublePropertyPair>           DoubleProperties;                                  // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCDOModification_DoubleArray>  DoubleArrayProperties;                             // 0x70(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FStringPropertyPair>           StringProperties;                                  // 0x80(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCDOModification_StringArray>  StringArrayProperties;                             // 0x90(0x10)(ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVectorPropertyPair>           VectorProperties;                                  // 0xA0(0x10)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCDOModification_VectorArray>  VectorArrayProperties;                             // 0xB0(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRotatorPropertyPair>          RotatorProperties;                                 // 0xC0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TrackedActorUpdatedArrayInfoStruct
struct FTrackedActorUpdatedArrayInfoStruct
{
public:
	int32                                        MapKey;                                            // 0x0(0x4)(None)
	bool                                         bIsPlayer;                                         // 0x4(0x1)(None)
	uint8                                        Pad_491A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.TrackedActorOverallContainer
struct FTrackedActorOverallContainer
{
public:
	TMap<int32, struct FTrackedActorPlusInfoStruct> TrackedActorEntriesAsPerCategory;                  // 0x0(0x50)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.NativeDinoHologramEntry
struct FNativeDinoHologramEntry
{
public:
	class USkeletalMesh*                         DinoMesh;                                          // 0x0(0x8)(ZeroConstructor)
	class UAnimSequence*                         Anims;                                             // 0x8(0x8)(None)
	float                                        Scales;                                            // 0x10(0x4)(None)
	float                                        ZOffset;                                           // 0x14(0x4)(None)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ShooterGame.WeaponData
struct FWeaponData
{
public:
	bool                                         bInfiniteAmmo;                                     // 0x0(0x1)(None)
	bool                                         bNeverReload;                                      // 0x1(0x1)(None)
	bool                                         bUsesAmmo;                                         // 0x2(0x1)(None)
	bool                                         bDontTakeAmmoOnReload;                             // 0x3(0x1)(None)
	bool                                         bFullReloadFromSingleItem;                         // 0x4(0x1)(None)
	bool                                         bShowAmmoInClipAsPercent;                          // 0x5(0x1)(None)
	bool                                         bDontReloadEmptyClipOnEquip;                       // 0x6(0x1)(None)
	uint8                                        Pad_491B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AmmoPerClip;                                       // 0x8(0x4)(None)
	int32                                        AmmoPerShot;                                       // 0xC(0x4)(None)
	bool                                         bSilentOverflowReload;                             // 0x10(0x1)(None)
	uint8                                        Pad_491C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenShots;                                  // 0x14(0x4)(None)
	float                                        NoAnimReloadDuration;                              // 0x18(0x4)(None)
	bool                                         bForceReloadDuration;                              // 0x1C(0x1)(None)
	bool                                         bLoopedReloadAnim;                                 // 0x1D(0x1)(None)
	uint8                                        Pad_491D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReloadDurationPerAmmoCount;                        // 0x20(0x4)(None)
	float                                        ItemDurabilityToConsumePerShot;                    // 0x24(0x4)(None)
	float                                        HarvestResourceMultiplier;                         // 0x28(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.InstantWeaponData
struct FInstantWeaponData
{
public:
	float                                        WeaponSpread;                                      // 0x0(0x4)(None)
	float                                        TargetingSpreadMod;                                // 0x4(0x4)(None)
	float                                        FinalWeaponSpreadMultiplier;                       // 0x8(0x4)(None)
	float                                        FiringSpreadIncrement;                             // 0xC(0x4)(None)
	float                                        FiringSpreadMax;                                   // 0x10(0x4)(None)
	float                                        WeaponRange;                                       // 0x14(0x4)(None)
	int32                                        HitDamage;                                         // 0x18(0x4)(None)
	float                                        DamageImpulse;                                     // 0x1C(0x4)(None)
	class UClass*                                DamageType;                                        // 0x20(0x8)(None)
	float                                        ClientSideHitLeeway;                               // 0x28(0x4)(None)
	float                                        AllowedViewDotHitDir;                              // 0x2C(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.WeaponAnim
struct FWeaponAnim
{
public:
	class UAnimMontage*                          Pawn1P;                                            // 0x0(0x8)(ZeroConstructor)
	class UAnimMontage*                          Pawn3P;                                            // 0x8(0x8)(None)
};

// 0x400 (0x400 - 0x0)
// ScriptStruct ShooterGame.ClimbingAnims
struct FClimbingAnims
{
public:
	struct FWeaponAnim                           LeftHandAnchored[0x20];                            // 0x0(0x200)(ZeroConstructor)
	struct FWeaponAnim                           RightHandAnchored[0x20];                           // 0x200(0x200)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.SkyBoxLoadedStatus
struct FSkyBoxLoadedStatus
{
public:
	uint8                                        Pad_491E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            LoadedTextureResources[0x3];                       // 0x8(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.SOTFNotificationInfo
struct FSOTFNotificationInfo
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(None)
	uint8                                        Pad_491F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PlayerNames;                                       // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
	class FString                                PlayerDeathReason;                                 // 0x18(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
	class FString                                TribeName;                                         // 0x28(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
	int32                                        TeamID;                                            // 0x38(0x4)(None)
	uint8                                        Pad_4920[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomDrawString;                                  // 0x40(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       StartDisplayTime;                                  // 0x50(0x8)(None)
	float                                        DisplayInterval;                                   // 0x58(0x4)(None)
	uint8                                        Pad_4921[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                       // 0x60(0x10)(None)
	bool                                         bLastPlayer;                                       // 0x70(0x1)(None)
	enum class ESTOFNotificationType             Type;                                              // 0x71(0x1)(None)
	uint8                                        Pad_4922[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.BannerTextInfo
struct FBannerTextInfo
{
public:
	class UTextRenderComponent*                  TextComponent;                                     // 0x0(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  BackgroundComponent;                               // 0x8(0x8)(None)
	bool                                         bActive;                                           // 0x10(0x1)(None)
	uint8                                        Pad_4923[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ScrollingTextInfo
struct FScrollingTextInfo
{
public:
	class UTextRenderComponent*                  TextComponent;                                     // 0x0(0x8)(None)
	float                                        Time;                                              // 0x8(0x4)(None)
	bool                                         bActive;                                           // 0xC(0x1)(None)
	uint8                                        Pad_4924[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerPreviewImage
struct FPlayerPreviewImage
{
public:
	uint8                                        Pad_4925[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  PreviewMesh;                                       // 0x18(0x8)(ZeroConstructor)
	class UTextRenderComponent*                  PlayerNameText;                                    // 0x20(0x8)(ZeroConstructor)
	class UTextRenderComponent*                  TribeComponent;                                    // 0x28(0x8)(ZeroConstructor)
	class UTextRenderComponent*                  DeathInfo;                                         // 0x30(0x8)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ShooterGame.VehicleEngineDatum
struct FVehicleEngineDatum
{
public:
	float                                        FadeInRPMStart;                                    // 0x0(0x4)(None)
	float                                        FadeInRPMEnd;                                      // 0x4(0x4)(None)
	float                                        FadeOutRPMStart;                                   // 0x8(0x4)(None)
	float                                        FadeOutRPMEnd;                                     // 0xC(0x4)(None)
	float                                        MaxPitchMultiplier;                                // 0x10(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateSpawnEntry
struct FSupplyCrateSpawnEntry
{
public:
	float                                        EntryWeight;                                       // 0x0(0x4)(None)
	uint8                                        Pad_4926[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APrimalStructureItemContainer_SupplyCrate> CrateTemplate;                                     // 0x8(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UNPCSpawnEntriesContainer> CrateEnemySpawnEntries;                            // 0x38(0x30)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateSpawnPointEntry
struct FSupplyCrateSpawnPointEntry
{
public:
	class AActor*                                LinkedSpawnPoint;                                  // 0x0(0x8)(ZeroConstructor)
	class ANPCZoneManager*                       LinkedEnemySpawnZoneManager;                       // 0x8(0x8)(ZeroConstructor)
	class FName                                  LinkedEnemySpawnZoneManagerTag;                    // 0x10(0x8)(None)
	uint8                                        bTraceGroundPoint : 1;                             // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_421 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4927[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TraceGroundPointDownOffset;                        // 0x20(0x18)(None)
	struct FVector                               TraceGroundPointUpOffset;                          // 0x38(0x18)(None)
	float                                        SpawnPointWeight;                                  // 0x50(0x4)(None)
	uint8                                        Pad_4928[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSupplyCrateSpawnEntry>        OverrideSupplyCrateEntries;                        // 0x58(0x10)(None)
	uint8                                        Pad_4929[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.TrackItemInfo
struct FTrackItemInfo
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(ZeroConstructor)
	TArray<uint16>                               CraftingRequirements;                              // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCraftingResourceRequirement>  BaseCraftingRequirement;                           // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                ItemName;                                          // 0x28(0x10)(None)
	struct FLinearColor                          ItemColor;                                         // 0x38(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.TriggerEffectLibraryEntry
struct FTriggerEffectLibraryEntry
{
public:
	TSoftClassPtr<class AShooterWeapon>          WeaponClass;                                       // 0x0(0x30)(None)
	struct FPrimalTriggerEffect                  HasAmmoEffect;                                     // 0x30(0x18)(None)
	struct FPrimalTriggerEffect                  EmptyEffect;                                       // 0x48(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ActorWidgetPair
struct FActorWidgetPair
{
public:
	int32                                        Key;                                               // 0x0(0x4)(None)
	uint8                                        Pad_492A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTrackedDinoListEntryWidget*           Widget;                                            // 0x8(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CheatMenuCheatItem
struct FCheatMenuCheatItem
{
public:
	TSoftClassPtr<class UPrimalItem>             Item;                                              // 0x0(0x30)(None)
	int32                                        Quantity;                                          // 0x30(0x4)(None)
	int32                                        Quality;                                           // 0x34(0x4)(None)
	bool                                         Blueprint;                                         // 0x38(0x1)(None)
	uint8                                        Pad_492B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CheatMenuCharacterPresetItems
struct FCheatMenuCharacterPresetItems
{
public:
	TArray<struct FCheatMenuCheatItem>           CharacterItems;                                    // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ModPreviewData
struct FModPreviewData
{
public:
	class UTexture2DDynamic*                     PreviewImage;                                      // 0x0(0x8)(None)
	class FString                                PreviewDescription;                                // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MapDescription
struct FMapDescription
{
public:
	class UTexture2D*                            MapImage;                                          // 0x0(0x8)(None)
	class FString                                MapDescription;                                    // 0x8(0x10)(None)
	int32                                        MinAscensionLevelRequired;                         // 0x18(0x4)(None)
	uint8                                        Pad_492C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DifficultyValues
struct FDifficultyValues
{
public:
	class FName                                  DataListValueName;                                 // 0x0(0x8)(None)
	TArray<class FName>                          ValuesPerDifficulty;                               // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.UI_MainMenuLink
struct FUI_MainMenuLink
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(None)
	class UClass*                                Class;                                             // 0x10(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.CarouselEntryData
struct FCarouselEntryData
{
public:
	class FString                                ImagePath;                                         // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                EntryWidgetTemplate;                               // 0x10(0x10)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                PipWidgetTemplate;                                 // 0x20(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                EntryData;                                         // 0x30(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                PipData;                                           // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                OnClickedAction;                                   // 0x50(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                OnFocusAction;                                     // 0x60(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.NewOptionsItem
struct FNewOptionsItem
{
public:
	class FString                                DisplayString;                                     // 0x0(0x10)(None)
	uint32                                       LocKey;                                            // 0x10(0x4)(None)
	class FName                                  SettingName;                                       // 0x14(0x8)(None)
	class FName                                  buttonFunction;                                    // 0x1C(0x8)(None)
	bool                                         Negate;                                            // 0x24(0x1)(None)
	bool                                         DisabledForNow;                                    // 0x25(0x1)(None)
	uint8                                        Pad_492D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.OptionsSet
struct FOptionsSet
{
public:
	class FString                                TabName;                                           // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint32                                       TabLocKey;                                         // 0x10(0x4)(None)
	bool                                         MPOnly;                                            // 0x14(0x1)(None)
	uint8                                        Pad_492E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNewOptionsItem>               OptionsItems;                                      // 0x18(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.NamePair
struct FNamePair
{
public:
	class FName                                  FNameA;                                            // 0x0(0x8)(None)
	class FName                                  FNameB;                                            // 0x8(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CameraLocationSetting
struct FCameraLocationSetting
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(None)
	struct FVector                               LocationOffset;                                    // 0x8(0x18)(None)
	float                                        Zoom;                                              // 0x20(0x4)(None)
	uint8                                        Pad_492F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation;                                          // 0x28(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.BoneModifierSlider
struct FBoneModifierSlider
{
public:
	class FName                                  SliderWidgetName;                                  // 0x0(0x8)(None)
	TArray<struct FBoneModifierRange>            BoneModifierRanges;                                // 0x8(0x10)(None)
	enum class EBoneModifierType                 BoneModifierType;                                  // 0x18(0x1)(None)
	uint8                                        Pad_4930[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultValueMale;                                  // 0x1C(0x4)(None)
	float                                        DefaultValueFemale;                                // 0x20(0x4)(None)
	uint8                                        Pad_4931[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA68 (0xA68 - 0x0)
// ScriptStruct ShooterGame.CustomPreviewMeshInfo
struct FCustomPreviewMeshInfo
{
public:
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bIsMaleMesh : 1;                                   // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bIsFemaleMesh : 1;                                 // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_422 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4932[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          OverwrittenMesh;                                   // 0x8(0x30)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UAnimInstance>           OverwrittenAnimbp;                                 // 0x38(0x30)(ZeroConstructor, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRotator                              OverwrittenMeshRotation;                           // 0x68(0x18)(None)
	TArray<struct FBoneModifierSlider>           OverwrittenBoneModifiersSliders;                   // 0x80(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
	struct FBoneModifierRangeArray               OverwrittenCharacterBoneModifierRanges[0x1A];      // 0x90(0x4E0)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance)
	struct FBoneModifierRangeArray               OverwrittenExtraCharacterBoneModifierMax[0x1A];    // 0x570(0x4E0)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FNamePair>                     OverwrittenReplacedDynamicMaterialNames;           // 0xA50(0x10)(None)
	class USkeletalMeshComponent*                MeshCompRef;                                       // 0xA60(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DynamicMaterialSlider
struct FDynamicMaterialSlider
{
public:
	class FName                                  SliderWidgetName;                                  // 0x0(0x8)(None)
	enum class EPlayerDynamicMaterialType        PlayerDynamicMaterialSliderType;                   // 0x8(0x1)(None)
	uint8                                        Pad_4934[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.SavedVoiceCollectionActualIndex
struct FSavedVoiceCollectionActualIndex
{
public:
	struct FPlayerConfigVoiceCollectionInfo      GameDataStruct;                                    // 0x0(0x20)(None)
	int32                                        ActualArrayIndex;                                  // 0x20(0x4)(None)
	uint8                                        bIsCustom : 1;                                     // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        Pad_4935[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ShooterGame.CharacterPreset
struct FCharacterPreset
{
public:
	struct FVector2D                             BodyColorSliderValue;                              // 0x0(0x10)(None)
	struct FVector2D                             HairColorSliderValue;                              // 0x10(0x10)(None)
	struct FVector2D                             HairTipColorSliderValue;                           // 0x20(0x10)(None)
	struct FVector2D                             BeardTipColorSliderValue;                          // 0x30(0x10)(None)
	struct FVector2D                             BeardColorSliderValue;                             // 0x40(0x10)(None)
	struct FVector2D                             EyeColorSliderValue;                               // 0x50(0x10)(None)
	struct FVector2D                             EyeIrisColorSliderValue;                           // 0x60(0x10)(None)
	float                                        HairStyleSliderValue;                              // 0x70(0x4)(None)
	float                                        HairLengthSliderValue;                             // 0x74(0x4)(None)
	float                                        BeardLengthSliderValue;                            // 0x78(0x4)(None)
	float                                        BeardStyleSliderValue;                             // 0x7C(0x4)(None)
	float                                        EyebrowStyleSliderValue;                           // 0x80(0x4)(None)
	uint8                                        Pad_4936[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                BoneModifierSliderValues;                          // 0x88(0x10)(AutoWeak, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        PlayerVoiceCollectionIndex;                        // 0x98(0x4)(None)
	int32                                        bIsPlayerVoiceCollectionCustom;                    // 0x9C(0x4)(None)
	struct FLinearColor                          SkinBodyColor;                                     // 0xA0(0x10)(None)
	TArray<float>                                DynamicMaterialFloats;                             // 0xB0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     DynamicMaterialColorPicker;                        // 0xC0(0x10)(None)
	bool                                         bIsLastCharacterMade;                              // 0xD0(0x1)(None)
	bool                                         bOverridesGender;                                  // 0xD1(0x1)(None)
	bool                                         bIsFemale;                                         // 0xD2(0x1)(None)
	bool                                         bIsDefaultPreset;                                  // 0xD3(0x1)(None)
	uint8                                        Pad_4938[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.JoyAnim
struct FJoyAnim
{
public:
	class UAnimMontage*                          Anim;                                              // 0x0(0x8)(None)
	float                                        Chance;                                            // 0x8(0x4)(None)
	uint8                                        Pad_4939[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct ShooterGame.PenetrationTraceHit
struct FPenetrationTraceHit
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xF0)(None)
	float                                        DistanceFromLastHit;                               // 0xF0(0x4)(None)
	float                                        TotalDistance;                                     // 0xF4(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.OverlappedFoliageElement
struct FOverlappedFoliageElement
{
public:
	class AActor*                                HarvestActor;                                      // 0x0(0x8)(ZeroConstructor)
	class UInstancedStaticMeshComponent*         InstancedStaticMeshComponent;                      // 0x8(0x8)(ZeroConstructor)
	class UPrimalHarvestingComponent*            HarvestingComponent;                               // 0x10(0x8)(None)
	struct FVector                               HarvestLocation;                                   // 0x18(0x18)(None)
	int32                                        HitBodyIndex;                                      // 0x30(0x4)(None)
	float                                        MaxHarvestHealth;                                  // 0x34(0x4)(None)
	float                                        CurrentHarvestHealth;                              // 0x38(0x4)(None)
	uint8                                        bIsUnharvestable : 1;                              // Mask: 0x1, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bIsVisibleAndActive : 1;                           // Mask: 0x2, PropSize: 0x10x3C(0x1)(None)
	uint8                                        Pad_493A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.ProjectileArc
struct FProjectileArc
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(None)
	struct FVector                               StartDirection;                                    // 0x18(0x18)(None)
	float                                        LaunchSpeed;                                       // 0x30(0x4)(None)
	uint8                                        Pad_493B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              WorldRotation;                                     // 0x38(0x18)(None)
	bool                                         bApplyRotationToGravityDirection;                  // 0x50(0x1)(None)
	uint8                                        Pad_493C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideGravityZ;                                  // 0x54(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.VolumetricDispatchDetailLevel
struct FVolumetricDispatchDetailLevel
{
public:
	int32                                        ListUpdateFrequency;                               // 0x0(0x4)(None)
	int32                                        MaxFoliageDispatches;                              // 0x4(0x4)(None)
	int32                                        MaxFluidDispatches;                                // 0x8(0x4)(None)
	int32                                        MaxFoliageCharacterInteractions;                   // 0xC(0x4)(None)
	int32                                        MaxFluidCharacterInteractions;                     // 0x10(0x4)(None)
	int32                                        MaxNonVolumetricInteractions;                      // 0x14(0x4)(None)
	float                                        MaxNonVolumetricInteractionDistance;               // 0x18(0x4)(None)
	int32                                        Pawn_WaterMaxDistance;                             // 0x1C(0x4)(None)
	float                                        Pawn_WaterMinComplexScreenSize;                    // 0x20(0x4)(None)
	int32                                        Pawn_FoliageMaxDistance;                           // 0x24(0x4)(None)
	float                                        Pawn_FoliageMinComplexScreenSize;                  // 0x28(0x4)(None)
	int32                                        Effects_MaxDistance;                               // 0x2C(0x4)(None)
	float                                        OffscreenMultiplier;                               // 0x30(0x4)(None)
	int32                                        IncludePriorityGreaterThan;                        // 0x34(0x4)(None)
	bool                                         bTriggerFluidEvents;                               // 0x38(0x1)(None)
	uint8                                        Pad_493D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Bubbles_MaxDistance;                               // 0x3C(0x4)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.VolumetricDispatch
struct FVolumetricDispatch
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(None)
	struct FVector                               Location;                                          // 0x18(0x18)(None)
	struct FVector                               ExtraCapsuleLocation;                              // 0x30(0x18)(None)
	struct FVector                               Scale;                                             // 0x48(0x18)(None)
	float                                        Plasticity;                                        // 0x60(0x4)(None)
	float                                        WaterBend;                                         // 0x64(0x4)(None)
	float                                        InteractionStrength;                               // 0x68(0x4)(None)
	int32                                        NumEvaluatedBySolver;                              // 0x6C(0x4)(None)
	int32                                        MaxAllowedFrameDelayBuffer;                        // 0x70(0x4)(None)
	int32                                        FramesDelayed;                                     // 0x74(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.ComponentVolumetricDispatch
struct FComponentVolumetricDispatch
{
public:
	TWeakObjectPtr<class UPrimalWindSourceComponent> InteractionComponent;                              // 0x0(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.VRBattleWaveUnit
struct FVRBattleWaveUnit
{
public:
	TSoftClassPtr<class APrimalDinoCharacter>    DinoType;                                          // 0x0(0x30)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                DinoBlueprintPath;                                 // 0x30(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        DinoLevel;                                         // 0x40(0x4)(None)
	uint8                                        Pad_493E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnOffset;                                       // 0x48(0x18)(None)
	TArray<enum class EPrimalCharacterStatusValue> PrioritizeStats;                                   // 0x60(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.GridIndex
struct FGridIndex
{
public:
	int32                                        X;                                                 // 0x0(0x4)(None)
	int32                                        Y;                                                 // 0x4(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalWorldModifierList
struct FPrimalWorldModifierList
{
public:
	bool                                         bUseActiveEvent;                                   // 0x0(0x1)(None)
	uint8                                        Pad_4947[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ActiveEventNames;                                  // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bUseINIStringOptionValue;                          // 0x18(0x1)(None)
	uint8                                        Pad_4948[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        INIStringOptionValues;                             // 0x20(0x10)(None)
	bool                                         bHasOverridePriority;                              // 0x30(0x1)(None)
	uint8                                        Pad_4949[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                WorldModifierClass;                                // 0x38(0x8)(None)
};

}


