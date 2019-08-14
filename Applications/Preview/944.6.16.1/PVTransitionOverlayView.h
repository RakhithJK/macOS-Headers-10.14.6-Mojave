//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAAnimation, CALayer, NSMapTable, NSString;
@protocol PVTransitionOverlayViewDelegate;

@interface PVTransitionOverlayView : NSView <CAAnimationDelegate>
{
    id <PVTransitionOverlayViewDelegate> _delegate;
    BOOL _transitionInProgress;
    CAAnimation *_bumpAnimationInProgress;
    BOOL _currentTransitionIsForward;
    int _currentTransitionAxis;
    id _currentFromElement;
    id _currentToElement;
    CALayer *_currentFromLayer;
    CALayer *_currentToLayer;
    CALayer *_layerContainer;
    NSMapTable *_elementToLayerMap;
    unsigned long long _layerCacheSize;
    long long _currentTransitionID;
    BOOL _fadeLayers;
    double endingBackgroundOpacity;
    double startingBackgroundOpacity;
    CALayer *_backgroundColorLayer;
    NSView *_backgroundFullScreenTextureView;
    NSView *_backgroundColorView;
    NSView *_fadingBackgroundColorView;
    CDUnknownBlockType _bumpAnimationCompletionBlock;
}

+ (void)initialize;
@property(nonatomic) __weak id <PVTransitionOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id currentFromElement; // @synthesize currentFromElement=_currentFromElement;
@property(readonly) __weak id currentToElement; // @synthesize currentToElement=_currentToElement;
@property(readonly) BOOL transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
- (void).cxx_destruct;
- (void)stopAutomaticTransition;
- (void)fadeFromElement:(id)arg1 toElement:(id)arg2 duration:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)swipeFromElement:(id)arg1 toElement:(id)arg2 forward:(BOOL)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)swipeFromElement:(id)arg1 toElement:(id)arg2 forward:(BOOL)arg3 axis:(int)arg4 duration:(double)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)endCurrentTransitionWithSuccess:(BOOL)arg1;
- (void)beginTransitionFromElement:(id)arg1 toElement:(id)arg2 isForwardTransition:(BOOL)arg3;
- (void)_endCurrentTransitionWithoutCleanupWithSuccess:(BOOL)arg1;
- (void)continueCurrentTransition:(double)arg1;
- (void)beginTransitionFromElement:(id)arg1 toElement:(id)arg2 isForwardTransition:(BOOL)arg3 axis:(int)arg4;
- (void)unhostSwipeLayers;
- (void)hostSwipeLayers;
- (void)pruneLayerCache;
- (unsigned long long)layerCacheSize;
- (void)setLayerCacheSize:(unsigned long long)arg1;
- (void)clearLayerCache;
- (id)elementsWithCachedLayers;
- (BOOL)hasLayerForElement:(id)arg1;
- (void)removeLayerForElement:(id)arg1;
- (void)addGroupLayer:(id)arg1;
- (void)addLayer:(id)arg1 forElement:(id)arg2;
- (void)addLayer:(id)arg1 forElement:(id)arg2 pruneCache:(BOOL)arg3;
- (void)_addLayer:(id)arg1 forElement:(id)arg2;
- (BOOL)isOpaque;
- (void)cleanup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)teardownBackgroundLayers;
- (void)teardownBackgroundColorLayer;
- (void)setupBackgroundColorLayer;
- (void)teardownBackgroundColorView;
- (void)setupBackgroundColorView;
- (void)teardownTexturedUnderlayView;
- (void)setupTexturedUnderlayView;
- (id)simulatedBumpAnimationForLayer:(id)arg1 forward:(BOOL)arg2 axis:(int)arg3;
- (float)opacityForBackgroundLayerWithStartValue:(double)arg1 endingValue:(double)arg2 t:(double)arg3;
- (float)opacityForLayer:(id)arg1 t:(double)arg2 forward:(BOOL)arg3 isStartLayer:(BOOL)arg4;
- (struct CGPoint)positionForLayer:(id)arg1 t:(double)arg2 forward:(BOOL)arg3 axis:(int)arg4 isStartLayer:(BOOL)arg5;
- (struct CGPoint)positionForLayer:(id)arg1 t:(double)arg2 forward:(BOOL)arg3 axis:(int)arg4 isStartLayer:(BOOL)arg5 allowRubberband:(BOOL)arg6;
- (struct CGRect)_contentBoundsForLayer:(id)arg1;
- (struct CGPoint)offscreenTopPositionForLayer:(id)arg1;
- (struct CGPoint)offscreenBottomPositionForLayer:(id)arg1;
- (struct CGPoint)offscreenRightPositionForLayer:(id)arg1;
- (struct CGPoint)offscreenLeftPositionForLayer:(id)arg1;
- (struct CGPoint)centerPositionForLayer:(id)arg1;
- (struct CGPoint)interpolateBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 fraction:(double)arg3;
- (struct CGPoint)roundedPointWithX:(double)arg1 Y:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
