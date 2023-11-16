#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class EWidgetClipping : uint8
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	ClipNever                      = 5,
	EWidgetClipping_MAX            = 6,
};

enum class ESlateBrushRoundingType : uint8
{
	FixedRadius                    = 0,
	HalfHeightRadius               = 1,
	ESlateBrushRoundingType_MAX    = 2,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_ColorTable            = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_UseStyle              = 4,
	UseColor_MAX                   = 5,
};

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	Vector                         = 3,
	ESlateBrushImageType_MAX       = 4,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	RoundedBox                     = 4,
	ESlateBrushDrawType_MAX        = 5,
};

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EFlowDirectionPreference : uint8
{
	Inherit                        = 0,
	Culture                        = 1,
	LeftToRight                    = 2,
	RightToLeft                    = 3,
	EFlowDirectionPreference_MAX   = 4,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class ETextOverflowPolicy : uint8
{
	Clip                           = 0,
	Ellipsis                       = 1,
	ETextOverflowPolicy_MAX        = 2,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class ETextTransformPolicy : uint8
{
	None                           = 0,
	ToLower                        = 1,
	ToUpper                        = 2,
	ETextTransformPolicy_MAX       = 3,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,
};

enum class EColorVisionDeficiency : uint8
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	Down                           = 1,
	PreciseTap                     = 2,
	EButtonTouchMethod_MAX         = 3,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EUINavigationAction : uint8
{
	Accept                         = 0,
	Back                           = 1,
	Num                            = 2,
	Invalid                        = 3,
	EUINavigationAction_MAX        = 4,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class ESlateDebuggingInputEvent : uint8
{
	MouseMove                      = 0,
	MouseEnter                     = 1,
	MouseLeave                     = 2,
	PreviewMouseButtonDown         = 3,
	MouseButtonDown                = 4,
	MouseButtonUp                  = 5,
	MouseButtonDoubleClick         = 6,
	MouseWheel                     = 7,
	TouchStart                     = 8,
	TouchEnd                       = 9,
	TouchForceChanged              = 10,
	TouchFirstMove                 = 11,
	TouchMoved                     = 12,
	DragDetected                   = 13,
	DragEnter                      = 14,
	DragLeave                      = 15,
	DragOver                       = 16,
	DragDrop                       = 17,
	DropMessage                    = 18,
	PreviewKeyDown                 = 19,
	KeyDown                        = 20,
	KeyUp                          = 21,
	KeyChar                        = 22,
	AnalogInput                    = 23,
	TouchGesture                   = 24,
	MotionDetected                 = 25,
	MAX                            = 26,
};

enum class ESlateDebuggingStateChangeEvent : uint8
{
	MouseCaptureGained             = 0,
	MouseCaptureLost               = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class ESlateDebuggingNavigationMethod : uint8
{
	Unknown                        = 0,
	Explicit                       = 1,
	CustomDelegateBound            = 2,
	CustomDelegateUnbound          = 3,
	NextOrPrevious                 = 4,
	HitTestGrid                    = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
};

enum class ESlateDebuggingFocusEvent : uint8
{
	FocusChanging                  = 0,
	FocusLost                      = 1,
	FocusReceived                  = 2,
	MAX                            = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};

enum class ESlateParentWindowSearchMethod : uint8
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class EStyleColor : uint8
{
	Black                          = 0,
	Background                     = 1,
	Title                          = 2,
	WindowBorder                   = 3,
	Foldout                        = 4,
	Input                          = 5,
	InputOutline                   = 6,
	Recessed                       = 7,
	Panel                          = 8,
	Header                         = 9,
	Dropdown                       = 10,
	DropdownOutline                = 11,
	Hover                          = 12,
	Hover2                         = 13,
	White                          = 14,
	White25                        = 15,
	Highlight                      = 16,
	Primary                        = 17,
	PrimaryHover                   = 18,
	PrimaryPress                   = 19,
	Secondary                      = 20,
	Foreground                     = 21,
	ForegroundHover                = 22,
	ForegroundInverted             = 23,
	ForegroundHeader               = 24,
	Select                         = 25,
	SelectInactive                 = 26,
	SelectParent                   = 27,
	SelectHover                    = 28,
	Notifications                  = 29,
	AccentBlue                     = 30,
	AccentPurple                   = 31,
	AccentPink                     = 32,
	AccentRed                      = 33,
	AccentOrange                   = 34,
	AccentYellow                   = 35,
	AccentGreen                    = 36,
	AccentBrown                    = 37,
	AccentBlack                    = 38,
	AccentGray                     = 39,
	AccentWhite                    = 40,
	AccentFolder                   = 41,
	Warning                        = 42,
	Error                          = 43,
	Success                        = 44,
	User1                          = 45,
	User2                          = 46,
	User3                          = 47,
	User4                          = 48,
	User5                          = 49,
	User6                          = 50,
	User7                          = 51,
	User8                          = 52,
	User9                          = 53,
	User10                         = 54,
	User11                         = 55,
	User12                         = 56,
	User13                         = 57,
	User14                         = 58,
	User15                         = 59,
	User16                         = 60,
	MAX                            = 61,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.Geometry
struct FGeometry
{
public:
	uint8                                        Pad_27AC[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
public:
	struct FLinearColor                          SpecifiedColor;                                    // 0x0(0x10)(None)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(None)
	uint8                                        Pad_27AD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SlateCore.SlateBrushOutlineSettings
struct FSlateBrushOutlineSettings
{
public:
	struct FVector4                              CornerRadii;                                       // 0x0(0x20)(None)
	struct FSlateColor                           Color;                                             // 0x20(0x14)(None)
	float                                        Width;                                             // 0x34(0x4)(None)
	enum class ESlateBrushRoundingType           RoundingType;                                      // 0x38(0x1)(None)
	bool                                         bUseBrushTransparency;                             // 0x39(0x1)(None)
	uint8                                        Pad_27AE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct SlateCore.DeprecateSlateVector2D
struct FDeprecateSlateVector2D : public FVector2f
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct FMargin
{
public:
	float                                        Left;                                              // 0x0(0x4)(None)
	float                                        Top;                                               // 0x4(0x4)(None)
	float                                        Right;                                             // 0x8(0x4)(None)
	float                                        Bottom;                                            // 0xC(0x4)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
public:
	uint8                                        Pad_27B2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsDynamicallyLoaded : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        bHasUObject : 1;                                   // Mask: 0x2, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_1E7 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x11(0x1)(None)
	enum class ESlateBrushTileType               Tiling;                                            // 0x12(0x1)(None)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x13(0x1)(None)
	enum class ESlateBrushImageType              ImageType;                                         // 0x14(0x1)(None)
	uint8                                        Pad_27B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeprecateSlateVector2D               ImageSize;                                         // 0x18(0x8)(None)
	struct FMargin                               Margin;                                            // 0x20(0x10)(None)
	struct FSlateColor                           TintColor;                                         // 0x30(0x14)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	uint8                                        Pad_27B4[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrushOutlineSettings            OutlineSettings;                                   // 0x50(0x40)(None)
	class UObject*                               ResourceObject;                                    // 0x90(0x8)(None)
	class FName                                  ResourceName;                                      // 0x98(0x8)(None)
	struct FBox2f                                UVRegion;                                          // 0xA0(0x14)(None)
	uint8                                        Pad_27B5[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
public:
	uint8                                        Pad_27BA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x78 - 0x20)
// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : public FInputEvent
{
public:
	uint8                                        Pad_27BF[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
public:
	uint8                                        Pad_27C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x768 (0x770 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HorizontalBackgroundImage;                         // 0x10(0xD0)(ZeroConstructor, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           VerticalBackgroundImage;                           // 0xE0(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           VerticalTopSlotImage;                              // 0x1B0(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HorizontalTopSlotImage;                            // 0x280(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           VerticalBottomSlotImage;                           // 0x350(0xD0)(ZeroConstructor, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HorizontalBottomSlotImage;                         // 0x420(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x4F0(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x5C0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DraggedThumbImage;                                 // 0x690(0xD0)(None)
	float                                        Thickness;                                         // 0x760(0x4)(None)
	uint8                                        Pad_27C6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD48 (0xD50 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SelectorFocusedBrush;                              // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ActiveHoveredBrush;                                // 0xE0(0xD0)(ZeroConstructor, AssetRegistrySearchable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ActiveBrush;                                       // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           InactiveHoveredBrush;                              // 0x280(0xD0)(ZeroConstructor, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           InactiveBrush;                                     // 0x350(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bUseParentRowBrush;                                // 0x420(0x1)(None)
	uint8                                        Pad_27C9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ParentRowBackgroundBrush;                          // 0x430(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ParentRowBackgroundHoveredBrush;                   // 0x500(0xD0)(ZeroConstructor, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           EvenRowBackgroundHoveredBrush;                     // 0x5D0(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           EvenRowBackgroundBrush;                            // 0x6A0(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           OddRowBackgroundHoveredBrush;                      // 0x770(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           OddRowBackgroundBrush;                             // 0x840(0xD0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           TextColor;                                         // 0x910(0x14)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           SelectedTextColor;                                 // 0x924(0x14)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           DropIndicator_Above;                               // 0x940(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DropIndicator_Onto;                                // 0xA10(0xD0)(ZeroConstructor, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DropIndicator_Below;                               // 0xAE0(0xD0)(ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ActiveHighlightedBrush;                            // 0xBB0(0xD0)(ZeroConstructor, AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           InactiveHighlightedBrush;                          // 0xC80(0xD0)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(None)
	uint8                                        Pad_27CC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3E8 (0x3F0 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Normal;                                            // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           Hovered;                                           // 0xE0(0xD0)(ZeroConstructor, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           Pressed;                                           // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           Disabled;                                          // 0x280(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           NormalForeground;                                  // 0x350(0x14)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           HoveredForeground;                                 // 0x364(0x14)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           PressedForeground;                                 // 0x378(0x14)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           DisabledForeground;                                // 0x38C(0x14)(None)
	struct FMargin                               NormalPadding;                                     // 0x3A0(0x10)(None)
	struct FMargin                               PressedPadding;                                    // 0x3B0(0x10)(None)
	struct FSlateSound                           PressedSlateSound;                                 // 0x3C0(0x18)(ZeroConstructor)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x3D8(0x18)(None)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          ButtonStyle;                                       // 0x10(0x3F0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DownArrowImage;                                    // 0x400(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FDeprecateSlateVector2D               ShadowOffset;                                      // 0x4D0(0x8)(None)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x4D8(0x10)(None)
	uint8                                        Pad_27D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           MenuBorderBrush;                                   // 0x4F0(0xD0)(None)
	struct FMargin                               MenuBorderPadding;                                 // 0x5C0(0x10)(None)
	struct FMargin                               ContentPadding;                                    // 0x5D0(0x10)(None)
	struct FMargin                               DownArrowPadding;                                  // 0x5E0(0x10)(None)
	enum class EVerticalAlignment                DownArrowAlign;                                    // 0x5F0(0x1)(None)
	uint8                                        Pad_27D3[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x658 (0x660 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x10(0x600)(ZeroConstructor)
	struct FSlateSound                           PressedSlateSound;                                 // 0x610(0x18)(ZeroConstructor)
	struct FSlateSound                           SelectionChangeSlateSound;                         // 0x628(0x18)(None)
	struct FMargin                               ContentPadding;                                    // 0x640(0x10)(None)
	struct FMargin                               MenuRowPadding;                                    // 0x650(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(None)
	bool                                         bSeparateFillAlpha;                                // 0x4(0x1)(None)
	bool                                         bApplyOutlineToDropShadows;                        // 0x5(0x1)(None)
	uint8                                        Pad_27D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(None)
	struct FLinearColor                          OutlineColor;                                      // 0x10(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(ZeroConstructor)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(ZeroConstructor)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x10(0x20)(None)
	uint8                                        Pad_27D6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TypefaceFontName;                                  // 0x40(0x8)(None)
	int32                                        Size;                                              // 0x48(0x4)(None)
	int32                                        LetterSpacing;                                     // 0x4C(0x4)(None)
	float                                        SkewAmount;                                        // 0x50(0x4)(None)
	uint8                                        Pad_27D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2E8 (0x2F0 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x14)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27DA[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImageSelected;                           // 0x80(0xD0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BackgroundImageComposing;                          // 0x150(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           CaretImage;                                        // 0x220(0xD0)(None)
};

// 0x338 (0x340 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x14)(Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FDeprecateSlateVector2D               ShadowOffset;                                      // 0x74(0x8)(None)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x7C(0x10)(None)
	struct FSlateColor                           SelectedBackgroundColor;                           // 0x8C(0x14)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           HighlightColor;                                    // 0xA0(0x14)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27DD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HighlightShape;                                    // 0xC0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           StrikeBrush;                                       // 0x190(0xD0)(ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           UnderlineBrush;                                    // 0x260(0xD0)(None)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x330(0x1)(None)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x331(0x1)(None)
	uint8                                        Pad_27DE[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE78 (0xE80 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImageNormal;                             // 0x10(0xD0)(ZeroConstructor, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BackgroundImageHovered;                            // 0xE0(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BackgroundImageFocused;                            // 0x1B0(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BackgroundImageReadOnly;                           // 0x280(0xD0)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FMargin                               Padding;                                           // 0x350(0x10)(None)
	struct FTextBlockStyle                       TextStyle;                                         // 0x360(0x340)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           ForegroundColor;                                   // 0x6A0(0x14)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           BackgroundColor;                                   // 0x6B4(0x14)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           ReadOnlyForegroundColor;                           // 0x6C8(0x14)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           FocusedForegroundColor;                            // 0x6DC(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FMargin                               HScrollBarPadding;                                 // 0x6F0(0x10)(None)
	struct FMargin                               VScrollBarPadding;                                 // 0x700(0x10)(None)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x710(0x770)(None)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xD0)(ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ActiveBackgroundBrush;                             // 0xE0(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredBackgroundBrush;                            // 0x1B0(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ActiveFillBrush;                                   // 0x280(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredFillBrush;                                  // 0x350(0xD0)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           InactiveFillBrush;                                 // 0x420(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           ArrowsImage;                                       // 0x4F0(0xD0)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateColor                           ForegroundColor;                                   // 0x5C0(0x14)(None)
	struct FMargin                               TextPadding;                                       // 0x5D4(0x10)(None)
	struct FMargin                               InsetPadding;                                      // 0x5E4(0x10)(None)
	uint8                                        Pad_27E6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : public FInputEvent
{
public:
	uint8                                        Pad_27E7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : public FInputEvent
{
public:
	uint8                                        Pad_27E8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : public FInputEvent
{
public:
	uint8                                        Pad_27E9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : public FKeyEvent
{
public:
	uint8                                        Pad_27EA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
public:
	uint8                                        Pad_27EB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x80 - 0x20)
// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : public FInputEvent
{
public:
	uint8                                        Pad_27EC[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4F8 (0x500 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           NormalBarImage;                                    // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredBarImage;                                   // 0xE0(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x280(0xD0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x350(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x420(0xD0)(None)
	float                                        BarThickness;                                      // 0x4F0(0x4)(None)
	uint8                                        Pad_27F1[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_27F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x10(0xD0)(None)
	int16                                        Baseline;                                          // 0xE0(0x2)(None)
	uint8                                        Pad_27F3[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.FontData
struct FFontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(None)
	uint8                                        Pad_27F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFontHinting                      Hinting;                                           // 0x14(0x1)(None)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x15(0x1)(None)
	uint8                                        Pad_27F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubFaceIndex;                                      // 0x18(0x4)(None)
	uint8                                        Pad_27F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               FontFaceAsset;                                     // 0x20(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	struct FFontData                             Font;                                              // 0x8(0x28)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct FTypeface
{
public:
	TArray<struct FTypefaceEntry>                Fonts;                                             // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont
{
public:
	struct FTypeface                             Typeface;                                          // 0x0(0x10)(None)
	float                                        ScalingFactor;                                     // 0x10(0x4)(None)
	uint8                                        Pad_27F7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : public FCompositeFallbackFont
{
public:
	TArray<struct FInt32Range>                   CharacterRanges;                                   // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                Cultures;                                          // 0x28(0x10)(BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
public:
	struct FTypeface                             DefaultTypeface;                                   // 0x0(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FCompositeFallbackFont                FallbackTypeface;                                  // 0x10(0x18)(ZeroConstructor, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCompositeSubFont>             SubTypefaces;                                      // 0x28(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.CaptureLostEvent
struct FCaptureLostEvent
{
public:
	uint8                                        Pad_27FA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xAC8 (0xAD0 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : public FSlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(None)
	uint8                                        Pad_27FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UncheckedImage;                                    // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           UncheckedHoveredImage;                             // 0xE0(0xD0)(ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           UncheckedPressedImage;                             // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           CheckedImage;                                      // 0x280(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           CheckedHoveredImage;                               // 0x350(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           CheckedPressedImage;                               // 0x420(0xD0)(ZeroConstructor, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           UndeterminedImage;                                 // 0x4F0(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           UndeterminedHoveredImage;                          // 0x5C0(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           UndeterminedPressedImage;                          // 0x690(0xD0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FMargin                               Padding;                                           // 0x760(0x10)(None)
	struct FSlateBrush                           BackgroundImage;                                   // 0x770(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           BackgroundHoveredImage;                            // 0x840(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           BackgroundPressedImage;                            // 0x910(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           ForegroundColor;                                   // 0x9E0(0x14)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           HoveredForeground;                                 // 0x9F4(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           PressedForeground;                                 // 0xA08(0x14)(Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           CheckedForeground;                                 // 0xA1C(0x14)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           CheckedHoveredForeground;                          // 0xA30(0x14)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           CheckedPressedForeground;                          // 0xA44(0x14)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           UndeterminedForeground;                            // 0xA58(0x14)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateColor                           BorderBackgroundColor;                             // 0xA6C(0x14)(None)
	struct FSlateSound                           CheckedSlateSound;                                 // 0xA80(0x18)(ZeroConstructor)
	struct FSlateSound                           UncheckedSlateSound;                               // 0xA98(0x18)(ZeroConstructor)
	struct FSlateSound                           HoveredSlateSound;                                 // 0xAB0(0x18)(None)
	uint8                                        Pad_2809[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2158 (0x2160 - 0x8)
// ScriptStruct SlateCore.SegmentedControlStyle
struct FSegmentedControlStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_280C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        ControlStyle;                                      // 0x10(0xAD0)(ZeroConstructor, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FCheckBoxStyle                        FirstControlStyle;                                 // 0xAE0(0xAD0)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FCheckBoxStyle                        LastControlStyle;                                  // 0x15B0(0xAD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x2080(0xD0)(None)
	struct FMargin                               UniformPadding;                                    // 0x2150(0x10)(None)
};

// 0x748 (0x750 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_280E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          UnderlineStyle;                                    // 0x10(0x3F0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FTextBlockStyle                       TextStyle;                                         // 0x400(0x340)(None)
	struct FMargin                               Padding;                                           // 0x740(0x10)(None)
};

// 0x11C8 (0x11D0 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_280F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x10(0xE80)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FTextBlockStyle                       TextStyle;                                         // 0xE90(0x340)(None)
};

// 0x288 (0x290 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2811[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           FillImage;                                         // 0xE0(0xD0)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           MarqueeImage;                                      // 0x1B0(0xD0)(None)
	bool                                         EnableFillAnimation;                               // 0x280(0x1)(None)
	uint8                                        Pad_2813[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B8 (0x1C0 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2814[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CollapsedImage;                                    // 0x10(0xD0)(ZeroConstructor, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           ExpandedImage;                                     // 0xE0(0xD0)(None)
	float                                        RolloutAnimationSeconds;                           // 0x1B0(0x4)(None)
	uint8                                        Pad_2815[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1248 (0x1250 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2817[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextBoxStyle                 TextBoxStyle;                                      // 0x10(0xE80)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateFontInfo                        ActiveFontInfo;                                    // 0xE90(0x58)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	uint8                                        Pad_2819[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UpArrowImage;                                      // 0xEF0(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           DownArrowImage;                                    // 0xFC0(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           GlassImage;                                        // 0x1090(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           ClearImage;                                        // 0x1160(0xD0)(None)
	struct FMargin                               ImagePadding;                                      // 0x1230(0x10)(None)
	bool                                         bLeftAlignButtons;                                 // 0x1240(0x1)(None)
	bool                                         bLeftAlignSearchResultButtons;                     // 0x1241(0x1)(None)
	bool                                         bLeftAlignGlassImageAndClearButton;                // 0x1242(0x1)(None)
	uint8                                        Pad_281B[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x918 (0x920 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_281E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x500)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           HighVolumeImage;                                   // 0x510(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           MidVolumeImage;                                    // 0x5E0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           LowVolumeImage;                                    // 0x6B0(0xD0)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           NoVolumeImage;                                     // 0x780(0xD0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           MutedImage;                                        // 0x850(0xD0)(None)
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2821[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HandleNormalBrush;                                 // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           HandleHighlightBrush;                              // 0xE0(0xD0)(None)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct SlateCore.TableViewStyle
struct FTableViewStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2822[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xD0)(None)
};

// 0x758 (0x760 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2823[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SortPrimaryAscendingImage;                         // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, UObjectWrapper)
	struct FSlateBrush                           SortPrimaryDescendingImage;                        // 0xE0(0xD0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, UObjectWrapper)
	struct FSlateBrush                           SortSecondaryAscendingImage;                       // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, UObjectWrapper)
	struct FSlateBrush                           SortSecondaryDescendingImage;                      // 0x280(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, UObjectWrapper)
	struct FSlateBrush                           NormalBrush;                                       // 0x350(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, UObjectWrapper)
	struct FSlateBrush                           HoveredBrush;                                      // 0x420(0xD0)(ZeroConstructor, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           MenuDropdownImage;                                 // 0x4F0(0xD0)(ZeroConstructor, ContainsInstancedReference, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           MenuDropdownNormalBorderBrush;                     // 0x5C0(0xD0)(ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	struct FSlateBrush                           MenuDropdownHoveredBorderBrush;                    // 0x690(0xD0)(None)
};

// 0x1258 (0x1260 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2825[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTableColumnHeaderStyle               ColumnStyle;                                       // 0x10(0x760)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, UObjectWrapper)
	struct FTableColumnHeaderStyle               LastColumnStyle;                                   // 0x770(0x760)(ZeroConstructor, SimpleDisplay, Protected, UObjectWrapper)
	struct FSplitterStyle                        ColumnSplitterStyle;                               // 0xED0(0x1B0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, UObjectWrapper)
	float                                        SplitterHandleSize;                                // 0x1080(0x4)(None)
	uint8                                        Pad_2826[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0x1090(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, UObjectWrapper)
	struct FSlateColor                           ForegroundColor;                                   // 0x1160(0x14)(AdvancedDisplay, Protected, UObjectWrapper)
	uint8                                        Pad_2827[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HorizontalSeparatorBrush;                          // 0x1180(0xD0)(None)
	float                                        HorizontalSeparatorThickness;                      // 0x1250(0x4)(None)
	uint8                                        Pad_2828[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD78 (0xD80 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2829[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x10(0x3F0)(ZeroConstructor, ContainsInstancedReference, UObjectWrapper)
	struct FSlateBrush                           NormalBrush;                                       // 0x400(0xD0)(ZeroConstructor, AssetRegistrySearchable, UObjectWrapper)
	struct FSlateBrush                           ColorOverlayTabBrush;                              // 0x4D0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, UObjectWrapper)
	struct FSlateBrush                           ColorOverlayIconBrush;                             // 0x5A0(0xD0)(ZeroConstructor, SimpleDisplay, UObjectWrapper)
	struct FSlateBrush                           ForegroundBrush;                                   // 0x670(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, UObjectWrapper)
	struct FSlateBrush                           HoveredBrush;                                      // 0x740(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, UObjectWrapper)
	struct FSlateBrush                           ContentAreaBrush;                                  // 0x810(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, UObjectWrapper)
	struct FSlateBrush                           TabWellBrush;                                      // 0x8E0(0xD0)(ZeroConstructor, AdvancedDisplay, UObjectWrapper)
	struct FTextBlockStyle                       TabTextStyle;                                      // 0x9B0(0x340)(SimpleDisplay, AdvancedDisplay, UObjectWrapper)
	struct FMargin                               TabPadding;                                        // 0xCF0(0x10)(None)
	struct FDeprecateSlateVector2D               IconSize;                                          // 0xD00(0x8)(None)
	float                                        OverlapWidth;                                      // 0xD08(0x4)(None)
	struct FSlateColor                           FlashColor;                                        // 0xD0C(0x14)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, UObjectWrapper)
	struct FSlateColor                           NormalForegroundColor;                             // 0xD20(0x14)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, UObjectWrapper)
	struct FSlateColor                           HoveredForegroundColor;                            // 0xD34(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, UObjectWrapper)
	struct FSlateColor                           ActiveForegroundColor;                             // 0xD48(0x14)(Protected, UObjectWrapper)
	struct FSlateColor                           ForegroundForegroundColor;                         // 0xD5C(0x14)(None)
	float                                        IconBorderPadding;                                 // 0xD70(0x4)(None)
	uint8                                        Pad_282C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x368 (0x370 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
	float                                        BarThickness;                                      // 0x8(0x4)(None)
	uint8                                        Pad_282D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           TopShadowBrush;                                    // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0xE0(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           LeftShadowBrush;                                   // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           RightShadowBrush;                                  // 0x280(0xD0)(None)
	struct FMargin                               HorizontalScrolledContentPadding;                  // 0x350(0x10)(None)
	struct FMargin                               VerticalScrolledContentPadding;                    // 0x360(0x10)(None)
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_282F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           TopShadowBrush;                                    // 0x10(0xD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0xE0(0xD0)(None)
};

// 0x1938 (0x1940 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_2831[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          MinimizeButtonStyle;                               // 0x10(0x3F0)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FButtonStyle                          MaximizeButtonStyle;                               // 0x400(0x3F0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FButtonStyle                          RestoreButtonStyle;                                // 0x7F0(0x3F0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FButtonStyle                          CloseButtonStyle;                                  // 0xBE0(0x3F0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FTextBlockStyle                       TitleTextStyle;                                    // 0xFD0(0x340)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           ActiveTitleBrush;                                  // 0x1310(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           InactiveTitleBrush;                                // 0x13E0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           FlashTitleBrush;                                   // 0x14B0(0xD0)(ZeroConstructor, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateColor                           BackgroundColor;                                   // 0x1580(0x14)(ContainsInstancedReference, Protected, BlueprintCallable, UObjectWrapper)
	uint8                                        Pad_2832[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           OutlineBrush;                                      // 0x15A0(0xD0)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateColor                           OutlineColor;                                      // 0x1670(0x14)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, UObjectWrapper)
	uint8                                        Pad_2833[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BorderBrush;                                       // 0x1690(0xD0)(ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateColor                           BorderColor;                                       // 0x1760(0x14)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper)
	uint8                                        Pad_2834[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0x1780(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper)
	struct FSlateBrush                           ChildBackgroundBrush;                              // 0x1850(0xD0)(None)
	int32                                        WindowCornerRadius;                                // 0x1920(0x4)(None)
	struct FMargin                               BorderPadding;                                     // 0x1924(0x10)(None)
	uint8                                        Pad_2835[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x988 (0x988 - 0x0)
// ScriptStruct SlateCore.StyleColorList
struct FStyleColorList
{
public:
	struct FLinearColor                          StyleColors[0x3D];                                 // 0x0(0x3D0)(None)
	uint8                                        Pad_2836[0x5B8];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SlateCore.StyleTheme
struct FStyleTheme
{
public:
	uint8                                        Pad_2837[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3E48 (0x3E50 - 0x8)
// ScriptStruct SlateCore.ToolBarStyle
struct FToolBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_283A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FSlateBrush                           ExpandBrush;                                       // 0xE0(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FSlateBrush                           SeparatorBrush;                                    // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FTextBlockStyle                       LabelStyle;                                        // 0x280(0x340)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FEditableTextBoxStyle                 EditableTextStyle;                                 // 0x5C0(0xE80)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FCheckBoxStyle                        ToggleButton;                                      // 0x1440(0xAD0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x1F10(0x600)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FButtonStyle                          SettingsButtonStyle;                               // 0x2510(0x3F0)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FComboButtonStyle                     SettingsComboButton;                               // 0x2900(0x600)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FCheckBoxStyle                        SettingsToggleButton;                              // 0x2F00(0xAD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper)
	struct FButtonStyle                          ButtonStyle;                                       // 0x39D0(0x3F0)(None)
	struct FMargin                               LabelPadding;                                      // 0x3DC0(0x10)(None)
	struct FMargin                               SeparatorPadding;                                  // 0x3DD0(0x10)(None)
	struct FMargin                               ComboButtonPadding;                                // 0x3DE0(0x10)(None)
	struct FMargin                               ButtonPadding;                                     // 0x3DF0(0x10)(None)
	struct FMargin                               CheckBoxPadding;                                   // 0x3E00(0x10)(None)
	struct FMargin                               BlockPadding;                                      // 0x3E10(0x10)(None)
	struct FMargin                               IndentedBlockPadding;                              // 0x3E20(0x10)(None)
	struct FMargin                               BackgroundPadding;                                 // 0x3E30(0x10)(None)
	struct FDeprecateSlateVector2D               IconSize;                                          // 0x3E40(0x8)(None)
	bool                                         bShowLabels;                                       // 0x3E48(0x1)(None)
	uint8                                        Pad_283B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


