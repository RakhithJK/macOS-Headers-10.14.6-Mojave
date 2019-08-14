//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSCursor;

@interface NSClipView : NSView
{
    NSColor *_backgroundColor;
    NSView *_docView;
    struct CGRect _docRect;
    struct CGRect _oldDocFrame;
    NSCursor *_cursor;
    id _scrollAnimationHelper;
    struct {
        unsigned int unused:1;
        unsigned int onlyUncovered:1;
        unsigned int reflectScroll:1;
        unsigned int usedByCell:1;
        unsigned int scrollClipTo:1;
        unsigned int noCopyOnScroll:1;
        unsigned int drawsBackground:1;
        unsigned int scrollInProgress:1;
        unsigned int skipRemoveSuperviewCheck:1;
        unsigned int animateCurrentScroll:1;
        unsigned int canAnimateScrolls:1;
        unsigned int nextScrollRelativeToCurrentPosition:1;
        unsigned int viewBoundsChangedOverridden:1;
        unsigned int viewFrameChangedOverridden:1;
        unsigned int documentViewAlignment:4;
        unsigned int redrawnWhileScrolling:1;
        unsigned int dontConstrainScroll:1;
        unsigned int lastAtEdgesState:4;
        unsigned int showOverlayScrollersForScrollStep:1;
        unsigned int scrollerKnobFlashSpecifier:2;
        unsigned int drawsContentShadow:1;
        unsigned int dontConstrainBoundsChange:1;
        unsigned int isScrollDueToUserAction:1;
        unsigned int hasOverlappingViews:1;
        unsigned int automaticallyCalculateContentSize:1;
    } _cvFlags;
    struct CGPoint _scrollVelocity;
    struct NSEdgeInsets _contentInsets;
    struct CGSize _contentSize;
    BOOL _automaticallyAdjustsContentInsets;
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)_contentShadow;
+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (double)_autoscrollResponseMultiplier;
+ (void)_setAutoscrollResponseMultiplier:(double)arg1;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (Class)_animatorClass;
- (void)_setDocumentViewAlignment:(unsigned long long)arg1;
- (unsigned long long)_documentViewAlignment;
- (void)_setAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGPoint)_animatingScrollTargetOrigin;
- (BOOL)_isAnimatingScroll;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)resetCursorRects;
@property(retain) NSCursor *documentCursor;
- (void)setNextKeyView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)setUpGState;
- (BOOL)_shouldAdjustPatternPhase;
- (BOOL)_scrollInProgress;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (BOOL)_needsClipViewAncestorDidScroll;
- (void)_oldImmediateScrollToPoint:(struct CGPoint)arg1;
- (void)_immediateScrollToPoint:(struct CGPoint)arg1;
- (void)_invalidateFocusRingIfItBleedsIntoOurBounds;
- (void)_invalidateIntersectionsWithSiblingViews;
- (void)_drawRect:(struct CGRect)arg1 clip:(BOOL)arg2;
- (void)_animatedScrollToPoint:(struct CGPoint)arg1;
- (BOOL)_shouldShowOverlayScrollersForScrollToPoint:(struct CGPoint)arg1;
- (BOOL)_canCopyOnScrollForDeltaX:(double)arg1 deltaY:(double)arg2;
@property BOOL copiesOnScroll;
- (void)_setHasOverlappingViews:(BOOL)arg1;
- (BOOL)_animateCurrentScroll;
- (void)_setAnimateCurrentScroll:(BOOL)arg1;
- (void)_setIsScrollDueToUserAction:(BOOL)arg1;
- (BOOL)_isScrollDueToUserAction;
- (void)_setDontConstrainBoundsChange:(BOOL)arg1;
- (BOOL)_shouldDontConstrainScroll;
- (void)_setDontConstrainScroll:(BOOL)arg1;
- (void)_setCanAnimateScrolls:(BOOL)arg1;
- (BOOL)_canAnimateScrolls;
- (struct CGPoint)constrainScrollPoint:(struct CGPoint)arg1;
- (BOOL)_scrollTo:(const struct CGPoint *)arg1 animateScroll:(long long)arg2 flashScrollerKnobs:(unsigned long long)arg3;
- (BOOL)_scrollTo:(const struct CGPoint *)arg1 animate:(BOOL)arg2;
- (BOOL)_scrollTo:(const struct CGPoint *)arg1;
- (BOOL)_scrollRectToVisible:(const struct CGRect *)arg1 fromView:(id)arg2;
- (BOOL)_scrollRectToVisible:(const struct CGRect *)arg1 fromView:(id)arg2 animateScroll:(long long)arg3 flashScrollerKnobs:(unsigned long long)arg4;
- (void)_scrollPoint:(const struct CGPoint *)arg1 fromView:(id)arg2;
- (void)_autoscrollForDraggingInfo:(id)arg1 timeDelta:(double)arg2;
- (double)_scrollAmountForLineScroll:(double)arg1 percentageTowardsMax:(double)arg2 limitingSize:(double)arg3 multiplier:(double)arg4;
- (BOOL)_shouldAutoscrollForDraggingInfo:(id)arg1;
- (BOOL)autoscroll:(id)arg1;
- (void)_extendNextScrollRelativeToCurrentPosition;
- (BOOL)_proposedScrollPositionIsPixelAligned:(struct CGPoint)arg1;
- (struct CGPoint)_pixelAlignProposedScrollPosition:(struct CGPoint)arg1;
- (void)_alignCoords;
- (BOOL)isFlipped;
- (void)_handleBoundsChangeForSubview:(id)arg1;
- (void)viewBoundsChanged:(id)arg1;
- (void)_reflectDocumentViewBoundsChange;
- (void)_handleFrameChangeForSubview:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)_reflectDocumentViewFrameChange;
- (struct CGRect)_dirtyRectUncoveredFromOldDocFrame:(struct CGRect)arg1 byNewDocFrame:(struct CGRect)arg2;
- (void)_selfBoundsChanged;
- (BOOL)_shouldRedisplayOnChanges;
- (BOOL)preservesContentDuringLiveResize;
- (void)_computeBounds;
- (void)rotateByAngle:(double)arg1;
- (void)scaleUnitSquareToSize:(struct CGSize)arg1;
- (void)translateOriginToPoint:(struct CGPoint)arg1;
- (void)setBoundsRotation:(double)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setFrameRotation:(double)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (struct NSEdgeInsets)_convertedContentInsetsToProposedBounds:(struct CGRect)arg1;
- (struct CGRect)_interactiveBounds;
- (struct CGRect)_insetVisibleRect;
- (struct CGRect)_insetBounds;
- (void)setAutomaticallyCalculatesContentSize:(BOOL)arg1;
- (BOOL)automaticallyCalculatesContentSize;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (void)setContentInset:(struct NSEdgeInsets)arg1;
@property BOOL automaticallyAdjustsContentInsets;
@property struct NSEdgeInsets contentInsets;
- (struct NSEdgeInsets)contentInset;
- (void)setScrollVelocity:(struct CGPoint)arg1;
- (struct CGPoint)scrollVelocity;
- (BOOL)_forcePixelAlignedClipViewFrame;
- (struct CGPoint)_magnificationAnchorPointForCursorPoint:(struct CGPoint)arg1;
- (struct CGRect)constrainBoundsRect:(struct CGRect)arg1;
- (struct CGRect)_constrainBoundsRect:(struct CGRect)arg1;
- (struct CGRect)_constrainBoundsRectAndAlignIfNeeded:(struct CGRect)arg1;
- (void)_checkAlignmentOfOriginOfBoundsRectIfNeeded:(struct CGRect *)arg1;
- (BOOL)_alignOriginOfBoundsRectToBackingIfNeeded:(struct CGRect *)arg1;
- (struct CGRect)_currentDocViewFrame;
- (void)_pinDocRect;
- (void)updateConstraints;
- (unsigned long long)_effectiveAutoresizingMask;
- (void)viewDidMoveToSuperview;
- (void)updateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (id)_cuiSourceListBackgroundOptions;
- (void)_addOverhangSubviewsIfNeeded;
- (void)_updateOverhangSubviewsIfNeeded;
- (void)_getOverhangFrames:(struct CGRect [8])arg1;
- (void)_removeOverhangSubviewsIfNeeded;
- (void)_setNeedsDisplayInOverhang:(BOOL)arg1;
- (void)_setOverhangSubviews:(id)arg1;
- (id)_overhangSubviews;
- (BOOL)_drawsOverhangRects;
- (void)_drawOverhangShadowsInRect:(struct CGRect)arg1;
- (void)_drawShadowAroundRect:(struct CGRect)arg1 clipRect:(struct CGRect)arg2;
- (id)_newShadowOfSize:(struct CGSize)arg1 fromOffset:(struct CGPoint)arg2 inImage:(id)arg3;
- (void)setDrawsContentShadow:(BOOL)arg1;
- (BOOL)drawsContentShadow;
- (id)makeBackingLayer;
@property BOOL drawsBackground;
@property(copy) NSColor *backgroundColor;
- (BOOL)_isUsedByCell;
- (id)_markUsedByCell;
@property(readonly) struct CGRect documentVisibleRect;
- (struct CGSize)_minimumFrameSize;
- (struct CGRect)_effectiveContentFrame;
@property(readonly) struct CGRect documentRect;
- (void)_setDocViewFromRead:(id)arg1;
@property(retain) NSView *documentView;
- (void)willRemoveSubview:(id)arg1;
- (void)_unregisterForDocViewFrameAndBoundsChangeNotifications;
- (void)_registerForDocViewFrameAndBoundsChangeNotifications;
- (void)_setSuperview:(id)arg1;
- (BOOL)_clipViewShouldClipFocusRing;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_drawsNothing;
- (void)setLayer:(id)arg1;

@end

