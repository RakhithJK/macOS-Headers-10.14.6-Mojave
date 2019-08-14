//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIApplicationRotationFollowingControllerNoTouches.h>

#import <UIKitCore/UIInputViewAnimationHost-Protocol.h>
#import <UIKitCore/UIInputViewSetPlacementDelegate-Protocol.h>
#import <UIKitCore/UIInputViewSetPlacementOwner-Protocol.h>
#import <UIKitCore/UISplitKeyboardSource-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardDistributedViewSource-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardViewSource-Protocol.h>
#import <UIKitCore/_UITextEffectsSceneObserver-Protocol.h>

@class NSArray, NSDate, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIKBInputBackdropView, UIScrollToDismissSupport, UISplitKeyboardSupport, UISystemKeyboardDockController, UIView;
@protocol UIInputViewSetPlacementApplicator, _UIRemoteKeyboardControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UISplitKeyboardSource, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource, _UITextEffectsSceneObserver, _UIRemoteKeyboardDistributedViewSource, UIInputViewSetPlacementDelegate, UIInputViewSetPlacementOwner>
{
    NSMutableArray *_animationStyleStack;
    int _suppressedCallbacks;
    int _suppressedNotifications;
    BOOL _isChangingPlacement;
    BOOL _isChangingInputViews;
    BOOL _requiresConstraintUpdate;
    BOOL _isSnapshotting;
    int _hiddenCount;
    BOOL _inhibitingHiding;
    unsigned long long _rotationState;
    BOOL _disablePlacementChanges;
    BOOL _suppressUpdateVisibilityConstraints;
    CDUnknownBlockType _pendingTransitionActivity;
    UISplitKeyboardSupport *_cachedSplitKeyboardController;
    UIScrollToDismissSupport *_cachedScrollDismissController;
    NSArray *_rootViewConstraints;
    NSLayoutConstraint *_emptyHeightConstraint;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_assistantViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropBackgroundViewEdgeConstraints;
    NSMutableDictionary *_assistantBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    NSMutableDictionary *_inputDockViewEdgeConstraints;
    double _backdropHeightDelta;
    UIView *_preRotationSnapshot;
    struct CGSize _preRotationInputViewSize;
    struct CGSize _preRotationInputAssistantViewSize;
    struct CGSize _preRotationInputAccessoryViewSize;
    struct CGAffineTransform _preRotationInputViewTransform;
    struct CGAffineTransform _preRotationInputAssistantViewTransform;
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;
    UIInputViewSetNotificationInfo *_rotationInfo;
    SEL _interactiveTransitionCleanupSelector;
    struct CGRect _preLayoutHostViewFrame;
    BOOL _didOverridePreLayoutHostViewFrame;
    BOOL _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    BOOL _wasOnScreen;
    NSString *_lastKeyboardID;
    NSDate *_keyboardShowTimestamp;
    BOOL _supportsDockViewController;
    BOOL _shouldNotifyRemoteKeyboards;
    BOOL _dontDismissKeyboardOnScrolling;
    BOOL _dontDismissReachability;
    UIView *_hostView;
    UIInputViewSet *_inputViewSet;
    UIInputViewSetPlacement *_placement;
    UIInputViewController *_inputViewController;
    UIInputViewController *_inputAssistantViewController;
    UIInputViewController *_inputAccessoryViewController;
    UIView *_inputBackdropBackgroundView;
    UISystemKeyboardDockController *_dockViewController;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAssistantBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    UIInputViewSetPlacement *_postRotationPlacement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetNotificationInfo *_postRotationInputViewNotificationInfo;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIInputViewPlacementTransition *_currentTransition;
    id <_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
    id <UIInputViewSetPlacementApplicator> _applicator;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
}

+ (id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2;
+ (BOOL)_doesOverrideLegacyFullScreenLayout;
@property(nonatomic) BOOL dontDismissReachability; // @synthesize dontDismissReachability=_dontDismissReachability;
@property(nonatomic) BOOL dontDismissKeyboardOnScrolling; // @synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *assistantViewHeightConstraint; // @synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(retain, nonatomic) id <UIInputViewSetPlacementApplicator> applicator; // @synthesize applicator=_applicator;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(nonatomic) BOOL shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo; // @synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
@property(retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView; // @synthesize _inputAccessoryBackdropView;
@property(retain, nonatomic, setter=setInputAssistantBackdropView:) UIKBInputBackdropView *_inputAssistantBackdropView; // @synthesize _inputAssistantBackdropView;
@property(retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView; // @synthesize _inputBackdropView;
@property(retain, nonatomic) UISystemKeyboardDockController *_dockViewController; // @synthesize _dockViewController;
@property(readonly, nonatomic) UIView *_inputBackdropBackgroundView; // @synthesize _inputBackdropBackgroundView;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic) UIInputViewController *_inputAssistantViewController; // @synthesize _inputAssistantViewController;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
@property(retain, nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(readonly, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(readonly, nonatomic) BOOL isTransitionStarted;
@property(readonly, nonatomic) BOOL isTransitioning;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (BOOL)inhibitRotationAnimation;
- (void)transferPlacementStateToInputWindowController:(id)arg1;
- (void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2;
- (void)setInterfaceAutorotationDisabled:(BOOL)arg1;
- (void)keyboardHeightChangeDone;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)resetBackdropHeight;
- (void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2;
- (BOOL)isSplitting;
- (BOOL)isTranslating;
@property(readonly, nonatomic) BOOL isChangingPlacement;
@property(readonly, nonatomic) BOOL isOnScreenRotating;
- (BOOL)isRotating;
- (BOOL)isUndocked;
- (BOOL)isOnScreen;
- (BOOL)inputViewSetContainsView:(id)arg1;
- (struct CGRect)visibleInputViewFrame;
- (struct CGRect)_visibleInputViewFrame;
- (struct CGRect)visibleFrame;
- (struct CGRect)_visibleFrame;
- (id)screenSnapshotOfView:(id)arg1;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setPlacement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPlacement:(id)arg1 starting:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentPresentationPlacement;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (void)updateInputAssistantView:(id)arg1;
- (void)invalidateInputAccessoryView;
- (void)invalidateInputAssistantView;
- (void)invalidateInputView;
- (void)updateKeyboardDockViewVisibility;
- (void)configureDockViewController:(BOOL)arg1;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)updateSupportsDockViewController;
- (BOOL)_shouldShowInputDockView;
- (id)_inputDockView;
- (void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)generateNotificationsForStart:(BOOL)arg1;
- (void)postTransitionEndNotification;
@property(readonly, nonatomic) struct CGPoint positionConstraintConstant;
- (void)didFinishTranslation;
- (void)finishSplitTransition:(BOOL)arg1;
- (void)willBeginTranslation;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (int)_clipCornersOfView:(id)arg1;
- (void)_updateBackdropViews;
- (void)configureSplitKeyboardController:(BOOL)arg1;
- (void)resetVerticalConstraint;
- (void)placementNeedsUpdate:(id)arg1;
@property(readonly) long long inputViewBackdropStyle;
@property(readonly) BOOL keyboardController;
@property BOOL hideInputViewBackdrops;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
@property(readonly, nonatomic) long long keyboardOrientation;
@property(readonly, retain, nonatomic) UIInputViewSetPlacement *placementIgnoringRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (BOOL)_useLiveRotation;
- (void)_getRotationContentSettings:(CDStruct_f365cafe *)arg1;
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (void)finishScrollViewTransition;
- (void)configureScrollDismissController:(BOOL)arg1;
- (void)setInputViewsHidden:(BOOL)arg1;
@property(readonly, nonatomic, getter=isInputViewsHidden) BOOL inputViewsHidden;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
- (struct CGRect)transitioningFrame;
- (id)transitioningView;
- (id)viewForTransitionScreenSnapshot;
- (void)syncToExistingAnimations;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)flushPendingActivities;
- (void)addPendingActivity:(CDUnknownBlockType)arg1;
- (BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (id)nextAnimationStyle;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 layoutSubviews:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)transferActiveNotificationInfoToInfo:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_forcePreLayoutHostViewFrame;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)initialNotificationInfo;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)hostAppSceneBoundsChanged;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)updateViewConstraints;
- (void)clearInputViewEdgeConstraints;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateConstraintInsets;
- (void)updateViewSizingConstraints:(id)arg1;
- (void)updateViewSizingConstraints;
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;
- (struct UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(BOOL)arg2;
- (struct UIEdgeInsets)_inputViewPadding;
- (BOOL)isViewLandscape;
- (BOOL)_subviewAutoSizesWithPredictionBar:(id)arg1;
- (BOOL)_subviewUsesClassicLayout:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4;
- (id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(CDUnknownBlockType)arg6;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (struct UIEdgeInsets)_viewSafeAreaInsetsFromScene;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (struct CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;
- (struct CGRect)_boundsForOrientation:(long long)arg1;
- (struct CGPoint)_centerForOrientation:(long long)arg1;
- (struct CGRect)_defaultInitialViewFrame;
- (void)performWithSafeTransitionFrames:(CDUnknownBlockType)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithoutCallbacksOrNotifications:(CDUnknownBlockType)arg1;
- (void)performWithoutAppearanceCallbacks:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputAssistantView;
@property(readonly, nonatomic) UIView *_inputView;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)updateInputAssistantViewForInputViewSet:(id)arg1;
- (void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2;
- (void)registerPowerLogEvent:(BOOL)arg1;
@property(readonly, nonatomic) UIKBInputBackdropView *inputViewBackdrop;
- (void)viewDidLoad;
- (void)loadView;
- (id)inputSetContainerView;
@property(readonly, retain) UIView *containerView;
- (void)didReceiveMemoryWarning;
- (void)_updatePlacementWithPlacement:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) UIView *view;

@end

