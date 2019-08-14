//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardKeyplaneTransitionDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewIntersectionDelegate-Protocol.h>

@class CADisplayLink, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIInputViewPostPinningReloadState, UIInputViewSet, UIInputViewTransition, UIKeyboardAutomatic, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder, UIScrollView, UITextEffectsWindow, UITextInputMode, UIView;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate>
{
    UIPeripheralHostView *_hostView;
    UIKeyboardAutomatic *_automaticKeyboard;
    BOOL _automaticAppearanceEnabled;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _ignoringReloadInputViews;
    int _ignoredReloads;
    BOOL _suppresingNotifications;
    BOOL _useHideNotificationsWhenNotVisible;
    BOOL _reloadInputViewsForcedIsAllowed;
    int _nextAutomaticOrderInDirection;
    long long _targetRotatedOrientation;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _isUndocked;
    BOOL _splitLockState;
    UIPanGestureRecognizer *_translateRecognizer;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    struct CGAffineTransform _targetTransform;
    struct CGAffineTransform _initialTransform;
    struct CGPoint _velocity;
    NSMutableArray *_dropShadowViews;
    NSDate *__transitionStartTime;
    int _shadowStyle;
    BOOL _wasBackgroundSplit;
    struct CGRect _previousShadowFrameLeft;
    struct CGRect _previousShadowFrameRight;
    CDUnknownBlockType _bounceCompletionBlock;
    double m_keyboardAttachedViewHeight;
    struct CGRect _lastKnownIVFrame;
    struct CGRect _lastKnownIAVFrame;
    NSMutableArray *_animationStyleStack;
    BOOL _hasCustomAnimationProperties;
    double _nextAutomaticOrderInDuration;
    double _lastAutomaticKeyboardDuration;
    long long _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    UIInputViewSet *_inputViewSet;
    UIResponder *_responder;
    NSMutableSet *_pinningResponders;
    BOOL _ignoresPinning;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    BOOL _animationFencingEnabled;
    BOOL _interfaceAutorotationDisabled;
    UIKeyboardRotationState *_rotationState;
    UIInputViewTransition *_currentTransition;
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    UIInputViewTransition *_scrollViewTransition;
    BOOL _scrollViewTransitionFinishing;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    struct CGPoint _scrollViewTransitionVelocity;
    UIResponder *_selfHostingTrigger;
    NSMutableDictionary *_preservedViewSets;
    NSMutableDictionary *_persistentInputAccessoryResponders;
    NSMutableArray *_persistentInputAccessoryResponderOrder;
    BOOL _didFadeInputViews;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _allowNilResponderReload;
    BOOL _animateCornerRefresh;
    BOOL _showCorners;
    NSMutableArray *_extraViews;
    int _clippingKeyboardMode;
    struct CGRect _clippingKeyboardAdjustmentStart;
    struct CGRect _clippingKeyboardAdjustmentEnd;
    double _ambiguousControlCenterActivationMargin;
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;
    UITextEffectsWindow *_containerWindow;
    int _hostedAnimationToggleCount;
    int _deactivationCount;
    BOOL _dontNeedAssistantBar;
    CDUnknownBlockType _deferredTransitionTask;
    double _lastKeyplaneResize;
    int _currentState;
    UIInputViewSet *_transientInputViewSet;
    UITextInputMode *_documentInputMode;
}

+ (void)_releaseSharedInstance;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGRect)screenBoundsInAppOrientation;
+ (id)endPlacementForInputViewSet:(id)arg1;
+ (id)passthroughViews;
+ (double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;
+ (struct CGPoint)defaultUndockedOffset;
+ (BOOL)pointIsWithinKeyboardContent:(struct CGPoint)arg1;
+ (struct CGRect)visiblePeripheralFrame;
+ (struct CGRect)visibleInputViewFrame;
+ (BOOL)inputViewSetContainsView:(id)arg1;
+ (Class)hostViewClass;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // @synthesize postPinningReloadState=_postPinningReloadState;
@property(retain, nonatomic) UIResponder *selfHostingTrigger; // @synthesize selfHostingTrigger=_selfHostingTrigger;
@property(retain, nonatomic) UIInputViewSet *_transientInputViews; // @synthesize _transientInputViews=_transientInputViewSet;
@property(retain, nonatomic) UIInputViewSet *_inputViews; // @synthesize _inputViews=_inputViewSet;
@property(nonatomic) double lastKeyplaneResize; // @synthesize lastKeyplaneResize=_lastKeyplaneResize;
@property(nonatomic) BOOL animationFencingEnabled; // @synthesize animationFencingEnabled=_animationFencingEnabled;
@property(retain, nonatomic) UIInputViewTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) UIKeyboardRotationState *rotationState; // @synthesize rotationState=_rotationState;
@property(nonatomic) BOOL automaticAppearanceEnabled; // @synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2;
- (id)nextAnimationStyle:(BOOL)arg1;
- (id)nextAnimationStyle;
- (void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (void)orderOutAutomaticExceptAccessoryView;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderOutAutomaticSkippingAnimation;
- (void)orderOutAutomatic;
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderInAutomaticSkippingAnimation;
- (void)orderInAutomatic;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderOutAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderInAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderOutAutomatic;
- (void)forceOrderInAutomatic;
- (void)layoutIfNeeded;
- (void)layoutInputViews;
- (void)layoutInputViewsForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
@property(readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
- (void)createAutomaticKeyboardIfNeeded;
@property(readonly, nonatomic) BOOL animationsEnabled;
- (void)finishRotationOfKeyboard:(id)arg1;
- (void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2;
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2;
- (void)finishRotation;
- (void)rotateToOrientation:(long long)arg1;
- (void)prepareForRotationToOrientation:(long long)arg1;
- (struct CGRect)_centerStretchRectForWidth:(double)arg1;
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)arg1;
- (void)updateBackdrop;
- (void)updateDropShadow;
- (void)showDropShadows:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)translateDetected:(id)arg1;
- (void)disableInterfaceAutorotation:(BOOL)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (void)invalidateDisplayLink;
- (void)bounceAnimationDidFinish;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForTransition;
- (void)showInputViewsIfNeeded;
- (void)fadeInputViewsIfNeeded;
- (void)fadeInInputViews:(BOOL)arg1;
- (BOOL)isUndocked;
- (void)undock;
- (void)dock;
- (void)refreshCorners;
- (void)_performRefreshCorners;
- (void)showCorners:(BOOL)arg1 withDuration:(double)arg2;
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;
- (void)postUndockingNotification;
- (void)postDockingNotification;
- (void)postDidHideNotification;
- (void)postDidShowNotification;
@property(retain, nonatomic) UIPeripheralHostState *targetState;
- (void)manualKeyboardWasOrderedOut:(id)arg1;
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;
- (void)manualKeyboardWasOrderedIn:(id)arg1;
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;
- (BOOL)isOffScreen;
- (BOOL)isOnScreen;
- (void)setKeyboardFencingEnabled:(BOOL)arg1;
- (void)_onScreenStateDidChange;
- (void)setKeyboardOnScreenNotifyKey:(BOOL)arg1;
- (id)retain;
- (void)createHostViewIfNeeded;
- (void)updateRenderConfigForResponder:(id)arg1;
- (void)updateRenderConfigForCurrentResponder;
- (void)inputModeChangedForRenderConfig:(id)arg1;
- (id)_renderConfigForResponder:(id)arg1;
- (id)_renderConfigForCurrentResponder;
- (void)initializeTranslateGestureRecognizer;
- (struct CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)textEffectsWindowDidRotate:(id)arg1;
- (void)peripheralHostDidEnterBackground:(id)arg1;
- (void)peripheralHostWillResume:(id)arg1;
- (void)completeCurrentTransitionIfNeeded;
- (BOOL)hasDictationKeyboard;
- (void)dealloc;
- (id)init;
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)arg1;
@property(readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
- (void)setInputViewsHidden:(BOOL)arg1;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
- (struct CGRect)transitioningFrame;
- (id)contentView;
- (id)transitioningView;
- (id)viewForTransitionScreenSnapshot;
- (void)syncToExistingAnimations;
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(BOOL)arg3 forShow:(BOOL)arg4;
- (struct CGRect)screenRectFromBounds:(struct CGRect)arg1 atCenter:(struct CGPoint)arg2 applyingSourceHeightDelta:(double)arg3;
- (BOOL)userInfoContainsActualGeometryChange:(id)arg1;
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;
- (struct UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(long long)arg1 outDirection:(int)arg2 forTransition:(int)arg3;
- (struct CGSize)totalPeripheralSizeForOrientation:(long long)arg1;
- (void)setPeripheralFrameForHostBounds:(struct CGRect)arg1;
- (void)setPeripheralToolbarFrameForHostWidth:(double)arg1;
- (BOOL)isHostingActiveImpl;
- (BOOL)hasCustomInputView;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)animateKeyboardOutWithDuration:(double)arg1 delta:(double)arg2;
- (void)updateScrollViewContentInsetBottom:(double)arg1;
- (void)finishScrollViewTransition;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1;
- (BOOL)_shouldDelayRotationForWindow:(id)arg1;
- (BOOL)_isAccessoryViewChangedOnly;
- (BOOL)_isTransitioning;
- (id)_inheritedRenderConfig;
- (void)updateInputAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (BOOL)isSplitting;
- (BOOL)isTranslating;
- (BOOL)isRotating;
- (void)_endDisablingAnimations;
- (void)_beginDisablingAnimations;
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1;
- (BOOL)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2;
- (BOOL)_isSelfHosting;
- (void)performWithAllowingNilResponderReload:(CDUnknownBlockType)arg1;
- (void)_endPersistingInputAccessoryViewWithId:(id)arg1;
- (void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2;
- (void)removePreservedInputViewSetForInputView:(id)arg1;
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2;
- (BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (void)_restoreInputAccessoryViewOverrideWithId:(id)arg1;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (void)_preserveInputViewsWithId:(id)arg1;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3;
- (void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;
- (BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;
- (BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(BOOL)arg3;
@property(readonly, nonatomic) BOOL keyClicksEnabled;
- (BOOL)_isSuppressedByManualKeyboard;
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2;
- (id)_inputViewsForResponder:(id)arg1;
- (struct CGRect)localDisplayRectForViewSet:(id)arg1;
- (struct CGRect)localDisplayRectForViewSet:(id)arg1 position:(int)arg2;
- (struct CGRect)displayRectForViewSet:(id)arg1 orientation:(long long)arg2 position:(int)arg3 fromRotation:(BOOL)arg4;
- (id)_currentInputView;
@property(retain, nonatomic) UIInputViewSet *inputViews;
- (void)setInputViews:(id)arg1 animated:(BOOL)arg2;
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;
- (BOOL)skipTransitionForInputViews:(id)arg1;
- (id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3;
- (id)computeTransitionForInputViews:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (BOOL)shouldApplySettingsForBackdropView:(id)arg1;
- (void)executeTransition:(id)arg1;
- (void)enableKeyboardTyping;
- (void)adjustAccessoryViewForSubsumedTransition:(id)arg1;
- (void)adjustHostViewForTransitionCompletion:(id)arg1;
- (void)adjustHostViewForTransitionEndFrame:(id)arg1;
- (void)adjustHostViewForTransitionStartFrame:(id)arg1;
- (void)endClippingForTransition:(id)arg1;
- (id)containerForClippingMode:(int)arg1 onTransition:(id)arg2;
- (struct CGRect)calculateSnapshotRectForTransition:(id)arg1 forStart:(BOOL)arg2;
- (struct CGRect)calculateRectForTransition:(id)arg1 forStart:(BOOL)arg2;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forStart:(BOOL)arg2;
- (double)accessoryViewFadeDuration:(id)arg1;
@property(readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
- (void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)maximizeWithAnimation:(BOOL)arg1;
- (BOOL)maximize;
- (BOOL)minimize;
- (void)prepareToMoveKeyboardForInputViewSet:(id)arg1;
- (void)performMultipleOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;
- (BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
- (void)resetNextAutomaticOrderInDirectionAndDuration;
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;
- (void)prepareToAnimateClippedKeyboardWithOffsets:(struct CGRect)arg1 orderingIn:(BOOL)arg2 onSnapshot:(BOOL)arg3;
- (void)prepareForAlongsideTransitionWithContext:(id)arg1;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (id)topAnimationStyle;
- (void)setkeyboardAttachedViewHeight:(double)arg1;
- (double)keyboardAttachedViewHeight;
- (double)getLastAutomaticDuration;
- (void)resetCurrentOrderOutAnimationDuration:(double)arg1;
- (double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (struct CGPoint)offHostPointForPoint:(struct CGPoint)arg1;
- (BOOL)_isCoordinatingWithSystemGestures;
@property(nonatomic) double ambiguousControlCenterActivationMargin;
- (struct CGRect)_inputViewRectToAvoid;
- (int)_clipCornersOfView:(id)arg1;
- (void)moveToPersistentOffset;
- (void)setUndockedWithOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (struct CGPoint)adjustedPersistentOffset;
- (double)minimumOffsetForBuffer:(double)arg1;
- (struct CGRect)visiblePeripheralFrame:(BOOL)arg1;
@property(readonly, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;
- (int)_endIgnoringReloadInputViews;
- (void)_beginIgnoringReloadInputViews;
@property(nonatomic) BOOL automaticAppearanceInternalEnabled;
@property(retain, nonatomic) NSDate *_transitionStartTime;
@property(readonly, nonatomic) NSMutableArray *dropShadowViews;
@property(readonly, nonatomic) UIView *view;
- (void)_inputModeChangedWhileContextTracked;
- (void)_trackInputModeIfNecessary:(id)arg1;
- (id)lastUsedInputModeForCurrentContext;
- (id)lastUsedInputModeForTextInputMode:(id)arg1;
- (BOOL)_isTrackingResponder:(id)arg1;
@property(nonatomic) BOOL ignoresPinning;
- (void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2;
- (BOOL)_hasPostPinningReloadState;
- (BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_clearPinningResponders;
- (void)_setHosted:(BOOL)arg1;
- (void)performWithoutDeactivation:(CDUnknownBlockType)arg1;
- (int)_isKeyboardDeactivated;
- (void)setDeactivatedKeyboard:(BOOL)arg1;
- (void)_dismissOverlayedUI;
- (void)forceReloadInputViews;
- (void)_reloadInputViewsForResponder:(id)arg1;
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;
- (void)_updateContainerWindowLevel;
- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1;
- (void)prepareForPinning;
- (BOOL)pinningPreventsInputViews:(id)arg1;
- (id)containerTextEffectsWindowAboveStatusBar;
- (id)containerTextEffectsWindow;
- (void)flushDelayedTasks;
- (void)queueDelayedTask:(CDUnknownBlockType)arg1;
- (id)transformedContainerView;
- (id)containerRootController;
- (id)containerWindow;
- (id)_screenForFirstResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

