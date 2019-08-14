//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/KeyLoopSplicingContainerView.h>

#import <Safari/ButtonInTabSyncGroupDelegate-Protocol.h>
#import <Safari/DetachedTabDraggingImageToWindowTransitionControllerDelegate-Protocol.h>
#import <Safari/MorphingDragImageControllerDragSource-Protocol.h>
#import <Safari/NSAnimationDelegate-Protocol.h>
#import <Safari/NSDraggingDestination-Protocol.h>
#import <Safari/TabButtonDelegate-Protocol.h>
#import <Safari/TabDraggingDestination-Protocol.h>

@class BackgroundColorView, CABackdropLayer, NSArray, NSMapTable, NSMutableArray, NSScrollView, NSString, NSTitlebarSeparatorView, NSTrackingArea, NSView, TabBarEmptyRegionPlaceholderButton, TabButton;
@protocol ButtonInTabSyncGroup, TabBarViewDelegate;

__attribute__((visibility("hidden")))
@interface TabBarView : KeyLoopSplicingContainerView <ButtonInTabSyncGroupDelegate, DetachedTabDraggingImageToWindowTransitionControllerDelegate, MorphingDragImageControllerDragSource, NSAnimationDelegate, NSDraggingDestination, TabButtonDelegate, TabDraggingDestination>
{
    NSTrackingArea *_trackingArea;
    TabButton *_tabButtonUnderMouse;
    NSScrollView *_scrollView;
    NSView *_scrollViewDocumentView;
    NSView *_tabContainer;
    NSMutableArray *_tabBarViewItems;
    NSMutableArray *_tabButtons;
    NSMapTable *_tabBarViewItemsToTabButtons;
    unsigned long long _selectedTabButtonIndex;
    unsigned long long _firstInsertedTabButtonIndex;
    BOOL _selectionIsChanging;
    BOOL _isInteractivelyClosingTabs;
    BOOL _isScrollingToRevealAddedTab;
    TabButton *_draggedTabButton;
    struct CGPoint _mouseOffsetOnSelectedTab;
    struct CGPoint _mouseLocationForDraggedTab;
    unsigned long long _dragSourceIndex;
    unsigned long long _dropIndex;
    unsigned long long _fallbackSelectedTabButtonIndex;
    BOOL _selectedButtonIsDetached;
    BOOL _hideWindowAfterDetachingOnlyTab;
    struct CGRect _layoutBounds;
    struct CGRect _firstButtonFrame;
    double _remainingWidthInTabBarAfterDividingEvenlyAmongButtons;
    double _scrollViewContentWidth;
    unsigned long long _numberOfTabsForLayout;
    unsigned long long _stackingRegions;
    BOOL _isStackingButtons;
    double _edgeScrollingFactor;
    double _titleScrollingFactor;
    double _selectedButtonSlowingFactor;
    double _slowingDistance;
    NSView *_backgroundView;
    CABackdropLayer *_backdropLayer;
    BackgroundColorView *_backgroundColorView;
    NSTitlebarSeparatorView *_topBorderSeparatorView;
    NSView *_pinnedTabsContainer;
    unsigned long long _numberOfPinnedTabs;
    unsigned long long _numberOfPinnedTabsForLayout;
    BOOL _isDraggingInPinningRegion;
    BOOL _mustDragExtraDistanceToReorder;
    double _timeOfLastHoveredIndexChange;
    unsigned long long _lastHoveredIndexWhileWaitingForReorderingToKickIn;
    TabBarEmptyRegionPlaceholderButton *_placeholderTabForEmptyUnpinnedRegion;
    BOOL _shouldReduceTransparency;
    BOOL _didScheduledAnimatedLayout;
    BOOL _didLayOutAfterMovingToWindow;
    BOOL _forcesActiveWindowState;
    id <TabBarViewDelegate> _delegate;
    id <ButtonInTabSyncGroup> _buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
}

+ (id)accessibilityLabelForNumberOfTabs:(unsigned long long)arg1 andNumberOfPinnedTabs:(unsigned long long)arg2;
@property(nonatomic) __weak id <ButtonInTabSyncGroup> buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion; // @synthesize buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion=_buttonThatSyncsWithPlaceholderTabInEmptyUnpinnedRegion;
@property(readonly, nonatomic) NSArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(copy, nonatomic) NSArray *tabBarViewItems; // @synthesize tabBarViewItems=_tabBarViewItems;
@property(nonatomic) BOOL forcesActiveWindowState; // @synthesize forcesActiveWindowState=_forcesActiveWindowState;
@property(nonatomic) __weak id <TabBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)button:(id)arg1 didSetHighlightStateToPressed:(BOOL)arg2 hovered:(BOOL)arg3;
- (void)_toggleTransparencyIfNecessary;
- (void)_accessibilityDisplayOptionsDidChange:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildren;
- (id)accessibilityContents;
- (void)setAccessibilityContents:(id)arg1;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)arg1;
- (unsigned long long)_dragOperationForDraggingInfo:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)willPinTabForTabDragOperation:(id)arg1;
- (unsigned long long)_updateDropIndexWithTabDraggingInfo:(id)arg1;
- (BOOL)performTabDragOperation:(id)arg1;
- (void)tabDraggingExited:(id)arg1;
- (unsigned long long)tabDraggingUpdated:(id)arg1;
- (unsigned long long)tabDraggingEntered:(id)arg1;
- (BOOL)wantsPeriodicTabDraggingUpdates;
- (void)detachedTabDraggingImageToWindowTransitionController:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2;
- (id)destinationWindowForDetachedTabDraggingImageToWindowTransitionController:(id)arg1;
- (id)dragDestinationWindowForMorphingDragImage:(id)arg1;
- (void)morphingDragImage:(id)arg1 wasDroppedAtPointOnScreen:(struct CGPoint)arg2;
- (id)_destinationWindowForDropOnScreenOperation;
- (id)_miniWindowDragImageForTabButton:(id)arg1;
- (id)_pinnedTabDragImageForTabButton:(id)arg1;
- (id)_tabDragImageForTabButton:(id)arg1;
- (double)_miniWindowDragImageWidth;
- (void)_detachTabAndPositionUnderCursor:(id)arg1;
- (struct CGPoint)_mouseLocationInDragImageForTabButton:(id)arg1;
- (BOOL)_shouldDetachTabForMouseEvent:(id)arg1;
- (BOOL)_canDetachTab;
- (unsigned long long)_numberOfUnpinnedTabs;
- (void)_cancelReorderingRestrictionsAfterPinning;
- (void)_startReorderingRestrictionsAfterPinning;
- (void)_autoscrollButtonsForStackingRegion:(unsigned long long)arg1;
- (void)_updateDropIndexWithDraggingLocation:(struct CGPoint)arg1;
- (long long)_tabDragResultForEventTrackingWithStartEvent:(id)arg1;
- (long long)_tabDragResultForInitialDragWithStartEvent:(id)arg1;
- (void)_trackReorderingEventsWithStartEvent:(id)arg1 forTabButton:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setTabButtonUnderMouse:(id)arg1 shouldAnimateHighlight:(BOOL)arg2;
- (void)_setIndexOfTabUnderMouse:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldShowCloseButtonForTabBarViewItem:(id)arg1;
- (BOOL)_shouldHighlightButtonOnHover;
- (void)_updateIndexOfTabUnderCurrentMouseLocation:(BOOL)arg1;
- (void)updateTrackingAreas;
- (void)_updateButtonStateAndKeyLoop;
- (void)_trackMouseEventsForEvent:(id)arg1 onTabAtIndex:(unsigned long long)arg2;
- (void)_trackMouseEventsForEvent:(id)arg1 inStackingRegion:(unsigned long long)arg2;
- (id)_trackMouseEventsUntilMouseUp:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)_animateTabBackgroundOnClickEventIfAppropriate:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)tabButtonDidBecomeFirstResponder:(id)arg1;
- (void)closeTabButton:(id)arg1;
- (void)selectTabButton:(id)arg1;
- (id)tabButton:(id)arg1 menuForEvent:(id)arg2;
- (void)_moveButton:(id)arg1 forTabBarViewItem:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)updateCloseButtonVisibilityForTabBarViewItem:(id)arg1;
- (void)moveTabBarViewItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)selectTabBarViewItem:(id)arg1;
- (void)removeTabBarViewItem:(id)arg1;
- (void)insertTabBarViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTabBarViewItem:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_scrollToButtonAtIndex:(unsigned long long)arg1 canScrollSelectedButton:(BOOL)arg2;
- (struct CGRect)_rectWithUnstackedButtons;
- (struct NSEdgeInsets)_layoutBoundsEdgeInsetsForUnstackedButtons;
- (void)_scrollAfterClickingOnStackingRegion:(unsigned long long)arg1;
- (struct CGPoint)_scrollTargetPointForStackingRegion:(unsigned long long)arg1;
- (double)_effectiveRightStackWidthForButtonAtIndex:(unsigned long long)arg1;
- (double)_effectiveLeftStackWidthForButtonAtIndex:(unsigned long long)arg1;
- (unsigned long long)_visibleTabIndexAtPoint:(struct CGPoint)arg1 stackingRegion:(unsigned long long *)arg2 ignorePointsOutsideOfLayoutBounds:(BOOL)arg3;
- (unsigned long long)_visibleTabIndexAtPoint:(struct CGPoint)arg1 stackingRegion:(unsigned long long *)arg2;
- (unsigned long long)_tabIndexAtPointWhenLayingOutButtonsToAlignWithWindowCenter:(struct CGPoint)arg1;
- (unsigned long long)_tabIndexAtPoint:(struct CGPoint)arg1 withButtonWidth:(double)arg2 supplementalWidth:(double)arg3;
- (unsigned long long)_tabIndexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_viewFrameForAdjustedButtonFrame:(struct CGRect)arg1;
- (double)_horizontalOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2 slowingFactor:(double)arg3;
- (double)_titleCenterOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2;
- (struct CGRect)_centeringFrameForButtonAtIndex:(unsigned long long)arg1;
- (struct CGRect)_adjustedFrameForButtonAtIndex:(unsigned long long)arg1 isHidden:(char *)arg2;
- (struct CGRect)_frameForButtonAtIndex:(unsigned long long)arg1 firstButtonOffset:(double)arg2 buttonWidth:(double)arg3 supplementalWidth:(double)arg4;
- (struct CGRect)_unstackedFrameForButtonAtIndex:(unsigned long long)arg1;
- (unsigned long long)_calculateStackingRegions;
- (double)_buttonWidthForNumberOfButtons:(unsigned long long)arg1 inWidth:(double)arg2 remainderWidth:(double *)arg3;
- (void)_updateButtonWidthAndRemainingWidthInTabBarToDivideAmongButtons;
- (void)_recalculateLayout;
- (double)_layoutBoundsWidth;
- (struct CGRect)_layoutBounds;
- (double)_pinningRegionWidth;
- (double)_pinnedTabsWidth;
- (double)currentButtonWidth;
- (BOOL)_shouldLayOutButtonsToAlignWithWindowCenter;
- (BOOL)_shouldAlignTabButtonTitleWithWindowCenter;
- (unsigned long long)_numberOfPinnedTabsForLayout;
- (unsigned long long)_numberOfTabsForLayout;
- (void)_restackButtonViews;
- (unsigned long long)_frontmostButtonIndex;
- (void)_updatePinnedTabs;
- (struct CGRect)_placeholderTabForEmptyUnpinnedRegionButtonFrame;
- (void)_installPlaceholderTabForEmptyUnpinnedRegion;
- (void)_uninstallPlaceholderTabForEmptyUnpinnedRegion;
- (BOOL)_shouldCreatePlaceholderTabForEmptyUnpinnedRegion;
- (void)_insertTabButtonWithTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_layOutButtonsAnimated:(BOOL)arg1;
- (void)_animateButtonLayout:(id)arg1;
- (double)_titleCenterOffsetForButton:(id)arg1;
- (void)_layOutDraggedButtonAnimated:(BOOL)arg1;
- (void)_recalculateLayoutAndUpdateContainerViewFrames;
- (void)_toggleBackdropLayerVisibilityIfNecessary;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)layout;
- (void)_layoutSublayersOfLayer:(id)arg1;
- (void)_updateButtonsAndLayOutAnimated:(BOOL)arg1 isSelectingButton:(BOOL)arg2;
- (void)_updateButtonsAndLayOutAnimated:(BOOL)arg1;
- (void)_setUpViewAnimationForLayout:(BOOL)arg1;
- (void)_scheduleButtonLayOutAnimated:(BOOL)arg1;
- (BOOL)_shouldLayOutButtonsNow;
- (void)_clipViewBoundsChanged:(id)arg1;
- (struct CGRect)_contentBounds;
- (void)_windowChangedKeyState;
- (BOOL)isOpaque;
- (BOOL)allowsVibrancy;
- (id)cloneForOffscreenRendering;
- (void)dealloc;
- (void)_commonTabBarViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

