//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/UIDimmingViewDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIMirrorNinePatchView, _UIPopoverLayoutInfo, _UIPopoverView;
@protocol UIPopoverPresentationControllerDelegate;

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    UIViewController *_contentViewController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    _UIMirrorNinePatchView *_shadowImageView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned long long _currentArrowDirection;
    long long _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    UIColor *_arrowBackgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInContainerView;
    struct CGRect _embeddedTargetRect;
    long long _popoverControllerStyle;
    BOOL _ignoresKeyboardNotifications;
    BOOL _canOverlapSourceViewRect;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned long long _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    BOOL _isArrowDirectionFixed;
    BOOL _useSourceViewBoundsAsSourceRect;
    UIView *_presentingView;
    unsigned long long _presentationEdge;
    long long _presentationDirection;
    int _presentationState;
    BOOL _didPresentInActiveSequence;
    unsigned long long _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    struct {
        unsigned int isPresentingModalViewController:1;
        unsigned int isPresentingActionSheet:1;
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling:1;
        unsigned int isInTextEffectsWindow:1;
        unsigned int isEmbeddingInView:1;
        unsigned int embeddedPresentationBounces:1;
        unsigned int isRepositioningRectDisabled:1;
    } _popoverControllerFlags;
    BOOL _isDismissingBecauseDimmingViewTapped;
    BOOL _dismissesOnRotation;
    BOOL _showsTargetRect;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _retainsSelfWhilePresented;
    BOOL __centersPopoverIfSourceViewNotSet;
    BOOL __shouldHideArrow;
    BOOL _shouldDisableInteractionDuringTransitions;
    BOOL __ignoreBarButtonItemSiblings;
    unsigned long long _permittedArrowDirections;
    unsigned long long _popoverArrowDirection;
    UIPopoverPresentationController *_retainedSelf;
    double __dimmingViewTopEdgeInset;
    struct UIEdgeInsets _popoverLayoutMargins;
}

+ (void)_setAlwaysAllowPopoverPresentations:(BOOL)arg1;
+ (BOOL)_alwaysAllowPopoverPresentations;
+ (BOOL)_forceAttemptsToAvoidKeyboard;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (Class)_popoverViewClass;
+ (BOOL)_showTargetRectPref;
@property(nonatomic, setter=_setIgnoreBarButtonItemSiblings:) BOOL _ignoreBarButtonItemSiblings; // @synthesize _ignoreBarButtonItemSiblings=__ignoreBarButtonItemSiblings;
@property(nonatomic, getter=_shouldDisableInteractionDuringTransitions, setter=_setShouldDisableInteractionDuringTransitions:) BOOL shouldDisableInteractionDuringTransitions; // @synthesize shouldDisableInteractionDuringTransitions=_shouldDisableInteractionDuringTransitions;
@property(nonatomic, setter=_setDimmingViewTopEdgeInset:) double _dimmingViewTopEdgeInset; // @synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset;
@property(nonatomic, getter=_shouldHideArrow, setter=_setShouldHideArrow:) BOOL _shouldHideArrow; // @synthesize _shouldHideArrow=__shouldHideArrow;
@property(retain, nonatomic) UIPopoverPresentationController *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(nonatomic, getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:) BOOL _centersPopoverIfSourceViewNotSet; // @synthesize _centersPopoverIfSourceViewNotSet=__centersPopoverIfSourceViewNotSet;
@property(nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned long long presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property(nonatomic, getter=_presentingView, setter=_setPresentingView:) __weak UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property(nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property(nonatomic) BOOL showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property(nonatomic) BOOL showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property(nonatomic) BOOL showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property(nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
@property(nonatomic) BOOL dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property(retain, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (BOOL)_alwaysAdaptToFullscreenForTraitCollection:(id)arg1;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (void)containerViewWillLayoutSubviews;
- (void)_updateShadowFrame;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_sendDelegateWillRepositionToRect;
- (struct CGRect)_calculateContainingFrame;
- (struct CGRect)_sourceRectInContainerView;
- (struct CGRect)_sourceRect;
- (id)_sourceView;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (long long)presentationStyle;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (id)_popoverHostingWindow;
- (BOOL)_shouldOccludeDuringPresentation;
- (id)_presentationView;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)shouldRemovePresentersView;
- (BOOL)shouldPresentInFullscreen;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (id)_dimmingView;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (BOOL)_embedsInView;
- (BOOL)isPresentingOrDismissing;
- (BOOL)_isDismissing;
- (BOOL)_isPresenting;
- (void)_containedViewControllerModalStateChanged;
- (void)_stopWatchingForNotifications;
- (void)set_ignoreBarButtonItemSiblings:(BOOL)arg1;
@property(nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_startWatchingForScrollViewNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (BOOL)_attemptsToAvoidKeyboard;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_setGesturesEnabled:(BOOL)arg1;
- (void)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(CDUnknownBlockType)arg2;
- (void)dimmingViewWasTapped:(id)arg1;
- (BOOL)_popoverIsDismissingBecauseDimmingViewWasTapped;
- (void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_postludeForDismissal;
- (CDUnknownBlockType)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(BOOL)arg3;
@property(nonatomic, setter=_setPopoverBackgroundStyle:) long long _popoverBackgroundStyle;
- (void)setArrowBackgroundColor:(id)arg1;
- (id)arrowBackgroundColor;
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
- (long long)_popoverControllerStyle;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (double)_dismissalAnimationDuration;
- (double)_presentationAnimationDuration;
- (struct CGSize)_currentPopoverContentSize;
@property(nonatomic, getter=_arrowOffset, setter=_setArrowOffset:) double _arrowOffset;
- (void)_setPopoverView:(id)arg1;
- (BOOL)_isShimmingPopoverControllerPresentation;
- (id)_backgroundView;
- (id)popoverView;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4;
- (struct CGPoint)_centerPointForScale:(double)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (void)_invalidateLayoutInfo;
- (void)_resetSlideTransitionCount;
- (void)_incrementSlideTransitionCount:(BOOL)arg1;
- (unsigned long long)_slideTransitionCount;
- (void)_setPresentationState:(int)arg1;
- (int)_presentationState;
- (Class)_defaultChromeViewClass;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
@property(copy, nonatomic) NSArray *passthroughViews;
- (id)_passthroughViews;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) unsigned long long arrowDirection;
- (BOOL)isPopoverVisible;
@property(nonatomic) BOOL canOverlapSourceViewRect;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(BOOL)arg2;
- (void)setPopoverContentSize:(struct CGSize)arg1;
- (void)_clearCachedPopoverContentSize;
- (struct CGSize)popoverContentSize;
- (void)_setPopoverFrame:(struct CGRect)arg1 animated:(BOOL)arg2 coordinator:(id)arg3;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @dynamic barButtonItem;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UIPopoverPresentationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGRect sourceRect; // @dynamic sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @dynamic sourceView;
@property(readonly) Class superclass;

@end

