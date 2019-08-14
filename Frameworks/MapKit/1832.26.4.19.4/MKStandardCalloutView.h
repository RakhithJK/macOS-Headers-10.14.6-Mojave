//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKCalloutView.h>

#import <MapKit/CALayerDelegate-Protocol.h>

@class MKCalloutLayer, MKCalloutShadowView, MKSmallCalloutView, NSColor, NSLayoutConstraint, NSString, NSView, NSVisualEffectView, _MKCalloutContentView;

@interface MKStandardCalloutView : MKCalloutView <CALayerDelegate>
{
    struct {
        struct CGPoint origin;
        struct CGPoint offset;
        long long position;
        struct CGPoint desiredPoint;
        struct CGRect desiredBounds;
    } _anchor;
    struct CGRect _frame;
    struct {
        unsigned int animated:1;
        unsigned int didMoveCalled:1;
        unsigned int hasPendingAnimatedLayout:1;
        unsigned int needsCalloutUpdate:1;
        unsigned int isObserving:1;
        unsigned int reserved:26;
    } _flags;
    NSColor *_leftViewColor;
    NSView *_leftViewBackground;
    _MKCalloutContentView *_contentView;
    MKSmallCalloutView *_calloutView;
    NSVisualEffectView *_backdropView;
    MKCalloutLayer *_maskLayer;
    MKCalloutShadowView *_shadowView;
    NSLayoutConstraint *_calloutViewTopInsetConstraint;
    NSLayoutConstraint *_calloutViewLeftInsetConstraint;
    NSLayoutConstraint *_calloutViewRightInsetConstraint;
    NSLayoutConstraint *_calloutViewBottomInsetConstraint;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAnnotationView:(id)arg1;
- (void)_startObservingAnnotationView:(id)arg1;
- (void)_setNeedsCalloutUpdate;
- (void)_updateCalloutAnimated:(BOOL)arg1;
- (void)_updateCallout;
- (void)dismissAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)isFlipped;
- (void)completeBounceAnimation;
- (void)_markDidMoveCalled;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_showFromAnchorPoint:(struct CGPoint)arg1 boundaryRect:(struct CGRect)arg2 animate:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)isLeftAnchored;
- (long long)anchorPosition;
- (void)_runBounceAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_updateLeftBackgroundView;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)viewDidMoveToWindow;
- (void)forceAnchorPosition:(long long)arg1;
- (void)_frameDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setOriginForScale:(double)arg1;
- (struct CGPoint)_originForScale:(double)arg1;
- (void)_calculateActualAnchorPoint:(struct CGPoint *)arg1 frame:(struct CGRect *)arg2 forDesiredAnchorPoint:(struct CGPoint)arg3 boundaryRect:(struct CGRect)arg4;
- (struct CGPoint)anchorPoint;
- (struct CGPoint)offset;
- (void)setOffset:(struct CGPoint)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)systemColorsDidChangeNotification:(id)arg1;
- (void)updateLayer;
- (id)initWithAnnotationView:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

