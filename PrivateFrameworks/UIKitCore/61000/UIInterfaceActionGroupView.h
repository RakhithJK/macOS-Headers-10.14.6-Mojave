//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKitCore/UIInterfaceActionGroupDisplayPropertyObserver-Protocol.h>
#import <UIKitCore/UIInterfaceActionGroupDisplaying-Protocol.h>
#import <UIKitCore/UIScrollViewDelegate-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>
#import <UIKitCore/_UIInterfaceActionPresenting-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSPointerArray, NSString, UIFont, UIInterfaceActionGroup, UIInterfaceActionHighlightAttributes, UIInterfaceActionRepresentationView, UIInterfaceActionSelectionTrackingController, UIInterfaceActionSeparatorAttributes, UIInterfaceActionVisualStyle, UILongPressGestureRecognizer, _UIContentConstraintsLayoutGuide, _UIInterfaceActionRepresentationsSequenceView;
@protocol UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionVisualStyleProviding, UISeparatorDisplaying;

@interface UIInterfaceActionGroupView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>
{
    BOOL _needsUpdateTopLevelViewsArrangement;
    BOOL _needsUpdateActionSequenceViewArrangement;
    BOOL _needsInitialViewLoading;
    BOOL _isSettingVisualStyle;
    UIInterfaceActionVisualStyle *_activeTestingVisualStyle;
    NSString *_cachedSizeCategory;
    BOOL _springLoaded;
    BOOL _showsSeparatorAboveActions;
    BOOL _drawsBackground;
    id <UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionSelectionTrackingController *_actionSelectionController;
    UIInterfaceActionGroup *_actionGroup;
    id <UIInterfaceActionHandlerInvocationDelegate> _actionHandlerInvocationDelegate;
    long long _presentationStyle;
    NSArray *_allowedActionLayoutAxisByPriority;
    long long _actionLayoutAxis;
    UIInterfaceActionVisualStyle *_visualStyle;
    UIInterfaceActionVisualStyle *_appliedVisualStyle;
    _UIContentConstraintsLayoutGuide *_contentGuide;
    UIView *_backgroundView;
    UIView *_topLevelItemsView;
    NSArray *_topLevelViewArrangementConstraints;
    NSMutableArray *_arrangedScrollableHeaderViews;
    UIView<UISeparatorDisplaying> *_actionSequenceTopSeparatorView;
    _UIInterfaceActionRepresentationsSequenceView *_actionSequenceView;
    NSLayoutConstraint *_actionSequenceViewWidthAnchoredToConstantConstraint;
    NSLayoutConstraint *_actionSequenceViewWidthAnchoredToContentGuideConstraint;
    NSPointerArray *_weakSimultaneouslyPresentedGroupViews;
    UILongPressGestureRecognizer *_actionSelectionGestureRecognizer;
    double _requiredActionRepresentationWidth;
    UIInterfaceActionRepresentationView *_preferredActionRepresentation;
    UIInterfaceActionHighlightAttributes *_visualStyleOverrideActionHighlightAttributes;
    UIInterfaceActionSeparatorAttributes *_visualStyleOverrideSeparatorAttributes;
    UIFont *_visualStyleOverrideTitleLabelFont;
    double _selectionHighlightContinuousCornerRadius;
}

@property(nonatomic, getter=_selectionHighlightContinuousCornerRadius, setter=_setSelectionHighlightContinuousCornerRadius:) double selectionHighlightContinuousCornerRadius; // @synthesize selectionHighlightContinuousCornerRadius=_selectionHighlightContinuousCornerRadius;
@property(nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(retain, nonatomic, getter=_visualStyleOverrideTitleLabelFont, setter=_setVisualStyleOverrideTitleLabelFont:) UIFont *visualStyleOverrideTitleLabelFont; // @synthesize visualStyleOverrideTitleLabelFont=_visualStyleOverrideTitleLabelFont;
@property(retain, nonatomic, getter=_visualStyleOverrideSeparatorAttributes, setter=_setVisualStyleOverrideSeparatorAttributes:) UIInterfaceActionSeparatorAttributes *visualStyleOverrideSeparatorAttributes; // @synthesize visualStyleOverrideSeparatorAttributes=_visualStyleOverrideSeparatorAttributes;
@property(retain, nonatomic, setter=_setVisualStyleOverrideActionHighlightAttributes:) UIInterfaceActionHighlightAttributes *visualStyleOverrideActionHighlightAttributes; // @synthesize visualStyleOverrideActionHighlightAttributes=_visualStyleOverrideActionHighlightAttributes;
@property(retain, nonatomic) UIInterfaceActionRepresentationView *preferredActionRepresentation; // @synthesize preferredActionRepresentation=_preferredActionRepresentation;
@property(nonatomic) double requiredActionRepresentationWidth; // @synthesize requiredActionRepresentationWidth=_requiredActionRepresentationWidth;
@property(retain, nonatomic) UILongPressGestureRecognizer *actionSelectionGestureRecognizer; // @synthesize actionSelectionGestureRecognizer=_actionSelectionGestureRecognizer;
@property(nonatomic) BOOL showsSeparatorAboveActions; // @synthesize showsSeparatorAboveActions=_showsSeparatorAboveActions;
@property(readonly, nonatomic) NSPointerArray *weakSimultaneouslyPresentedGroupViews; // @synthesize weakSimultaneouslyPresentedGroupViews=_weakSimultaneouslyPresentedGroupViews;
@property(readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToContentGuideConstraint; // @synthesize actionSequenceViewWidthAnchoredToContentGuideConstraint=_actionSequenceViewWidthAnchoredToContentGuideConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToConstantConstraint; // @synthesize actionSequenceViewWidthAnchoredToConstantConstraint=_actionSequenceViewWidthAnchoredToConstantConstraint;
@property(readonly, nonatomic) _UIInterfaceActionRepresentationsSequenceView *actionSequenceView; // @synthesize actionSequenceView=_actionSequenceView;
@property(readonly, nonatomic) UIView<UISeparatorDisplaying> *actionSequenceTopSeparatorView; // @synthesize actionSequenceTopSeparatorView=_actionSequenceTopSeparatorView;
@property(readonly, nonatomic) NSMutableArray *arrangedScrollableHeaderViews; // @synthesize arrangedScrollableHeaderViews=_arrangedScrollableHeaderViews;
@property(readonly, nonatomic) NSArray *topLevelViewArrangementConstraints; // @synthesize topLevelViewArrangementConstraints=_topLevelViewArrangementConstraints;
@property(readonly, nonatomic) UIView *topLevelItemsView; // @synthesize topLevelItemsView=_topLevelItemsView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) _UIContentConstraintsLayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *appliedVisualStyle; // @synthesize appliedVisualStyle=_appliedVisualStyle;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(readonly, nonatomic) long long actionLayoutAxis; // @synthesize actionLayoutAxis=_actionLayoutAxis;
@property(retain, nonatomic) NSArray *allowedActionLayoutAxisByPriority; // @synthesize allowedActionLayoutAxisByPriority=_allowedActionLayoutAxisByPriority;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) __weak id <UIInterfaceActionHandlerInvocationDelegate> actionHandlerInvocationDelegate; // @synthesize actionHandlerInvocationDelegate=_actionHandlerInvocationDelegate;
@property(readonly, nonatomic) UIInterfaceActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
@property(nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property(nonatomic) __weak id <UIInterfaceActionVisualStyleProviding> visualStyleProvider; // @synthesize visualStyleProvider=_visualStyleProvider;
- (void).cxx_destruct;
- (id)_alertController;
- (BOOL)_isCornerRadiusDisplayEnabled;
- (struct CGRect)_contentEdgeFrame;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (void)_setNeedsUpdateActionSequenceViewArrangement;
- (void)_setNeedsUpdateTopLevelViewsArrangement;
- (id)_viewContainingTopLevelItems;
- (id)_viewDisplayingRoundedBackground;
- (id)_allActionViews;
- (void)_removeUsAsThePresentingViewControllerForAllActions;
- (void)_setUsAsThePresentingViewControllerForAllActions;
- (struct CGRect)_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1;
- (void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(BOOL)arg2;
- (void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)arg1;
- (id)_actionRepresentationViewForAction:(id)arg1;
- (id)_defaultOrderingForActionRepresentationViews:(id)arg1;
- (void)_actionSequenceViewContentSizeDidChange;
- (void)_updateActionSequenceViewActionLayoutAxis;
- (id)_constraintsToPinView:(id)arg1 layoutGuide:(id)arg2 identifier:(id)arg3;
- (long long)_actionLayoutAxisUnknowDisallowed;
- (BOOL)_actionLayoutAxisUnknownDisallowedIsVertical;
- (void)_addBackgroudViewToViewHierarchy:(id)arg1;
- (void)_applyVisualStyleCornerRadius;
- (void)_applyVisualStyleToBackgroundViewDisplay;
- (void)_applyVisualStyleToActionsViewScrollView;
- (void)_applyVisualStyle;
- (id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2;
- (id)_loadVisualStyleForTraitCollection:(id)arg1;
- (id)_interfaceActionGroupViewState;
- (id)_newSeparatorViewForSeparatingTitleAndButtons;
- (void)_reloadTopSeparatorView;
- (void)_determineActualLayoutAxis;
- (void)_updateActionSequenceScrollability;
- (void)_arrangeActionViewsInActionSequenceView;
- (BOOL)_hasLoadedStackViewContents;
- (id)_orderedTopLevelViews;
- (id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1;
- (void)_arrangeTopLevelViews;
@property(readonly, nonatomic) UIInterfaceActionSelectionTrackingController *actionSelectionController; // @synthesize actionSelectionController=_actionSelectionController;
- (void)_loadViewsIfNeeded;
- (void)_updateActionSequenceViewDebugLayoutIdentifier;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (void)_loadActionSequenceView;
- (void)_loadTopLevelItemsView;
- (void)_updateRoundedCornerPositionForSubviews;
- (void)_reloadStackViewContentsIfNeeded;
- (BOOL)_shouldInstallContentGuideConstraints;
- (void)_installContentGuideConstraints;
- (id)_interfaceActionOfFocusedRepresentationView;
- (id)_newActionGroupBackgroundView;
- (void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(BOOL)arg2;
- (void)setSimultaneouslyPresentedGroupViews:(id)arg1;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (void)reloadVisualStyle;
- (void)_setAndApplyVisualStyle:(id)arg1;
- (void)setActiveTestingVisualStyle:(id)arg1;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2;
- (id)_currentlyFocusedActionView;
- (id)preferredFocusedView;
- (void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (void)_updateRequiredActionRepresentationSizeConstraints;
- (struct UIEdgeInsets)_buttonEdgeInsetsFromGroupViewEdge;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (void)scrollToCenterForInterfaceAction:(id)arg1;
@property(readonly, nonatomic) NSArray *arrangedHeaderViews;
- (void)removeArrangedHeaderView:(id)arg1;
- (void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned long long)arg2 scrollable:(BOOL)arg3;
- (void)setActionLayoutAxis:(long long)arg1;
- (void)setActionGroup:(id)arg1;
- (void)dealloc;
- (id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2;
- (void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

