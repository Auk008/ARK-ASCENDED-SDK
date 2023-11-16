#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class UMG.Visual
class UVisual : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVisual* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class UMG.Widget
class UWidget : public UVisual
{
public:
	uint8                                        Pad_1342[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            Slot;                                              // 0x30(0x8)(ZeroConstructor)
	FDelegateProperty_                           bIsEnabledDelegate;                                // 0x38(0x10)(ZeroConstructor)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(None)
	FDelegateProperty_                           ToolTipTextDelegate;                               // 0x60(0x10)(ZeroConstructor)
	class UWidget*                               ToolTipWidget;                                     // 0x70(0x8)(ZeroConstructor)
	FDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x78(0x10)(ZeroConstructor)
	FDelegateProperty_                           VisibilityDelegate;                                // 0x88(0x10)(ZeroConstructor)
	struct FWidgetTransform                      RenderTransform;                                   // 0x98(0x38)(None)
	struct FVector2D                             RenderTransformPivot;                              // 0xD0(0x10)(None)
	enum class EFlowDirectionPreference          FlowDirectionPreference;                           // 0xE0(0x1)(None)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xE1(0x1)(None)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xE1(0x1)(None)
	uint8                                        BitPad_100 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EMouseCursor                      Cursor;                                            // 0xE2(0x1)(None)
	enum class EWidgetClipping                   Clipping;                                          // 0xE3(0x1)(None)
	enum class ESlateVisibility                  Visibility;                                        // 0xE4(0x1)(None)
	uint8                                        Pad_1344[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RenderOpacity;                                     // 0xE8(0x4)(None)
	uint8                                        Pad_1345[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USlateAccessibleWidgetData*            AccessibleWidgetData;                              // 0xF0(0x8)(ZeroConstructor)
	class UWidgetNavigation*                     Navigation;                                        // 0xF8(0x8)(ZeroConstructor)
	uint8                                        Pad_1346[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0x120(0x10)(ZeroConstructor)
	uint8                                        Pad_1347[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseCustomTooltip;                                 // 0x150(0x1)(None)
	enum class EAlignHorizontalUI                CustomToolTipHorizontalAlignment;                  // 0x151(0x1)(None)
	enum class EAlignVerticalUI                  CustomToolTipVerticalAlignment;                    // 0x152(0x1)(None)
	enum class EOrientation                      CustomToolTipOrientation;                          // 0x153(0x1)(None)
	float                                        GamepadSelectClosestDistanceMultiplier;            // 0x154(0x4)(None)
	bool                                         bDisableAxisOrientedSweepTestOnMe;                 // 0x158(0x1)(None)
	uint8                                        Pad_1348[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CustomToolTipBlueprintOverride;                    // 0x160(0x8)(None)
	struct FVector2D                             CustomToolTipPadding;                              // 0x168(0x10)(None)
	class FText                                  CustomToolTipString;                               // 0x178(0x18)(None)
	uint8                                        Pad_1349[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         HandleVisibilityWithInput;                         // 0x198(0x1)(None)
	enum class ESlateVisibility                  VisibilityGamepadInput;                            // 0x199(0x1)(None)
	enum class ESlateVisibility                  VisibilityKBMInput;                                // 0x19A(0x1)(None)
	bool                                         Highlightable;                                     // 0x19B(0x1)(None)
	bool                                         bDontRenderHighlight;                              // 0x19C(0x1)(None)
	bool                                         bUseWindowClippingForHighlight;                    // 0x19D(0x1)(None)
	bool                                         bPrimalSetupSpecialAdjacents;                      // 0x19E(0x1)(None)
	uint8                                        Pad_134A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomData;                                        // 0x1A0(0x10)(None)
	class FName                                  AdjacentUpName;                                    // 0x1B0(0x8)(None)
	class FName                                  AdjacentDownName;                                  // 0x1B8(0x8)(None)
	class FName                                  AdjacentRightName;                                 // 0x1C0(0x8)(None)
	class FName                                  AdjacentLeftName;                                  // 0x1C8(0x8)(None)
	uint8                                        Pad_134C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidget* GetDefaultObj();

	void SetVisibility(enum class ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(class FText InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, class UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate);
	void SetNavigationRuleCustom(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate);
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule);
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(enum class EMouseCursor InCursor);
	void SetClipping(enum class EWidgetClipping InClipping);
	void SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	void OnReply__DelegateSignature(const struct FEventReply& ReturnValue);
	void OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
	void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate);
	void IsVisible(bool ReturnValue);
	void IsRendered(bool ReturnValue);
	void IsInViewport(bool ReturnValue);
	void IsHovered(bool ReturnValue);
	void InvalidateLayoutAndVolatility();
	void HasUserFocusedDescendants(class APlayerController* PlayerController, bool ReturnValue);
	void HasUserFocus(class APlayerController* PlayerController, bool ReturnValue);
	void HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex, bool ReturnValue);
	void HasMouseCapture(bool ReturnValue);
	void HasKeyboardFocus(bool ReturnValue);
	void HasFocusedDescendants(bool ReturnValue);
	void HasAnyUserFocus(bool ReturnValue);
	void GetWidget__DelegateSignature(class UWidget* ReturnValue);
	void GetVisibility(enum class ESlateVisibility ReturnValue);
	void GetTickSpaceGeometry(const struct FGeometry& ReturnValue);
	void GetText__DelegateSignature(class FText ReturnValue);
	void GetSlateVisibility__DelegateSignature(enum class ESlateVisibility ReturnValue);
	void GetSlateColor__DelegateSignature(const struct FSlateColor& ReturnValue);
	void GetSlateBrush__DelegateSignature(const struct FSlateBrush& ReturnValue);
	void GetRenderTransformAngle(float ReturnValue);
	void GetRenderOpacity(float ReturnValue);
	void GetParent(class UPanelWidget* ReturnValue);
	void GetPaintSpaceGeometry(const struct FGeometry& ReturnValue);
	void GetOwningPlayer(class APlayerController* ReturnValue);
	void GetOwningLocalPlayer(class ULocalPlayer* ReturnValue);
	void GetMouseCursor__DelegateSignature(enum class EMouseCursor ReturnValue);
	void GetLinearColor__DelegateSignature(const struct FLinearColor& ReturnValue);
	void GetIsThisAndParentsEnabled(bool ReturnValue);
	void GetIsEnabled(bool ReturnValue);
	void GetInt32__DelegateSignature(int32 ReturnValue);
	void GetGameInstance(class UGameInstance* ReturnValue);
	void GetFloat__DelegateSignature(float ReturnValue);
	void GetDesiredSize(const struct FVector2D& ReturnValue);
	void GetClipping(enum class EWidgetClipping ReturnValue);
	void GetCheckBoxState__DelegateSignature(enum class ECheckBoxState ReturnValue);
	void GetCachedGeometry(const struct FGeometry& ReturnValue);
	void GetBool__DelegateSignature(bool ReturnValue);
	void GetAccessibleText(class FText ReturnValue);
	void GetAccessibleSummaryText(class FText ReturnValue);
	void GenerateWidgetForString__DelegateSignature(const class FString& Item, class UWidget* ReturnValue);
	void GenerateWidgetForObject__DelegateSignature(class UObject* Item, class UWidget* ReturnValue);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// 0x130 (0x320 - 0x1F0)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_14AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x1F8(0x10)(None)
	int32                                        SceneStackPriority;                                // 0x208(0x4)(None)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x20C(0x10)(ZeroConstructor)
	struct FSlateColor                           ForegroundColor;                                   // 0x21C(0x14)(None)
	FDelegateProperty_                           ForegroundColorDelegate;                           // 0x230(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnVisibilityChanged;                               // 0x240(0x10)(ZeroConstructor)
	uint8                                        Pad_14AE[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x268(0x10)(None)
	int32                                        Priority;                                          // 0x278(0x4)(None)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x1, PropSize: 0x10x27C(0x1)(None)
	uint8                                        bStopAction : 1;                                   // Mask: 0x2, PropSize: 0x10x27C(0x1)(None)
	uint8                                        BitPad_104 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_14B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x280(0x10)(ZeroConstructor)
	class UUMGSequenceTickManager*               AnimationTickManager;                              // 0x290(0x8)(ZeroConstructor)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x298(0x10)(ZeroConstructor)
	TArray<struct FNamedSlotBinding>             NamedSlotBindings;                                 // 0x2A8(0x10)(ZeroConstructor)
	TArray<class UUserWidgetExtension*>          Extensions;                                        // 0x2B8(0x10)(ZeroConstructor)
	class UWidgetTree*                           WidgetTree;                                        // 0x2C8(0x8)(ZeroConstructor)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x1, PropSize: 0x10x2D0(0x1)(None)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x2, PropSize: 0x10x2D0(0x1)(None)
	uint8                                        BitPad_105 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_14B1[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x2E8(0x1)(None)
	uint8                                        Pad_14B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       InputComponent;                                    // 0x2F0(0x8)(ZeroConstructor)
	TArray<struct FAnimationEventBinding>        AnimationCallbacks;                                // 0x2F8(0x10)(ZeroConstructor)
	uint8                                        Pad_14B5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUserWidget* GetDefaultObj();

	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(class FName ActionName, enum class EInputEvent EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
	void SetInputActionPriority(int32 NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RemoveExtensions(class UClass* InExtensionType);
	void RemoveExtension(class UUserWidgetExtension* InExtension);
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue);
	void PauseAnimation(class UWidgetAnimation* InAnimation, float ReturnValue);
	void OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	void OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	void OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent, const struct FEventReply& ReturnValue);
	void OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	void OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	void OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	void OnPaint(const struct FPaintContext& Context);
	void OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	void OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	void OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	void OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue);
	void OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent, const struct FEventReply& ReturnValue);
	void OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent, const struct FEventReply& ReturnValue);
	void OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	void OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent, const struct FEventReply& ReturnValue);
	void OnInitialized();
	void OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& ReturnValue);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ReturnValue);
	void OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool ReturnValue);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& ReturnValue);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(class FName ActionName, enum class EInputEvent EventType, bool bConsume, FDelegateProperty_ Callback);
	void IsPlayingAnimation(bool ReturnValue);
	void IsListeningForInputAction(class FName ActionName, bool ReturnValue);
	void IsInteractable(bool ReturnValue);
	void IsAnyAnimationPlaying(bool ReturnValue);
	void IsAnimationPlayingForward(class UWidgetAnimation* InAnimation, bool ReturnValue);
	void IsAnimationPlaying(class UWidgetAnimation* InAnimation, bool ReturnValue);
	void GetOwningPlayerPawn(class APawn* ReturnValue);
	void GetOwningPlayerCameraManager(class APlayerCameraManager* ReturnValue);
	void GetIsVisible(bool ReturnValue);
	void GetExtensions(class UClass* ExtensionType, const TArray<class UUserWidgetExtension*>& ReturnValue);
	void GetExtension(class UClass* ExtensionType, class UUserWidgetExtension* ReturnValue);
	void GetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float ReturnValue);
	void GetAnchorsInViewport(const struct FAnchors& ReturnValue);
	void GetAlignmentInViewport(const struct FVector2D& ReturnValue);
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate, enum class EWidgetAnimationEvent AnimationEvent, class FName UserTag);
	void AddToViewport(int32 ZOrder);
	void AddToPlayerScreen(int32 ZOrder, bool ReturnValue);
	void AddExtension(class UClass* InExtensionType, class UUserWidgetExtension* ReturnValue);
};

// 0x158 (0x348 - 0x1F0)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct FSlateBrush                           Brush;                                             // 0x1F0(0xD0)(ZeroConstructor)
	FDelegateProperty_                           BrushDelegate;                                     // 0x2C0(0x10)(ZeroConstructor)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x2D0(0x10)(None)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x2E0(0x10)(ZeroConstructor)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x2F0(0x1)(None)
	bool                                         EnableDefaultDisabledEffect;                       // 0x2F1(0x1)(None)
	uint8                                        Pad_1521[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x2F4(0x10)(ZeroConstructor)
	uint8                                        Pad_1522[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImage* GetDefaultObj();

	void SetOpacity(float InOpacity);
	void SetDesiredSizeOverride(const struct FVector2D& DesiredSize);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& TintColor);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize);
	void SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	void GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x1F0(0x3)(None)
	enum class ETextJustify                      Justification;                                     // 0x1F3(0x1)(None)
	enum class ETextWrappingPolicy               WrappingPolicy;                                    // 0x1F4(0x1)(None)
	uint8                                        AutoWrapText : 1;                                  // Mask: 0x1, PropSize: 0x10x1F5(0x1)(None)
	uint8                                        BitPad_108 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1538[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WrapTextAt;                                        // 0x1F8(0x4)(None)
	struct FMargin                               Margin;                                            // 0x1FC(0x10)(None)
	float                                        LineHeightPercentage;                              // 0x20C(0x4)(None)

	static class UClass* StaticClass();
	static class UTextLayoutWidget* GetDefaultObj();

	void SetJustification(enum class ETextJustify InJustification);
};

// 0x700 (0x910 - 0x210)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(None)
	class UDataTable*                            TextStyleSet;                                      // 0x228(0x8)(ZeroConstructor)
	TArray<class UClass*>                        DecoratorClasses;                                  // 0x230(0x10)(ZeroConstructor)
	bool                                         bOverrideDefaultStyle;                             // 0x240(0x1)(None)
	uint8                                        Pad_1550[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x250(0x340)(ZeroConstructor)
	float                                        MinDesiredWidth;                                   // 0x590(0x4)(None)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x594(0x1)(None)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x595(0x1)(None)
	uint8                                        Pad_1551[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       DefaultTextStyle;                                  // 0x5A0(0x340)(ZeroConstructor)
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x8E0(0x10)(ZeroConstructor)
	uint8                                        Pad_1553[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URichTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetDefaultMaterial(class UMaterialInterface* InMaterial);
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetDecorators(const TArray<class UClass*>& InDecoratorClasses);
	void SetAutoWrapText(bool InAutoTextWrap);
	void RefreshTextLayout();
	void GetTextStyleSet(class UDataTable* ReturnValue);
	void GetText(class FText ReturnValue);
	void GetDefaultDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue);
	void GetDecoratorByClass(class UClass* DecoratorClass, class URichTextBlockDecorator* ReturnValue);
	void ClearAllDefaultStyleOverrides();
};

// 0x0 (0x28 - 0x28)
// Class UMG.RichTextBlockDecorator
class URichTextBlockDecorator : public UObject
{
public:

	static class UClass* StaticClass();
	static class URichTextBlockDecorator* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class URichTextBlockImageDecorator* GetDefaultObj();

};

// 0x18 (0x208 - 0x1F0)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x1F0(0x10)(ZeroConstructor)
	uint8                                        Pad_1565[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ClipChildren;                                      // 0x201(0x1)(None)
	bool                                         UseScaledRenderClipForHUDChildren;                 // 0x202(0x1)(None)
	bool                                         bCanNavigateToDifferentPanel;                      // 0x203(0x1)(None)
	bool                                         bHighlightInsteadOfChild;                          // 0x204(0x1)(None)
	uint8                                        Pad_1566[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPanelWidget* GetDefaultObj();

	void RemoveChildAt(int32 Index, bool ReturnValue);
	void RemoveChild(class UWidget* Content, bool ReturnValue);
	void HasChild(class UWidget* Content, bool ReturnValue);
	void HasAnyChildren(bool ReturnValue);
	void GetChildrenCount(int32 ReturnValue);
	void GetChildIndex(class UWidget* Content, int32 ReturnValue);
	void GetChildAt(int32 Index, class UWidget* ReturnValue);
	void GetAllChildren(const TArray<class UWidget*>& ReturnValue);
	void ClearChildren();
	void AddChild(class UWidget* Content, class UPanelSlot* ReturnValue);
};

// 0x0 (0x208 - 0x208)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass();
	static class UContentWidget* GetDefaultObj();

	void SetContent(class UWidget* Content, class UPanelSlot* ReturnValue);
	void GetContentSlot(class UPanelSlot* ReturnValue);
	void GetContent(class UWidget* ReturnValue);
};

// 0x4D8 (0x6E0 - 0x208)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	uint8                                        Pad_1585[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          WidgetStyle;                                       // 0x210(0x3F0)(ZeroConstructor)
	bool                                         bUseDisabledStyle;                                 // 0x600(0x1)(None)
	uint8                                        Pad_1588[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x604(0x10)(None)
	struct FLinearColor                          BackgroundColor;                                   // 0x614(0x10)(None)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x624(0x1)(None)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x625(0x1)(None)
	enum class EButtonPressMethod                PressMethod;                                       // 0x626(0x1)(None)
	uint8                                        IsFocusable : 1;                                   // Mask: 0x1, PropSize: 0x10x627(0x1)(None)
	uint8                                        BitPad_109 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bForceHandleMouseDown : 1;                         // Mask: 0x1, PropSize: 0x10x628(0x1)(None)
	uint8                                        BitPad_10A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_158E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRedirectGamepadPressToClick : 1;                  // Mask: 0x1, PropSize: 0x10x62C(0x1)(None)
	uint8                                        bUseHoverSound : 1;                                // Mask: 0x2, PropSize: 0x10x62C(0x1)(None)
	uint8                                        BitPad_10B : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1590[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x630(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x640(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x650(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x660(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x670(0x10)(ZeroConstructor)
	uint8                                        Pad_1592[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClickedObject;                                   // 0x690(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSecondaryClicked;                                // 0x6A0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSecondaryClickedObject;                          // 0x6B0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnGamepadClicked;                                  // 0x6C0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnGamepadClickedObject;                            // 0x6D0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UButton* GetDefaultObj();

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	void MimickClicked(bool bFromGamepad);
	void IsPressed(bool ReturnValue);
};

// 0xB90 (0xD98 - 0x208)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	uint8                                        Pad_15D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x210(0x370)(ZeroConstructor)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x580(0x770)(ZeroConstructor)
	enum class EOrientation                      Orientation;                                       // 0xCF0(0x1)(None)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0xCF1(0x1)(None)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xCF2(0x1)(None)
	uint8                                        Pad_15D1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScrollbarThickness;                                // 0xCF8(0x10)(None)
	struct FMargin                               ScrollbarPadding;                                  // 0xD08(0x10)(None)
	bool                                         AlwaysShowScrollbar;                               // 0xD18(0x1)(None)
	bool                                         AlwaysShowScrollbarTrack;                          // 0xD19(0x1)(None)
	bool                                         AllowOverscroll;                                   // 0xD1A(0x1)(None)
	bool                                         BackPadScrolling;                                  // 0xD1B(0x1)(None)
	bool                                         FrontPadScrolling;                                 // 0xD1C(0x1)(None)
	bool                                         bAnimateWheelScrolling;                            // 0xD1D(0x1)(None)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0xD1E(0x1)(None)
	uint8                                        Pad_15D5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NavigationScrollPadding;                           // 0xD20(0x4)(None)
	enum class EScrollWhenFocusChanges           ScrollWhenFocusChanges;                            // 0xD24(0x1)(None)
	bool                                         bAllowRightClickDragScrolling;                     // 0xD25(0x1)(None)
	uint8                                        Pad_15D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WheelScrollMultiplier;                             // 0xD28(0x4)(None)
	uint8                                        Pad_15D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xD30(0x10)(ZeroConstructor)
	uint8                                        Pad_15D9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPreviewWidgets;                                 // 0xD58(0x4)(None)
	int32                                        NumWidgetsBeforeWrapping;                          // 0xD5C(0x4)(None)
	struct FVector2D                             WidgetSize;                                        // 0xD60(0x10)(None)
	struct FVector2D                             WidgetPadding;                                     // 0xD70(0x10)(None)
	enum class EHorizontalAlignment              WidgetHorizontalAlignment;                         // 0xD80(0x1)(None)
	enum class EVerticalAlignment                WidgetVerticalAlignment;                           // 0xD81(0x1)(None)
	bool                                         UseWidgetPaddingAsMargin;                          // 0xD82(0x1)(None)
	uint8                                        Pad_15DC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               WidgetMargin;                                      // 0xD84(0x10)(None)
	bool                                         bGamepadMovementMovesScrollBox;                    // 0xD94(0x1)(None)
	bool                                         bPrimalAllowRightSpecialStickScroll;               // 0xD95(0x1)(None)
	bool                                         bForceAllowGamepadHighlight;                       // 0xD96(0x1)(None)
	uint8                                        Pad_15DE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScrollBox* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
	void SetOrientation(enum class EOrientation NewOrientation);
	void SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination);
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	void GetViewOffsetFraction(float ReturnValue);
	void GetViewFraction(float ReturnValue);
	void GetScrollOffsetOfEnd(float ReturnValue);
	void GetScrollOffset(float ReturnValue);
	void GetScrollMax(float ReturnValue);
	void GetScrollContentSize(const struct FVector2D& ReturnValue);
	void GetPhysicalScrollOffset(float ReturnValue);
	void EndInertialScrolling();
};

// 0x1A8 (0x3B0 - 0x208)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x208(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x209(0x1)(None)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x20A(0x1)(None)
	uint8                                        BitPad_110 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x20C(0x10)(None)
	FDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x21C(0x10)(ZeroConstructor)
	struct FMargin                               Padding;                                           // 0x22C(0x10)(None)
	uint8                                        Pad_15F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Background;                                        // 0x240(0xD0)(ZeroConstructor)
	FDelegateProperty_                           BackgroundDelegate;                                // 0x310(0x10)(ZeroConstructor)
	struct FLinearColor                          BrushColor;                                        // 0x320(0x10)(None)
	FDelegateProperty_                           BrushColorDelegate;                                // 0x330(0x10)(ZeroConstructor)
	struct FVector2D                             DesiredSizeScale;                                  // 0x340(0x10)(None)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x350(0x1)(None)
	uint8                                        Pad_15F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x354(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x364(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnMouseMoveEvent;                                  // 0x374(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x384(0x10)(ZeroConstructor)
	uint8                                        Pad_15F9[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBorder* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	void GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0x390 (0x580 - 0x1F0)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(None)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(ZeroConstructor)
	class FText                                  HintText;                                          // 0x218(0x18)(None)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x230(0x10)(ZeroConstructor)
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x240(0x2F0)(ZeroConstructor)
	bool                                         IsReadOnly;                                        // 0x530(0x1)(None)
	bool                                         IsPassword;                                        // 0x531(0x1)(None)
	uint8                                        Pad_1612[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x534(0x4)(None)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x538(0x1)(None)
	bool                                         SelectAllTextWhenFocused;                          // 0x539(0x1)(None)
	bool                                         RevertTextOnEscape;                                // 0x53A(0x1)(None)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x53B(0x1)(None)
	bool                                         SelectAllTextOnCommit;                             // 0x53C(0x1)(None)
	bool                                         AllowContextMenu;                                  // 0x53D(0x1)(None)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x53E(0x1)(None)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x53F(0x1)(None)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x540(0x1)(None)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x541(0x1)(None)
	enum class ETextJustify                      Justification;                                     // 0x542(0x1)(None)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x543(0x1)(None)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x544(0x3)(None)
	uint8                                        Pad_1615[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x548(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x558(0x10)(ZeroConstructor)
	uint8                                        Pad_1616[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditableText* GetDefaultObj();

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetMinimumDesiredWidth(float InMinDesiredWidth);
	void SetJustification(enum class ETextJustify InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(class FText InHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void OnEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void GetText(class FText ReturnValue);
	void GetJustification(enum class ETextJustify ReturnValue);
	void GetHintText(class FText ReturnValue);
	void GetFont(const struct FSlateFontInfo& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class UMG.NotifyFieldValueChanged
class INotifyFieldValueChanged : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INotifyFieldValueChanged* GetDefaultObj();

};

// 0x118 (0x308 - 0x1F0)
// Class UMG.ListViewBase
class UListViewBase : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            BP_OnEntryGenerated;                               // 0x1F0(0x10)(ZeroConstructor)
	uint8                                        Pad_1628[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                EntryWidgetClass;                                  // 0x210(0x8)(ZeroConstructor)
	float                                        WheelScrollMultiplier;                             // 0x218(0x4)(None)
	bool                                         bEnableScrollAnimation;                            // 0x21C(0x1)(None)
	bool                                         AllowOverscroll;                                   // 0x21D(0x1)(None)
	bool                                         bEnableRightClickScrolling;                        // 0x21E(0x1)(None)
	bool                                         bEnableFixedLineOffset;                            // 0x21F(0x1)(None)
	float                                        FixedLineScrollOffset;                             // 0x220(0x4)(None)
	bool                                         bAllowDragging;                                    // 0x224(0x1)(None)
	uint8                                        Pad_1629[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnEntryReleased;                                // 0x228(0x10)(ZeroConstructor)
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x238(0x88)(ZeroConstructor)
	uint8                                        Pad_162B[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UListViewBase* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	void GetScrollOffset(float ReturnValue);
	void GetDisplayedEntryWidgets(const TArray<class UUserWidget*>& ReturnValue);
};

// 0x9C8 (0xCD0 - 0x308)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	uint8                                        Pad_16D8[0xD8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTableViewStyle                       WidgetStyle;                                       // 0x3E0(0xE0)(ZeroConstructor)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x4C0(0x770)(ZeroConstructor)
	enum class EOrientation                      Orientation;                                       // 0xC30(0x1)(None)
	enum class ESelectionMode                    SelectionMode;                                     // 0xC31(0x1)(None)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xC32(0x1)(None)
	bool                                         bClearSelectionOnClick;                            // 0xC33(0x1)(None)
	bool                                         bIsFocusable;                                      // 0xC34(0x1)(None)
	uint8                                        Pad_16DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0xC38(0x4)(None)
	bool                                         bReturnFocusToSelection;                           // 0xC3C(0x1)(None)
	uint8                                        Pad_16DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       ListItems;                                         // 0xC40(0x10)(ZeroConstructor)
	uint8                                        Pad_16DD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnEntryInitialized;                             // 0xC60(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnItemClicked;                                  // 0xC70(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnItemDoubleClicked;                            // 0xC80(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnItemIsHoveredChanged;                         // 0xC90(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnItemSelectionChanged;                         // 0xCA0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnItemScrolledIntoView;                         // 0xCB0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnListViewScrolled;                             // 0xCC0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UListView* GetDefaultObj();

	void SetSelectionMode(enum class ESelectionMode SelectionMode);
	void SetSelectedIndex(int32 Index);
	void ScrollIndexIntoView(int32 Index);
	void RemoveItem(class UObject* Item);
	void OnListItemOuterEndPlayed(class AActor* ItemOuter, enum class EEndPlayReason EndPlayReason);
	void OnListItemEndPlayed(class AActor* Item, enum class EEndPlayReason EndPlayReason);
	void NavigateToIndex(int32 Index);
	void IsRefreshPending(bool ReturnValue);
	void GetNumItems(int32 ReturnValue);
	void GetListItems(const TArray<class UObject*>& ReturnValue);
	void GetItemAt(int32 Index, class UObject* ReturnValue);
	void GetIndexForItem(class UObject* Item, int32 ReturnValue);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(const TArray<class UObject*>& InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	void BP_IsItemVisible(class UObject* Item, bool ReturnValue);
	void BP_GetSelectedItems(const TArray<class UObject*>& Items, bool ReturnValue);
	void BP_GetSelectedItem(class UObject* ReturnValue);
	void BP_GetNumItemsSelected(int32 ReturnValue);
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};

// 0x0 (0x28 - 0x28)
// Class UMG.ListViewDesignerPreviewItem
class UListViewDesignerPreviewItem : public UObject
{
public:

	static class UClass* StaticClass();
	static class UListViewDesignerPreviewItem* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                         bCanChildrenBeAccessible;                          // 0x28(0x1)(None)
	enum class ESlateAccessibleBehavior          AccessibleBehavior;                                // 0x29(0x1)(None)
	enum class ESlateAccessibleBehavior          AccessibleSummaryBehavior;                         // 0x2A(0x1)(None)
	uint8                                        Pad_16E9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AccessibleText;                                    // 0x30(0x18)(None)
	FDelegateProperty_                           AccessibleTextDelegate;                            // 0x48(0x10)(ZeroConstructor)
	class FText                                  AccessibleSummaryText;                             // 0x58(0x18)(None)
	FDelegateProperty_                           AccessibleSummaryTextDelegate;                     // 0x70(0x10)(None)

	static class UClass* StaticClass();
	static class USlateAccessibleWidgetData* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class UMG.UserWidgetBlueprint
class UUserWidgetBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UUserWidgetBlueprint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.UserWidgetExtension
class UUserWidgetExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUserWidgetExtension* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintGeneratedClassExtension
class UWidgetBlueprintGeneratedClassExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWidgetBlueprintGeneratedClassExtension* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetFieldNotificationExtension
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{
public:
	uint8                                        Pad_16F4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetFieldNotificationExtension* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class UMG.WidgetNavigation
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                 Up;                                                // 0x28(0x24)(ZeroConstructor)
	struct FWidgetNavigationData                 Down;                                              // 0x4C(0x24)(ZeroConstructor)
	struct FWidgetNavigationData                 Left;                                              // 0x70(0x24)(ZeroConstructor)
	struct FWidgetNavigationData                 Right;                                             // 0x94(0x24)(ZeroConstructor)
	struct FWidgetNavigationData                 Next;                                              // 0xB8(0x24)(ZeroConstructor)
	struct FWidgetNavigationData                 Previous;                                          // 0xDC(0x24)(None)

	static class UClass* StaticClass();
	static class UWidgetNavigation* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieScene2DTransformPropertySystem
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScene2DTransformPropertySystem* GetDefaultObj();

};

// 0x780 (0x870 - 0xF0)
// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1706[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieScene2DTransformMask            TransformMask;                                     // 0xF8(0x4)(None)
	uint8                                        Pad_1707[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x100(0x220)(None)
	struct FMovieSceneFloatChannel               Rotation;                                          // 0x320(0x110)(None)
	struct FMovieSceneFloatChannel               Scale[0x2];                                        // 0x430(0x220)(None)
	struct FMovieSceneFloatChannel               Shear[0x2];                                        // 0x650(0x220)(None)

	static class UClass* StaticClass();
	static class UMovieScene2DTransformSection* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieScene2DTransformTrack
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieScene2DTransformTrack* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieSceneMarginPropertySystem
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMarginPropertySystem* GetDefaultObj();

};

// 0x448 (0x538 - 0xF0)
// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_170F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               TopCurve;                                          // 0xF8(0x110)(None)
	struct FMovieSceneFloatChannel               LeftCurve;                                         // 0x208(0x110)(None)
	struct FMovieSceneFloatChannel               RightCurve;                                        // 0x318(0x110)(None)
	struct FMovieSceneFloatChannel               BottomCurve;                                       // 0x428(0x110)(None)

	static class UClass* StaticClass();
	static class UMovieSceneMarginSection* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieSceneMarginTrack
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMarginTrack* GetDefaultObj();

};

// 0x160 (0x1A0 - 0x40)
// Class UMG.MovieSceneWidgetMaterialSystem
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1718[0x160];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialSystem* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_171D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BrushPropertyNamePath;                             // 0xB8(0x10)(None)
	class FName                                  TrackName;                                         // 0xC8(0x8)(None)

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialTrack* GetDefaultObj();

};

// 0x310 (0x338 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_1730[0x1F8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      Animation;                                         // 0x220(0x8)(ZeroConstructor)
	uint8                                        Pad_1731[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x230(0x88)(None)
	uint8                                        Pad_1732[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUMGSequencePlayer* GetDefaultObj();

	void SetUserTag(class FName InUserTag);
	void GetUserTag(class FName ReturnValue);
};

// 0x98 (0xC0 - 0x28)
// Class UMG.UMGSequenceTickManager
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                // 0x28(0x50)(ZeroConstructor)
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x78(0x8)(None)
	uint8                                        Pad_1737[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUMGSequenceTickManager* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ZeroConstructor)
	TArray<struct FWidgetAnimationBinding>       AnimationBindings;                                 // 0x70(0x10)(None)
	bool                                         bLegacyFinishOnStop;                               // 0x80(0x1)(None)
	uint8                                        Pad_174C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisplayLabel;                                      // 0x88(0x10)(None)

	static class UClass* StaticClass();
	static class UWidgetAnimation* GetDefaultObj();

	void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate);
	void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	void GetStartTime(float ReturnValue);
	void GetEndTime(float ReturnValue);
	void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate);
	void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate);
};

// 0x10 (0x38 - 0x28)
// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                   // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UWidgetAnimationDelegateBinding* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x28(0x10)(None)
	uint8                                        Pad_179A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetAnimationPlayCallbackProxy* GetDefaultObj();

	void CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer* Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue);
	void CreatePlayAnimationProxyObject(class UUMGSequencePlayer* Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(ZeroConstructor)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x30(0x38)(None)
	class FName                                  DestinationProperty;                               // 0x68(0x8)(None)

	static class UClass* StaticClass();
	static class UPropertyBinding* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class UMG.BoolBinding
class UBoolBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UBoolBinding* GetDefaultObj();

	void GetValue(bool ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17B4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrushBinding* GetDefaultObj();

	void GetValue(const struct FSlateBrush& ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17BD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCheckedStateBinding* GetDefaultObj();

	void GetValue(enum class ECheckBoxState ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17C7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UColorBinding* GetDefaultObj();

	void GetSlateValue(const struct FSlateColor& ReturnValue);
	void GetLinearValue(const struct FLinearColor& ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UFloatBinding* GetDefaultObj();

	void GetValue(float ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UInt32Binding* GetDefaultObj();

	void GetValue(int32 ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UMouseCursorBinding* GetDefaultObj();

	void GetValue(enum class EMouseCursor ReturnValue);
};

// 0x8 (0x78 - 0x70)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_17E1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTextBinding* GetDefaultObj();

	void GetTextValue(class FText ReturnValue);
	void GetStringValue(const class FString& ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UVisibilityBinding* GetDefaultObj();

	void GetValue(enum class ESlateVisibility ReturnValue);
};

// 0x0 (0x70 - 0x70)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UWidgetBinding* GetDefaultObj();

	void GetValue(class UWidget* ReturnValue);
};

// 0x20 (0x50 - 0x30)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UAsyncTaskDownloadImage* GetDefaultObj();

	void DownloadImage(const class FString& URL, class UAsyncTaskDownloadImage* ReturnValue);
};

// 0x80 (0xB0 - 0x30)
// Class UMG.GameViewportSubsystem
class UGameViewportSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_180A[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameViewportSubsystem* GetDefaultObj();

	void SetWidgetSlotPosition(const struct FGameViewportWidgetSlot& Slot, class UWidget* Widget, const struct FVector2D& Position, bool bRemoveDPIScale, const struct FGameViewportWidgetSlot& ReturnValue);
	void SetWidgetSlotDesiredSize(const struct FGameViewportWidgetSlot& Slot, const struct FVector2D& Size, const struct FGameViewportWidgetSlot& ReturnValue);
	void SetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot);
	void RemoveWidget(class UWidget* Widget);
	void IsWidgetAdded(class UWidget* Widget, bool ReturnValue);
	void GetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& ReturnValue);
	void AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, const struct FGameViewportWidgetSlot& Slot);
	void AddWidget(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntry
class IUserListEntry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUserListEntry* GetDefaultObj();

	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntryLibrary
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserListEntryLibrary* GetDefaultObj();

	void IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue);
	void IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue);
	void GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry, class UListViewBase* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntry
class IUserObjectListEntry : public IUserListEntry
{
public:

	static class UClass* StaticClass();
	static class IUserObjectListEntry* GetDefaultObj();

	void OnListItemObjectSet(class UObject* ListItemObject);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntryLibrary
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserObjectListEntryLibrary* GetDefaultObj();

	void GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry, class UObject* ReturnValue);
};

// 0x128 (0x330 - 0x208)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                               Padding;                                           // 0x208(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x218(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x219(0x1)(None)
	bool                                         bApplyAlphaToBlur;                                 // 0x21A(0x1)(None)
	uint8                                        Pad_1849[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurStrength;                                      // 0x21C(0x4)(None)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x220(0x1)(None)
	uint8                                        Pad_184B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlurRadius;                                        // 0x224(0x4)(None)
	uint8                                        Pad_184C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CornerRadius;                                      // 0x230(0x20)(None)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x250(0xD0)(ZeroConstructor)
	uint8                                        Pad_184D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBackgroundBlur* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetCornerRadius(const struct FVector4& InCornerRadius);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int32 InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// 0x10 (0x38 - 0x28)
// Class UMG.PanelSlot
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(ZeroConstructor)
	class UWidget*                               Content;                                           // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UPanelSlot* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(None)
	uint8                                        Pad_1865[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBackgroundBlurSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(None)
	uint8                                        Pad_187F[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBorderSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(None)
	uint8                                        Pad_1887[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UButtonSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x30 (0x238 - 0x208)
// Class UMG.CanvasPanel
class UCanvasPanel : public UPanelWidget
{
public:
	uint8                                        Pad_188C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x218(0x10)(None)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x228(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCanvasPanel* GetDefaultObj();

	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void AddChildToCanvas(class UWidget* Content, class UCanvasPanelSlot* ReturnValue);
};

// 0x50 (0x88 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x38(0x40)(None)
	bool                                         bAutoSize;                                         // 0x78(0x1)(None)
	uint8                                        Pad_18B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZOrder;                                            // 0x7C(0x4)(None)
	uint8                                        Pad_18B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCanvasPanelSlot* GetDefaultObj();

	void SetZOrder(int32 InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	void GetZOrder(int32 ReturnValue);
	void GetSize(const struct FVector2D& ReturnValue);
	void GetPosition(const struct FVector2D& ReturnValue);
	void GetOffsets(const struct FMargin& ReturnValue);
	void GetLayout(const struct FAnchorData& ReturnValue);
	void GetAutoSize(bool ReturnValue);
	void GetAnchors(const struct FAnchors& ReturnValue);
	void GetAlignment(const struct FVector2D& ReturnValue);
};

// 0xB18 (0xD20 - 0x208)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x208(0x1)(None)
	uint8                                        Pad_18D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x20C(0x10)(ZeroConstructor)
	uint8                                        Pad_18D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x220(0xAD0)(ZeroConstructor)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xCF0(0x1)(None)
	enum class EButtonClickMethod                ClickMethod;                                       // 0xCF1(0x1)(None)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0xCF2(0x1)(None)
	enum class EButtonPressMethod                PressMethod;                                       // 0xCF3(0x1)(None)
	bool                                         IsFocusable;                                       // 0xCF4(0x1)(None)
	bool                                         bUseHoverSound;                                    // 0xCF5(0x1)(None)
	uint8                                        Pad_18D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0xCF8(0x10)(ZeroConstructor)
	uint8                                        Pad_18D8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCheckBox* GetDefaultObj();

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetIsChecked(bool InIsChecked);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	void IsPressed(bool ReturnValue);
	void IsChecked(bool ReturnValue);
	void GetCheckedState(enum class ECheckBoxState ReturnValue);
};

// 0x100 (0x2F0 - 0x1F0)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(None)
	float                                        Period;                                            // 0x1F4(0x4)(None)
	float                                        Radius;                                            // 0x1F8(0x4)(None)
	uint8                                        Pad_18E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(ZeroConstructor)
	bool                                         bEnableRadius;                                     // 0x2D0(0x1)(None)
	uint8                                        Pad_18E7[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCircularThrobber* GetDefaultObj();

	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int32 InNumberOfPieces);
};

// 0x7C0 (0x9B0 - 0x1F0)
// Class UMG.ComboBox
class UComboBox : public UWidget
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x1F0(0x770)(ZeroConstructor)
	TArray<class UObject*>                       Items;                                             // 0x960(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x970(0x10)(ZeroConstructor)
	bool                                         bIsFocusable;                                      // 0x980(0x1)(None)
	uint8                                        Pad_18EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x988(0x10)(ZeroConstructor)
	uint8                                        Pad_18ED[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComboBox* GetDefaultObj();

};

// 0x1BD0 (0x1DC0 - 0x1F0)
// Class UMG.ComboBoxKey
class UComboBoxKey : public UWidget
{
public:
	TArray<class FName>                          Options;                                           // 0x1F0(0x10)(None)
	class FName                                  SelectedOption;                                    // 0x200(0x8)(None)
	uint8                                        Pad_1902[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(ZeroConstructor)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(ZeroConstructor)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(ZeroConstructor)
	struct FSlateColor                           ForegroundColor;                                   // 0x1D30(0x14)(None)
	struct FMargin                               ContentPadding;                                    // 0x1D44(0x10)(None)
	float                                        MaxListHeight;                                     // 0x1D54(0x4)(None)
	bool                                         bHasDownArrow;                                     // 0x1D58(0x1)(None)
	bool                                         bEnableGamepadNavigationMode;                      // 0x1D59(0x1)(None)
	bool                                         bIsFocusable;                                      // 0x1D5A(0x1)(None)
	uint8                                        Pad_1904[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnGenerateContentWidget;                           // 0x1D5C(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnGenerateItemWidget;                              // 0x1D6C(0x10)(ZeroConstructor)
	uint8                                        Pad_1905[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1D80(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1D90(0x10)(ZeroConstructor)
	uint8                                        Pad_1906[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComboBoxKey* GetDefaultObj();

	void SetSelectedOption(class FName Option);
	void RemoveOption(class FName Option, bool ReturnValue);
	void OnSelectionChangedEvent__DelegateSignature(class FName SelectedItem, enum class ESelectInfo SelectionType);
	void OnOpeningEvent__DelegateSignature();
	void IsOpen(bool ReturnValue);
	void GetSelectedOption(class FName ReturnValue);
	void GenerateWidgetEvent__DelegateSignature(class FName Item, class UWidget* ReturnValue);
	void ClearSelection();
	void ClearOptions();
	void AddOption(class FName Option);
};

// 0x1C70 (0x1E60 - 0x1F0)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FText>                          DefaultOptions;                                    // 0x1F0(0x10)(None)
	class FString                                SelectedOption;                                    // 0x200(0x10)(None)
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x210(0x660)(ZeroConstructor)
	struct FTableRowStyle                        ItemStyle;                                         // 0x870(0xD50)(ZeroConstructor)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x15C0(0x770)(ZeroConstructor)
	struct FMargin                               ContentPadding;                                    // 0x1D30(0x10)(None)
	float                                        MaxListHeight;                                     // 0x1D40(0x4)(None)
	bool                                         HasDownArrow;                                      // 0x1D44(0x1)(None)
	bool                                         EnableGamepadNavigationMode;                       // 0x1D45(0x1)(None)
	uint8                                        Pad_1944[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x1D48(0x58)(ZeroConstructor)
	struct FSlateColor                           ForegroundColor;                                   // 0x1DA0(0x14)(None)
	bool                                         bIsFocusable;                                      // 0x1DB4(0x1)(None)
	uint8                                        Pad_1945[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x1DB8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1DC8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1DD8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnClosing;                                         // 0x1DE8(0x10)(ZeroConstructor)
	uint8                                        Pad_1946[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TextColorAndOpacity;                               // 0x1E48(0x14)(None)
	uint8                                        Pad_1947[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComboBoxString* GetDefaultObj();

	void SetSelectedOption(const class FString& Option);
	void SetSelectedIndex(int32 Index, enum class ESelectInfo SelectInfo);
	void RemoveOption(const class FString& Option, bool ReturnValue);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void OnOpeningEvent__DelegateSignature();
	void OnClosingEvent__DelegateSignature();
	void IsOpen(bool ReturnValue);
	void GetSelectedOption(const class FString& ReturnValue);
	void GetSelectedIndex(int32 ReturnValue);
	void GetOptionCount(int32 ReturnValue);
	void GetOptionAtIndex(int32 Index, const class FString& ReturnValue);
	void FindOptionIndex(const class FString& Option, int32 ReturnValue);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const class FString& Option);
};

// 0xE0 (0x2D0 - 0x1F0)
// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget
{
public:
	struct FVector2D                             EntrySpacing;                                      // 0x1F0(0x10)(None)
	TArray<struct FVector2D>                     SpacingPattern;                                    // 0x200(0x10)(None)
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x210(0x1)(None)
	uint8                                        Pad_195B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       EntrySizeRule;                                     // 0x214(0x8)(None)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x21C(0x1)(None)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x21D(0x1)(None)
	uint8                                        Pad_195D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxElementSize;                                    // 0x220(0x4)(None)
	struct FRadialBoxSettings                    RadialBoxSettings;                                 // 0x224(0x10)(None)
	uint8                                        Pad_195F[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x248(0x88)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDynamicEntryBoxBase* GetDefaultObj();

	void SetRadialSettings(const struct FRadialBoxSettings& InSettings);
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	void GetNumEntries(int32 ReturnValue);
	void GetAllEntries(const TArray<class UUserWidget*>& ReturnValue);
};

// 0x8 (0x2D8 - 0x2D0)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                EntryWidgetClass;                                  // 0x2D0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDynamicEntryBox* GetDefaultObj();

	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	void BP_CreateEntryOfClass(class UClass* EntryClass, class UUserWidget* ReturnValue);
	void BP_CreateEntry(class UUserWidget* ReturnValue);
};

// 0xF20 (0x1110 - 0x1F0)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x1F0(0x18)(None)
	FDelegateProperty_                           TextDelegate;                                      // 0x208(0x10)(ZeroConstructor)
	uint8                                        Pad_1993[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x220(0xE80)(ZeroConstructor)
	class FText                                  HintText;                                          // 0x10A0(0x18)(None)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x10B8(0x10)(ZeroConstructor)
	bool                                         IsReadOnly;                                        // 0x10C8(0x1)(None)
	bool                                         IsPassword;                                        // 0x10C9(0x1)(None)
	uint8                                        Pad_1998[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x10CC(0x4)(None)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x10D0(0x1)(None)
	bool                                         SelectAllTextWhenFocused;                          // 0x10D1(0x1)(None)
	bool                                         RevertTextOnEscape;                                // 0x10D2(0x1)(None)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x10D3(0x1)(None)
	bool                                         SelectAllTextOnCommit;                             // 0x10D4(0x1)(None)
	bool                                         AllowContextMenu;                                  // 0x10D5(0x1)(None)
	bool                                         ShouldHandleEscape;                                // 0x10D6(0x1)(None)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x10D7(0x1)(None)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D8(0x1)(None)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x10D9(0x1)(None)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10DA(0x1)(None)
	enum class ETextJustify                      Justification;                                     // 0x10DB(0x1)(None)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x10DC(0x1)(None)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x10DD(0x3)(None)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x10E0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x10F0(0x10)(ZeroConstructor)
	uint8                                        Pad_19A1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditableTextBox* GetDefaultObj();

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetJustification(enum class ETextJustify InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(class FText InText);
	void SetForegroundColor(const struct FLinearColor& Color);
	void SetError(class FText InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(class FText Text);
	void HasError(bool ReturnValue);
	void GetText(class FText ReturnValue);
	void ClearError();
};

// 0x310 (0x500 - 0x1F0)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_19BA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpandableAreaStyle                  Style;                                             // 0x200(0x1C0)(ZeroConstructor)
	struct FSlateBrush                           BorderBrush;                                       // 0x3C0(0xD0)(ZeroConstructor)
	struct FSlateColor                           BorderColor;                                       // 0x490(0x14)(None)
	bool                                         bIsExpanded;                                       // 0x4A4(0x1)(None)
	uint8                                        Pad_19BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHeight;                                         // 0x4A8(0x4)(None)
	struct FMargin                               HeaderPadding;                                     // 0x4AC(0x10)(None)
	struct FMargin                               AreaPadding;                                       // 0x4BC(0x10)(None)
	uint8                                        Pad_19BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExpansionChanged;                                // 0x4D0(0x10)(ZeroConstructor)
	class UWidget*                               HeaderContent;                                     // 0x4E0(0x8)(ZeroConstructor)
	class UWidget*                               BodyContent;                                       // 0x4E8(0x8)(ZeroConstructor)
	uint8                                        Pad_19C2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExpandableArea* GetDefaultObj();

	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	void GetIsExpanded(bool ReturnValue);
};

// 0x30 (0x238 - 0x208)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x208(0x10)(None)
	TArray<float>                                RowFill;                                           // 0x218(0x10)(None)
	uint8                                        Pad_1A72[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGridPanel* GetDefaultObj();

	void SetRowFill(int32 RowIndex, float Coefficient);
	void SetColumnFill(int32 ColumnIndex, float Coefficient);
	void AddChildToGrid(class UWidget* Content, int32 InRow, int32 InColumn, class UGridSlot* ReturnValue);
};

// 0x40 (0x78 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(None)
	uint8                                        Pad_1A94[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Row;                                               // 0x4C(0x4)(None)
	int32                                        RowSpan;                                           // 0x50(0x4)(None)
	int32                                        Column;                                            // 0x54(0x4)(None)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(None)
	int32                                        Layer;                                             // 0x5C(0x4)(None)
	struct FVector2D                             Nudge;                                             // 0x60(0x10)(None)
	uint8                                        Pad_1A95[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGridSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRowSpan(int32 InRowSpan);
	void SetRow(int32 InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int32 InLayer);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumnSpan(int32 InColumnSpan);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x218 - 0x208)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_1AA1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHorizontalBox* GetDefaultObj();

	void AddChildToHorizontalBox(class UWidget* Content, class UHorizontalBoxSlot* ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1AB1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       Size;                                              // 0x40(0x8)(None)
	struct FMargin                               Padding;                                           // 0x48(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(None)
	uint8                                        Pad_1AB2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHorizontalBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x7E0 (0x9D0 - 0x1F0)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x1F0(0x3F0)(ZeroConstructor)
	struct FTextBlockStyle                       TextStyle;                                         // 0x5E0(0x340)(ZeroConstructor)
	struct FInputChord                           SelectedKey;                                       // 0x920(0x20)(None)
	struct FMargin                               Margin;                                            // 0x940(0x10)(None)
	class FText                                  KeySelectionText;                                  // 0x950(0x18)(None)
	class FText                                  NoKeySpecifiedText;                                // 0x968(0x18)(None)
	bool                                         bAllowModifierKeys;                                // 0x980(0x1)(None)
	bool                                         bAllowGamepadKeys;                                 // 0x981(0x1)(None)
	uint8                                        Pad_1AD6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x988(0x10)(None)
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x998(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnIsSelectingKeyChanged;                           // 0x9A8(0x10)(ZeroConstructor)
	uint8                                        Pad_1AD7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputKeySelector* GetDefaultObj();

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(class FText InNoKeySpecifiedText);
	void SetKeySelectionText(class FText InKeySelectionText);
	void SetEscapeKeys(const TArray<struct FKey>& InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	void GetIsSelectingKey(bool ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x208(0x1)(None)
	uint8                                        Pad_1ADD[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInvalidationBox* GetDefaultObj();

	void SetCanCache(bool CanCache);
	void InvalidateCache();
	void GetCanCache(bool ReturnValue);
};

// 0x70 (0x278 - 0x208)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                MenuClass;                                         // 0x208(0x8)(ZeroConstructor)
	FDelegateProperty_                           OnGetMenuContentEvent;                             // 0x210(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnGetUserMenuContentEvent;                         // 0x220(0x10)(ZeroConstructor)
	enum class EMenuPlacement                    Placement;                                         // 0x230(0x1)(None)
	bool                                         bFitInWindow;                                      // 0x231(0x1)(None)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x232(0x1)(None)
	bool                                         UseApplicationMenuStack;                           // 0x233(0x1)(None)
	uint8                                        Pad_1AE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMenuOpenChanged;                                 // 0x238(0x10)(ZeroConstructor)
	uint8                                        Pad_1AEA[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Padding;                                           // 0x260(0x10)(None)
	bool                                         IgnoreClicksOutside;                               // 0x270(0x1)(None)
	uint8                                        Pad_1AEB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMenuAnchor* GetDefaultObj();

	void ToggleOpen(bool bFocusOnOpen);
	void ShouldOpenDueToClick(bool ReturnValue);
	void SetPlacement(enum class EMenuPlacement InPlacement);
	void SetIgnoreClicksOutside(bool Ignore);
	void Open(bool bFocusMenu);
	void IsOpen(bool ReturnValue);
	void HasOpenSubMenus(bool ReturnValue);
	void GetUserWidget__DelegateSignature(class UUserWidget* ReturnValue);
	void GetMenuPosition(const struct FVector2D& ReturnValue);
	void GetIsMenuAnchorOpen(bool ReturnValue);
	void GetIgnoreClicksOutside(bool ReturnValue);
	void FitInWindow(bool bFit);
	void Close();
};

// 0x3C0 (0x5D0 - 0x210)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(None)
	class FText                                  HintText;                                          // 0x228(0x18)(None)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(ZeroConstructor)
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x250(0x340)(ZeroConstructor)
	bool                                         bIsReadOnly;                                       // 0x590(0x1)(None)
	bool                                         SelectAllTextWhenFocused;                          // 0x591(0x1)(None)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x592(0x1)(None)
	bool                                         RevertTextOnEscape;                                // 0x593(0x1)(None)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x594(0x1)(None)
	bool                                         AllowContextMenu;                                  // 0x595(0x1)(None)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x596(0x1)(None)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x597(0x1)(None)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x598(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x5A8(0x10)(ZeroConstructor)
	uint8                                        Pad_1AF8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiLineEditableText* GetDefaultObj();

	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(class FText InHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText Text);
	void GetText(class FText ReturnValue);
	void GetHintText(class FText ReturnValue);
	void GetFont(const struct FSlateFontInfo& ReturnValue);
};

// 0xF00 (0x1110 - 0x210)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(None)
	class FText                                  HintText;                                          // 0x228(0x18)(None)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x240(0x10)(ZeroConstructor)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x250(0xE80)(ZeroConstructor)
	bool                                         bIsReadOnly;                                       // 0x10D0(0x1)(None)
	bool                                         AllowContextMenu;                                  // 0x10D1(0x1)(None)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x10D2(0x1)(None)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x10D3(0x1)(None)
	uint8                                        Pad_1B02[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x10D8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x10E8(0x10)(ZeroConstructor)
	uint8                                        Pad_1B03[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiLineEditableTextBox* GetDefaultObj();

	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(class FText InHintText);
	void SetForegroundColor(const struct FLinearColor& Color);
	void SetError(class FText InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText Text);
	void GetText(class FText ReturnValue);
	void GetHintText(class FText ReturnValue);
};

// 0x10 (0x218 - 0x208)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_1B05[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNamedSlot* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.NamedSlotInterface
class INamedSlotInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INamedSlotInterface* GetDefaultObj();

};

// 0x10 (0x200 - 0x1F0)
// Class UMG.NativeWidgetHost
class UNativeWidgetHost : public UWidget
{
public:
	uint8                                        Pad_1B08[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNativeWidgetHost* GetDefaultObj();

};

// 0x10 (0x218 - 0x208)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_1B0C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOverlay* GetDefaultObj();

	void ReplaceOverlayChildAt(int32 Index, class UWidget* Content, bool ReturnValue);
	void AddChildToOverlay(class UWidget* Content, class UOverlaySlot* ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_1B11[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x40(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(None)
	uint8                                        Pad_1B12[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOverlaySlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x300 (0x4F0 - 0x1F0)
// Class UMG.ProgressBar
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x1F0(0x290)(ZeroConstructor)
	float                                        Percent;                                           // 0x480(0x4)(None)
	enum class EProgressBarFillType              BarFillType;                                       // 0x484(0x1)(None)
	enum class EProgressBarFillStyle             BarFillStyle;                                      // 0x485(0x1)(None)
	bool                                         bIsMarquee;                                        // 0x486(0x1)(None)
	uint8                                        Pad_1D36[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BorderPadding;                                     // 0x488(0x10)(None)
	FDelegateProperty_                           PercentDelegate;                                   // 0x498(0x10)(ZeroConstructor)
	struct FLinearColor                          FillColorAndOpacity;                               // 0x4A8(0x10)(None)
	FDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x4B8(0x10)(ZeroConstructor)
	uint8                                        Pad_1D37[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInterpolatePercent;                               // 0x4DC(0x1)(None)
	uint8                                        Pad_1D38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpolatePercentSpeed;                           // 0x4E0(0x4)(None)
	uint8                                        Pad_1D39[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProgressBar* GetDefaultObj();

	void SetPercentInterpolationKey(int32 InterpKey);
	void SetPercent(float InPercent, int32 InterpKey);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetEnginePercent(float InPercent);
};

// 0x30 (0x238 - 0x208)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         bRetainRender;                                     // 0x208(0x1)(None)
	bool                                         RenderOnInvalidation;                              // 0x209(0x1)(None)
	bool                                         RenderOnPhase;                                     // 0x20A(0x1)(None)
	uint8                                        Pad_1D44[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Phase;                                             // 0x20C(0x4)(None)
	int32                                        PhaseCount;                                        // 0x210(0x4)(None)
	uint8                                        Pad_1D45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    EffectMaterial;                                    // 0x218(0x8)(ZeroConstructor)
	class FName                                  TextureParameter;                                  // 0x220(0x8)(None)
	uint8                                        Pad_1D46[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URetainerBox* GetDefaultObj();

	void SetTextureParameter(class FName TextureParameter);
	void SetRetainRendering(bool bInRetainRendering);
	void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	void GetEffectMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x208(0x1)(None)
	bool                                         PadRight;                                          // 0x209(0x1)(None)
	bool                                         PadTop;                                            // 0x20A(0x1)(None)
	bool                                         PadBottom;                                         // 0x20B(0x1)(None)
	uint8                                        Pad_1D58[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USafeZone* GetDefaultObj();

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// 0x38 (0x70 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(None)
	uint8                                        Pad_1D5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               SafeAreaScale;                                     // 0x3C(0x10)(None)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(None)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(None)
	uint8                                        Pad_1D5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x50(0x10)(None)
	uint8                                        Pad_1D5C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USafeZoneSlot* GetDefaultObj();

};

// 0x20 (0x228 - 0x208)
// Class UMG.ScaleBox
class UScaleBox : public UContentWidget
{
public:
	enum class EStretch                          Stretch;                                           // 0x208(0x1)(None)
	enum class EStretchDirection                 StretchDirection;                                  // 0x209(0x1)(None)
	uint8                                        Pad_1D62[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UserSpecifiedScale;                                // 0x20C(0x4)(None)
	bool                                         IgnoreInheritedScale;                              // 0x210(0x1)(None)
	uint8                                        Pad_1D63[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScaleBox* GetDefaultObj();

	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection InStretchDirection);
	void SetStretch(enum class EStretch InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// 0x18 (0x50 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(None)
	uint8                                        Pad_1D79[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScaleBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x7B0 (0x9A0 - 0x1F0)
// Class UMG.ScrollBar
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                       WidgetStyle;                                       // 0x1F0(0x770)(ZeroConstructor)
	bool                                         bAlwaysShowScrollbar;                              // 0x960(0x1)(None)
	bool                                         bAlwaysShowScrollbarTrack;                         // 0x961(0x1)(None)
	enum class EOrientation                      Orientation;                                       // 0x962(0x1)(None)
	uint8                                        Pad_1D7B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Thickness;                                         // 0x968(0x10)(None)
	struct FMargin                               Padding;                                           // 0x978(0x10)(None)
	uint8                                        Pad_1D7C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScrollBar* GetDefaultObj();

	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(None)
	struct FMargin                               Padding;                                           // 0x40(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(None)
	uint8                                        Pad_1D83[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScrollBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x38 (0x240 - 0x208)
// Class UMG.SizeBox
class USizeBox : public UContentWidget
{
public:
	uint8                                        Pad_1D8D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WidthOverride;                                     // 0x218(0x4)(None)
	float                                        HeightOverride;                                    // 0x21C(0x4)(None)
	float                                        MinDesiredWidth;                                   // 0x220(0x4)(None)
	float                                        MinDesiredHeight;                                  // 0x224(0x4)(None)
	float                                        MaxDesiredWidth;                                   // 0x228(0x4)(None)
	float                                        MaxDesiredHeight;                                  // 0x22C(0x4)(None)
	float                                        MinAspectRatio;                                    // 0x230(0x4)(None)
	float                                        MaxAspectRatio;                                    // 0x234(0x4)(None)
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_MinAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x238(0x1)(None)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x80, PropSize: 0x10x238(0x1)(None)
	uint8                                        Pad_1D8E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USizeBox* GetDefaultObj();

	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// 0x28 (0x60 - 0x38)
// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	uint8                                        Pad_1D92[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(None)
	uint8                                        Pad_1D93[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USizeBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x5B0 (0x7A0 - 0x1F0)
// Class UMG.Slider
class USlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(None)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ZeroConstructor)
	float                                        MinValue;                                          // 0x204(0x4)(None)
	float                                        MaxValue;                                          // 0x208(0x4)(None)
	uint8                                        Pad_1D96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          WidgetStyle;                                       // 0x210(0x500)(ZeroConstructor)
	enum class EOrientation                      Orientation;                                       // 0x710(0x1)(None)
	uint8                                        Pad_1D97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SliderBarColor;                                    // 0x714(0x10)(None)
	struct FLinearColor                          SliderHandleColor;                                 // 0x724(0x10)(None)
	bool                                         IndentHandle;                                      // 0x734(0x1)(None)
	bool                                         Locked;                                            // 0x735(0x1)(None)
	bool                                         MouseUsesStep;                                     // 0x736(0x1)(None)
	bool                                         RequiresControllerLock;                            // 0x737(0x1)(None)
	float                                        StepSize;                                          // 0x738(0x4)(None)
	bool                                         IsFocusable;                                       // 0x73C(0x1)(None)
	uint8                                        Pad_1D98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x740(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x750(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x760(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x770(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x780(0x10)(ZeroConstructor)
	uint8                                        Pad_1D99[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlider* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void GetValue(float ReturnValue);
	void GetNormalizedValue(float ReturnValue);
};

// 0x20 (0x210 - 0x1F0)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct FVector2D                             Size;                                              // 0x1F0(0x10)(None)
	uint8                                        Pad_1DA0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpacer* GetDefaultObj();

	void SetSize(const struct FVector2D& InSize);
};

// 0x720 (0x910 - 0x1F0)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(None)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ZeroConstructor)
	uint8                                        Pad_1DC5[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpinBoxStyle                         WidgetStyle;                                       // 0x210(0x600)(ZeroConstructor)
	int32                                        MinFractionalDigits;                               // 0x810(0x4)(None)
	int32                                        MaxFractionalDigits;                               // 0x814(0x4)(None)
	bool                                         bAlwaysUsesDeltaSnap;                              // 0x818(0x1)(None)
	bool                                         bEnableSlider;                                     // 0x819(0x1)(None)
	uint8                                        Pad_1DC6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Delta;                                             // 0x81C(0x4)(None)
	float                                        SliderExponent;                                    // 0x820(0x4)(None)
	uint8                                        Pad_1DC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x828(0x58)(ZeroConstructor)
	enum class ETextJustify                      Justification;                                     // 0x880(0x1)(None)
	uint8                                        Pad_1DC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDesiredWidth;                                   // 0x884(0x4)(None)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x888(0x1)(None)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x889(0x1)(None)
	bool                                         SelectAllTextOnCommit;                             // 0x88A(0x1)(None)
	uint8                                        Pad_1DCB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           ForegroundColor;                                   // 0x88C(0x14)(None)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x8A0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnValueCommitted;                                  // 0x8B0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x8C0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x8D0(0x10)(ZeroConstructor)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x8E0(0x1)(None)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x8E0(0x1)(None)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x8E0(0x1)(None)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x8E0(0x1)(None)
	uint8                                        BitPad_147 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x8E4(0x4)(None)
	float                                        MaxValue;                                          // 0x8E8(0x4)(None)
	float                                        MinSliderValue;                                    // 0x8EC(0x4)(None)
	float                                        MaxSliderValue;                                    // 0x8F0(0x4)(None)
	uint8                                        Pad_1DCD[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpinBox* GetDefaultObj();

	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMinFractionalDigits(int32 NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetMaxFractionalDigits(int32 NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDelta(float NewValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	void GetValue(float ReturnValue);
	void GetMinValue(float ReturnValue);
	void GetMinSliderValue(float ReturnValue);
	void GetMinFractionalDigits(int32 ReturnValue);
	void GetMaxValue(float ReturnValue);
	void GetMaxSliderValue(float ReturnValue);
	void GetMaxFractionalDigits(int32 ReturnValue);
	void GetDelta(float ReturnValue);
	void GetAlwaysUsesDeltaSnap(bool ReturnValue);
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// 0x18 (0x220 - 0x208)
// Class UMG.StackBox
class UStackBox : public UPanelWidget
{
public:
	enum class EOrientation                      Orientation;                                       // 0x208(0x1)(None)
	uint8                                        Pad_1DD5[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStackBox* GetDefaultObj();

	void ReplaceStackBoxChildAt(int32 Index, class UWidget* Content, bool ReturnValue);
	void AddChildToStackBox(class UWidget* Content, class UStackBoxSlot* ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.StackBoxSlot
class UStackBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(None)
	uint8                                        Pad_1DD8[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStackBoxSlot* GetDefaultObj();

};

// 0x510 (0x720 - 0x210)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x210(0x18)(None)
	FDelegateProperty_                           TextDelegate;                                      // 0x228(0x10)(ZeroConstructor)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x238(0x14)(None)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x24C(0x10)(ZeroConstructor)
	uint8                                        Pad_1DE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x260(0x58)(ZeroConstructor)
	uint8                                        Pad_1DE2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           StrikeBrush;                                       // 0x2C0(0xD0)(ZeroConstructor)
	struct FVector2D                             ShadowOffset;                                      // 0x390(0x10)(None)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x3A0(0x10)(None)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x3B0(0x10)(ZeroConstructor)
	float                                        MinDesiredWidth;                                   // 0x3C0(0x4)(None)
	bool                                         bWrapWithInvalidationPanel;                        // 0x3C4(0x1)(None)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x3C5(0x1)(None)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x3C6(0x1)(None)
	bool                                         CenterVertically;                                  // 0x3C7(0x1)(None)
	bool                                         bDisableInternalClipping;                          // 0x3C8(0x1)(None)
	bool                                         DontApplyDisabledEffect;                           // 0x3C9(0x1)(None)
	bool                                         bAutoWrapText;                                     // 0x3CA(0x1)(None)
	bool                                         bSimpleTextMode;                                   // 0x3CB(0x1)(None)
	uint8                                        Pad_1DE5[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x3E0(0x340)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetString(const class FString& InString);
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	void GetText(class FText ReturnValue);
	void GetDynamicOutlineMaterial(class UMaterialInstanceDynamic* ReturnValue);
	void GetDynamicFontMaterial(class UMaterialInstanceDynamic* ReturnValue);
};

// 0xF0 (0x2E0 - 0x1F0)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x1F0(0x4)(None)
	bool                                         bAnimateHorizontally;                              // 0x1F4(0x1)(None)
	bool                                         bAnimateVertically;                                // 0x1F5(0x1)(None)
	bool                                         bAnimateOpacity;                                   // 0x1F6(0x1)(None)
	uint8                                        Pad_1DE8[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x200(0xD0)(ZeroConstructor)
	uint8                                        Pad_1DE9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UThrobber* GetDefaultObj();

	void SetNumberOfPieces(int32 InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// 0x20 (0xCF0 - 0xCD0)
// Class UMG.TileView
class UTileView : public UListView
{
public:
	float                                        EntryHeight;                                       // 0xCD0(0x4)(None)
	float                                        EntryWidth;                                        // 0xCD4(0x4)(None)
	enum class EListItemAlignment                TileAlignment;                                     // 0xCD8(0x1)(None)
	bool                                         bWrapHorizontalNavigation;                         // 0xCD9(0x1)(None)
	uint8                                        Pad_1DF7[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTileView* GetDefaultObj();

	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
	void GetEntryWidth(float ReturnValue);
	void GetEntryHeight(float ReturnValue);
};

// 0x60 (0xD30 - 0xCD0)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_1E0C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           BP_OnGetItemChildren;                              // 0xCE0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            BP_OnItemExpansionChanged;                         // 0xCF0(0x10)(ZeroConstructor)
	uint8                                        Pad_1E0D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTreeView* GetDefaultObj();

	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// 0x28 (0x230 - 0x208)
// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                               SlotPadding;                                       // 0x208(0x10)(None)
	float                                        MinDesiredSlotWidth;                               // 0x218(0x4)(None)
	float                                        MinDesiredSlotHeight;                              // 0x21C(0x4)(None)
	uint8                                        Pad_1E11[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUniformGridPanel* GetDefaultObj();

	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	void AddChildToUniformGrid(class UWidget* Content, int32 InRow, int32 InColumn, class UUniformGridSlot* ReturnValue);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(None)
	uint8                                        Pad_1E16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Row;                                               // 0x3C(0x4)(None)
	int32                                        Column;                                            // 0x40(0x4)(None)
	uint8                                        Pad_1E18[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUniformGridSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRow(int32 InRow);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x218 - 0x208)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_1E1B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVerticalBox* GetDefaultObj();

	void AddChildToVerticalBox(class UWidget* Content, class UVerticalBoxSlot* ReturnValue);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(None)
	struct FMargin                               Padding;                                           // 0x40(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(None)
	uint8                                        Pad_1E33[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVerticalBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x50 (0x258 - 0x208)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                          BackgroundColor;                                   // 0x208(0x10)(None)
	uint8                                        Pad_1E4B[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UViewport* GetDefaultObj();

	void Spawn(class UClass* ActorClass, class AActor* ReturnValue);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	void GetViewRotation(const struct FRotator& ReturnValue);
	void GetViewportWorld(class UWorld* ReturnValue);
	void GetViewLocation(const struct FVector& ReturnValue);
};

// 0x140 (0x800 - 0x6C0)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x6C0(0x1)(None)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x6C1(0x1)(None)
	uint8                                        Pad_1EA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                WidgetClass;                                       // 0x6C8(0x8)(ZeroConstructor)
	struct FIntPoint                             DrawSize;                                          // 0x6D0(0x8)(None)
	bool                                         bManuallyRedraw;                                   // 0x6D8(0x1)(None)
	bool                                         bRedrawRequested;                                  // 0x6D9(0x1)(None)
	uint8                                        Pad_1EA5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RedrawTime;                                        // 0x6DC(0x4)(None)
	uint8                                        Pad_1EA6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CurrentDrawSize;                                   // 0x6E8(0x8)(None)
	bool                                         bDrawAtDesiredSize;                                // 0x6F0(0x1)(None)
	uint8                                        Pad_1EA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Pivot;                                             // 0x6F8(0x10)(None)
	bool                                         bReceiveHardwareInput;                             // 0x708(0x1)(None)
	bool                                         bWindowFocusable;                                  // 0x709(0x1)(None)
	enum class EWindowVisibility                 WindowVisibility;                                  // 0x70A(0x1)(None)
	bool                                         bApplyGammaCorrection;                             // 0x70B(0x1)(None)
	uint8                                        Pad_1EA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x710(0x8)(ZeroConstructor)
	struct FLinearColor                          BackgroundColor;                                   // 0x718(0x10)(None)
	struct FLinearColor                          TintColorAndOpacity;                               // 0x728(0x10)(None)
	float                                        OpacityFromTexture;                                // 0x738(0x4)(None)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x73C(0x1)(None)
	bool                                         bIsTwoSided;                                       // 0x73D(0x1)(None)
	bool                                         TickWhenOffscreen;                                 // 0x73E(0x1)(None)
	uint8                                        Pad_1EA9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0x740(0x8)(ZeroConstructor)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x748(0x8)(ZeroConstructor)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x750(0x8)(ZeroConstructor)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x758(0x8)(ZeroConstructor)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x760(0x8)(ZeroConstructor)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x768(0x8)(ZeroConstructor)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x770(0x8)(ZeroConstructor)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x778(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x780(0x8)(ZeroConstructor)
	bool                                         bAddedToScreen;                                    // 0x788(0x1)(None)
	bool                                         bEditTimeUsable;                                   // 0x789(0x1)(None)
	uint8                                        Pad_1EAB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SharedLayerName;                                   // 0x78C(0x8)(None)
	int32                                        LayerZOrder;                                       // 0x794(0x4)(None)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x798(0x1)(None)
	uint8                                        Pad_1EAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CylinderArcAngle;                                  // 0x79C(0x4)(None)
	enum class ETickMode                         TickMode;                                          // 0x7A0(0x1)(None)
	uint8                                        Pad_1EAD[0x2F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Widget;                                            // 0x7D0(0x8)(ZeroConstructor)
	uint8                                        Pad_1EAE[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetComponent* GetDefaultObj();

	void SetWindowVisibility(enum class EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(enum class EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetTickMode(enum class ETickMode InTickMode);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(const struct FVector2D& InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct FVector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRenderUpdate();
	void RequestRedraw();
	void IsWidgetVisible(bool ReturnValue);
	void GetWindowVisiblility(enum class EWindowVisibility ReturnValue);
	void GetWindowFocusable(bool ReturnValue);
	void GetWidgetSpace(enum class EWidgetSpace ReturnValue);
	void GetWidget(class UUserWidget* ReturnValue);
	void GetUserWidgetObject(class UUserWidget* ReturnValue);
	void GetTwoSided(bool ReturnValue);
	void GetTickWhenOffscreen(bool ReturnValue);
	void GetRenderTarget(class UTextureRenderTarget2D* ReturnValue);
	void GetRedrawTime(float ReturnValue);
	void GetPivot(const struct FVector2D& ReturnValue);
	void GetOwnerPlayer(class ULocalPlayer* ReturnValue);
	void GetMaterialInstance(class UMaterialInstanceDynamic* ReturnValue);
	void GetManuallyRedraw(bool ReturnValue);
	void GetGeometryMode(enum class EWidgetGeometryMode ReturnValue);
	void GetDrawSize(const struct FVector2D& ReturnValue);
	void GetDrawAtDesiredSize(bool ReturnValue);
	void GetCylinderArcAngle(float ReturnValue);
	void GetCurrentDrawSize(const struct FVector2D& ReturnValue);
};

// 0x2D8 (0x5A0 - 0x2C8)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnHoveredWidgetChanged;                            // 0x2C8(0x10)(ZeroConstructor)
	uint8                                        Pad_1EE4[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualUserIndex;                                  // 0x2E8(0x4)(None)
	int32                                        PointerIndex;                                      // 0x2EC(0x4)(None)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x2F0(0x1)(None)
	uint8                                        Pad_1EE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractionDistance;                               // 0x2F4(0x4)(None)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x2F8(0x1)(None)
	bool                                         bEnableHitTesting;                                 // 0x2F9(0x1)(None)
	bool                                         bShowDebug;                                        // 0x2FA(0x1)(None)
	uint8                                        Pad_1EE6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugSphereLineThickness;                          // 0x2FC(0x4)(None)
	float                                        DebugLineThickness;                                // 0x300(0x4)(None)
	struct FLinearColor                          DebugColor;                                        // 0x304(0x10)(None)
	uint8                                        Pad_1EEF[0x7C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CustomHitResult;                                   // 0x390(0xF0)(ZeroConstructor)
	struct FVector2D                             LocalHitLocation;                                  // 0x480(0x10)(None)
	struct FVector2D                             LastLocalHitLocation;                              // 0x490(0x10)(None)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x4A0(0x8)(ZeroConstructor)
	struct FHitResult                            LastHitResult;                                     // 0x4A8(0xF0)(ZeroConstructor)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x598(0x1)(None)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x599(0x1)(None)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x59A(0x1)(None)
	uint8                                        Pad_1EF1[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetInteractionComponent* GetDefaultObj();

	void SetFocus(class UWidget* FocusWidget);
	void SetCustomHitResult(const struct FHitResult& HitResult);
	void SendKeyChar(const class FString& Characters, bool bRepeat, bool ReturnValue);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	void ReleaseKey(const struct FKey& Key, bool ReturnValue);
	void PressPointerKey(const struct FKey& Key);
	void PressKey(const struct FKey& Key, bool bRepeat, bool ReturnValue);
	void PressAndReleaseKey(const struct FKey& Key, bool ReturnValue);
	void IsOverInteractableWidget(bool ReturnValue);
	void IsOverHitTestVisibleWidget(bool ReturnValue);
	void IsOverFocusableWidget(bool ReturnValue);
	void GetLastHitResult(const struct FHitResult& ReturnValue);
	void GetHoveredWidgetComponent(class UWidgetComponent* ReturnValue);
	void Get2DHitLocation(const struct FVector2D& ReturnValue);
};

// 0x18 (0x220 - 0x208)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x208(0x4)(None)
	uint8                                        Pad_1F03[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetSwitcher* GetDefaultObj();

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void GetWidgetAtIndex(int32 Index, class UWidget* ReturnValue);
	void GetNumWidgets(int32 ReturnValue);
	void GetActiveWidgetIndex(int32 ReturnValue);
	void GetActiveWidget(class UWidget* ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1F06[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x40(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(None)
	uint8                                        Pad_1F07[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWidgetSwitcherSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x20 (0x228 - 0x208)
// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                         bWindowButtonsEnabled;                             // 0x208(0x1)(None)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x209(0x1)(None)
	uint8                                        Pad_1F09[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWindowTitleBarArea* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(None)
	uint8                                        Pad_1F0D[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWindowTitleBarAreaSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x230 - 0x208)
// Class UMG.WrapBox
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                             InnerSlotPadding;                                  // 0x208(0x10)(None)
	float                                        WrapSize;                                          // 0x218(0x4)(None)
	bool                                         bExplicitWrapSize;                                 // 0x21C(0x1)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x21D(0x1)(None)
	enum class EOrientation                      Orientation;                                       // 0x21E(0x1)(None)
	uint8                                        Pad_1F15[0x11];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWrapBox* GetDefaultObj();

	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void AddChildToWrapBox(class UWidget* Content, class UWrapBoxSlot* ReturnValue);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(None)
	float                                        FillSpanWhenLessThan;                              // 0x48(0x4)(None)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x4C(0x1)(None)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x4D(0x1)(None)
	bool                                         bFillEmptySpace;                                   // 0x4E(0x1)(None)
	bool                                         bForceNewLine;                                     // 0x4F(0x1)(None)
	uint8                                        Pad_1F19[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWrapBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetNewLine(bool InForceNewLine);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// 0x68 (0x90 - 0x28)
// Class UMG.DragDropOperation
class UDragDropOperation : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(None)
	class UObject*                               Payload;                                           // 0x38(0x8)(ZeroConstructor)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(ZeroConstructor)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(None)
	uint8                                        Pad_1F1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0x50(0x10)(None)
	FMulticastInlineDelegateProperty_            OnDrop;                                            // 0x60(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnDragCancelled;                                   // 0x70(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x80(0x10)(None)

	static class UClass* StaticClass();
	static class UDragDropOperation* GetDefaultObj();

	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// 0x0 (0x28 - 0x28)
// Class UMG.SlateBlueprintLibrary
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USlateBlueprintLibrary* GetDefaultObj();

	void TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector, const struct FVector2D& ReturnValue);
	void TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector, const struct FVector2D& ReturnValue);
	void TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar, float ReturnValue);
	void TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar, float ReturnValue);
	void ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, const struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition);
	void ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, const struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);
	void ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, const struct FVector2D& ViewportPosition);
	void LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, const struct FVector2D& PixelPosition, const struct FVector2D& ViewportPosition);
	void LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, const struct FVector2D& ReturnValue);
	void IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate, bool ReturnValue);
	void GetLocalTopLeft(const struct FGeometry& Geometry, const struct FVector2D& ReturnValue);
	void GetLocalSize(const struct FGeometry& Geometry, const struct FVector2D& ReturnValue);
	void GetAbsoluteSize(const struct FGeometry& Geometry, const struct FVector2D& ReturnValue);
	void EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B, bool ReturnValue);
	void AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, const struct FVector2D& PixelPosition, const struct FVector2D& ViewportPosition);
	void AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate, const struct FVector2D& ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>              VertexData;                                        // 0x28(0x10)(None)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(None)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(None)
	struct FVector2D                             ExtentMin;                                         // 0x50(0x10)(None)
	struct FVector2D                             ExtentMax;                                         // 0x60(0x10)(None)

	static class UClass* StaticClass();
	static class USlateVectorArtData* GetDefaultObj();

};

// 0x80 (0x3F0 - 0x370)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x370(0x8)(ZeroConstructor)
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                        // 0x378(0x10)(ZeroConstructor)
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x388(0x10)(None)
	uint8                                        Pad_1F2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x1, PropSize: 0x10x39C(0x1)(None)
	uint8                                        BitPad_15F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDelegateRuntimeBinding>       Bindings;                                          // 0x3A0(0x10)(ZeroConstructor)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x3B0(0x10)(ZeroConstructor)
	TArray<class FName>                          NamedSlots;                                        // 0x3C0(0x10)(None)
	TArray<class FName>                          AvailableNamedSlots;                               // 0x3D0(0x10)(None)
	TArray<class FName>                          InstanceNamedSlots;                                // 0x3E0(0x10)(None)

	static class UClass* StaticClass();
	static class UWidgetBlueprintGeneratedClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintLibrary
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetBlueprintLibrary* GetDefaultObj();

	void UnlockMouse(const struct FEventReply& Reply, const struct FEventReply& ReturnValue);
	void Unhandled(const struct FEventReply& ReturnValue);
	void SetWindowTitleBarState(class UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate);
	void SetWindowTitleBarCloseButtonActive(bool bActive);
	void SetUserFocus(const struct FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers, const struct FEventReply& ReturnValue);
	void SetMousePosition(const struct FEventReply& Reply, const struct FVector2D& NewMousePosition, const struct FEventReply& ReturnValue);
	void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bFlushInput);
	void SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput);
	void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput);
	void SetHardwareCursor(class UObject* WorldContextObject, enum class EMouseCursor CursorShape, class FName CursorName, const struct FVector2D& HotSpot, bool ReturnValue);
	void SetFocusToGameViewport();
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	void SetBrushResourceToTexture(const struct FSlateBrush& Brush, class UTexture2D* Texture);
	void SetBrushResourceToMaterial(const struct FSlateBrush& Brush, class UMaterialInterface* Material);
	void RestorePreviousWindowTitleBarState();
	void ReleaseMouseCapture(const struct FEventReply& Reply, const struct FEventReply& ReturnValue);
	void ReleaseJoystickCapture(const struct FEventReply& Reply, bool bInAllJoysticks, const struct FEventReply& ReturnValue);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	void NoResourceBrush(const struct FSlateBrush& ReturnValue);
	void MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height, const struct FSlateBrush& ReturnValue);
	void MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height, const struct FSlateBrush& ReturnValue);
	void MakeBrushFromAsset(class USlateBrushAsset* BrushAsset, const struct FSlateBrush& ReturnValue);
	void LockMouse(const struct FEventReply& Reply, class UWidget* CapturingWidget, const struct FEventReply& ReturnValue);
	void IsDragDropping(bool ReturnValue);
	void Handled(const struct FEventReply& ReturnValue);
	void GetSafeZonePadding(class UObject* WorldContextObject, const struct FVector4& SafePadding, const struct FVector2D& SafePaddingScale, const struct FVector4& SpillOverPadding);
	void GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event, const struct FKeyEvent& ReturnValue);
	void GetInputEventFromPointerEvent(const struct FPointerEvent& Event, const struct FInputEvent& ReturnValue);
	void GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event, const struct FInputEvent& ReturnValue);
	void GetInputEventFromKeyEvent(const struct FKeyEvent& Event, const struct FInputEvent& ReturnValue);
	void GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event, const struct FInputEvent& ReturnValue);
	void GetDynamicMaterial(const struct FSlateBrush& Brush, class UMaterialInstanceDynamic* ReturnValue);
	void GetDragDroppingContent(class UDragDropOperation* ReturnValue);
	void GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush, class UTexture2D* ReturnValue);
	void GetBrushResourceAsMaterial(const struct FSlateBrush& Brush, class UMaterialInterface* ReturnValue);
	void GetBrushResource(const struct FSlateBrush& Brush, class UObject* ReturnValue);
	void GetAllWidgetsWithInterface(class UObject* WorldContextObject, const TArray<class UUserWidget*>& FoundWidgets, class UClass* Interface, class UClass* OutWidgetClass, bool TopLevelOnly);
	void GetAllWidgetsOfClass(class UObject* WorldContextObject, const TArray<class UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	void EndDragDrop(const struct FEventReply& Reply, const struct FEventReply& ReturnValue);
	void DrawTextFormatted(const struct FPaintContext& Context, class FText Text, const struct FVector2D& Position, class UFont* Font, int32 FontSize, class FName FontTypeFace, const struct FLinearColor& Tint);
	void DrawText(const struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	void DrawSpline(const struct FPaintContext& Context, const struct FVector2D& Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir, const struct FLinearColor& Tint, float Thickness);
	void DrawLines(const struct FPaintContext& Context, const TArray<struct FVector2D>& Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	void DrawLine(const struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	void DrawBox(const struct FPaintContext& Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	void DismissAllMenus();
	void DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, const struct FEventReply& ReturnValue);
	void DetectDrag(const struct FEventReply& Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, const struct FEventReply& ReturnValue);
	void CreateDragDropOperation(class UClass* OperationClass, class UDragDropOperation* ReturnValue);
	void Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer, class UUserWidget* ReturnValue);
	void ClearUserFocus(const struct FEventReply& Reply, bool bInAllUsers, const struct FEventReply& ReturnValue);
	void CaptureMouse(const struct FEventReply& Reply, class UWidget* CapturingWidget, const struct FEventReply& ReturnValue);
	void CaptureJoystick(const struct FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks, const struct FEventReply& ReturnValue);
	void CancelDragDrop();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetLayoutLibrary* GetDefaultObj();

	void SlotAsWrapBoxSlot(class UWidget* Widget, class UWrapBoxSlot* ReturnValue);
	void SlotAsWidgetSwitcherSlot(class UWidget* Widget, class UWidgetSwitcherSlot* ReturnValue);
	void SlotAsVerticalBoxSlot(class UWidget* Widget, class UVerticalBoxSlot* ReturnValue);
	void SlotAsUniformGridSlot(class UWidget* Widget, class UUniformGridSlot* ReturnValue);
	void SlotAsSizeBoxSlot(class UWidget* Widget, class USizeBoxSlot* ReturnValue);
	void SlotAsScrollBoxSlot(class UWidget* Widget, class UScrollBoxSlot* ReturnValue);
	void SlotAsScaleBoxSlot(class UWidget* Widget, class UScaleBoxSlot* ReturnValue);
	void SlotAsSafeBoxSlot(class UWidget* Widget, class USafeZoneSlot* ReturnValue);
	void SlotAsOverlaySlot(class UWidget* Widget, class UOverlaySlot* ReturnValue);
	void SlotAsHorizontalBoxSlot(class UWidget* Widget, class UHorizontalBoxSlot* ReturnValue);
	void SlotAsGridSlot(class UWidget* Widget, class UGridSlot* ReturnValue);
	void SlotAsCanvasSlot(class UWidget* Widget, class UCanvasPanelSlot* ReturnValue);
	void SlotAsBorderSlot(class UWidget* Widget, class UBorderSlot* ReturnValue);
	void RemoveAllWidgets(class UObject* WorldContextObject);
	void ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, const struct FVector2D& ScreenPosition, bool bPlayerViewportRelative, bool ReturnValue);
	void GetViewportWidgetGeometry(class UObject* WorldContextObject, const struct FGeometry& ReturnValue);
	void GetViewportSize(class UObject* WorldContextObject, const struct FVector2D& ReturnValue);
	void GetViewportScale(class UObject* WorldContextObject, float ReturnValue);
	void GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController, const struct FGeometry& ReturnValue);
	void GetMousePositionScaledByDPI(class APlayerController* Player, float LocationX, float LocationY, bool ReturnValue);
	void GetMousePositionOnViewport(class UObject* WorldContextObject, const struct FVector2D& ReturnValue);
	void GetMousePositionOnPlatform(const struct FVector2D& ReturnValue);
};

// 0x60 (0x88 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	uint8                                        Pad_1FAD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               RootWidget;                                        // 0x30(0x8)(ZeroConstructor)
	TMap<class FName, class UWidget*>            NamedSlotBindings;                                 // 0x38(0x50)(None)

	static class UClass* StaticClass();
	static class UWidgetTree* GetDefaultObj();

};

}


