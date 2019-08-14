//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/_UISearchControllerPresenting-Protocol.h>

@class NSMapTable, NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct CGRect _finalFrameForContainerView;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int excisedSearchBarDuringPresentation:1;
        unsigned int searchBarWantedAutolayoutBeforeExcision:1;
    } _controllerFlags;
}

+ (BOOL)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;
@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView=_finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) BOOL forceObeyNavigationBarInsets;
@property(readonly, nonatomic) BOOL animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) BOOL searchBarToBecomeTopAttached;
- (void)setContentVisible:(BOOL)arg1;
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) BOOL searchBarShouldClipToBounds;
@property(readonly, nonatomic) BOOL searchBarCanContainScopeBar;
@property(readonly, nonatomic) BOOL resultsUnderlapsSearchBar;
@property(readonly, nonatomic) BOOL shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyle;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_layoutPresentationWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)shouldRemovePresentersView;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;
- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_exciseSearchBarFromCurrentContext;
- (id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (void)hideBackgroundObscuringView;
- (void)showBackgroundObscuringView;
@property(readonly, nonatomic) UIView *backgroundObscuringView;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

