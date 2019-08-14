//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDragManagerDataSource-Protocol.h>
#import <Silex/SXFullscreenCaptionViewDelegate-Protocol.h>
#import <Silex/SXFullscreenImageViewDelegate-Protocol.h>
#import <Silex/SXFullscreenNavigationBarViewDelegate-Protocol.h>
#import <Silex/SXItemizedScrollViewDataSource-Protocol.h>
#import <Silex/SXItemizedScrollViewDelegate-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>
#import <Silex/UIScrollViewDelegate-Protocol.h>

@class NSString, SXDragManager, SXFullscreenCanvasViewController, SXFullscreenCaptionView, SXFullscreenNavigationBarView, SXItemizedScrollView, UIColor, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol SXFullscreenCanvasShowable, SXFullscreenCaptionViewFactory;

@interface SXFullscreenCanvasController : NSObject <UIGestureRecognizerDelegate, UIScrollViewDelegate, SXFullscreenImageViewDelegate, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXFullscreenCaptionViewDelegate, SXFullscreenNavigationBarViewDelegate, SXDragManagerDataSource>
{
    BOOL _isFullscreen;
    BOOL _isTransitioning;
    BOOL _rotationIsActive;
    BOOL _panIsActive;
    BOOL _pinchIsActive;
    BOOL _verticalSwipingIsActive;
    BOOL _isStoppingVerticalSwiping;
    BOOL _orientationChangeIsInterupting;
    BOOL _lessTouchesAreInterupting;
    BOOL _isSupressingColorSettings;
    int _previousExpansionMode;
    id <SXFullscreenCanvasShowable> _showable;
    unsigned long long _sharingPolicy;
    id <SXFullscreenCaptionViewFactory> _captionViewFactory;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    UITapGestureRecognizer *_openTapGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_backgroundView;
    UIView *_gestureView;
    unsigned long long _totalActiveGestureRecognizers;
    double _currentRotation;
    double _currentScale;
    unsigned long long _currentViewIndex;
    UIView *_currentView;
    SXFullscreenCanvasViewController *_canvasViewController;
    SXItemizedScrollView *_itemizedScrollView;
    SXFullscreenNavigationBarView *_navigationBarView;
    SXFullscreenCaptionView *_captionView;
    SXDragManager *_dragManager;
    struct CGPoint _currentTranslation;
    struct CGPoint _startingAnchorPoint;
    struct CGRect _currentOriginFrame;
    struct CGRect _currentDestinationFrame;
}

@property(retain, nonatomic) SXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(nonatomic) BOOL isSupressingColorSettings; // @synthesize isSupressingColorSettings=_isSupressingColorSettings;
@property(nonatomic) int previousExpansionMode; // @synthesize previousExpansionMode=_previousExpansionMode;
@property(retain, nonatomic) SXFullscreenCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) SXFullscreenNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(retain, nonatomic) SXItemizedScrollView *itemizedScrollView; // @synthesize itemizedScrollView=_itemizedScrollView;
@property(retain, nonatomic) SXFullscreenCanvasViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
@property(nonatomic) struct CGRect currentDestinationFrame; // @synthesize currentDestinationFrame=_currentDestinationFrame;
@property(nonatomic) struct CGRect currentOriginFrame; // @synthesize currentOriginFrame=_currentOriginFrame;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) unsigned long long currentViewIndex; // @synthesize currentViewIndex=_currentViewIndex;
@property(nonatomic) BOOL lessTouchesAreInterupting; // @synthesize lessTouchesAreInterupting=_lessTouchesAreInterupting;
@property(nonatomic) BOOL orientationChangeIsInterupting; // @synthesize orientationChangeIsInterupting=_orientationChangeIsInterupting;
@property(readonly, nonatomic) struct CGPoint startingAnchorPoint; // @synthesize startingAnchorPoint=_startingAnchorPoint;
@property(readonly, nonatomic) struct CGPoint currentTranslation; // @synthesize currentTranslation=_currentTranslation;
@property(readonly, nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
@property(readonly, nonatomic) double currentRotation; // @synthesize currentRotation=_currentRotation;
@property(readonly, nonatomic) unsigned long long totalActiveGestureRecognizers; // @synthesize totalActiveGestureRecognizers=_totalActiveGestureRecognizers;
@property(readonly, nonatomic) BOOL isStoppingVerticalSwiping; // @synthesize isStoppingVerticalSwiping=_isStoppingVerticalSwiping;
@property(readonly, nonatomic) BOOL verticalSwipingIsActive; // @synthesize verticalSwipingIsActive=_verticalSwipingIsActive;
@property(readonly, nonatomic) BOOL pinchIsActive; // @synthesize pinchIsActive=_pinchIsActive;
@property(readonly, nonatomic) BOOL panIsActive; // @synthesize panIsActive=_panIsActive;
@property(readonly, nonatomic) BOOL rotationIsActive; // @synthesize rotationIsActive=_rotationIsActive;
@property(readonly, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *openTapGestureRecognizer; // @synthesize openTapGestureRecognizer=_openTapGestureRecognizer;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) id <SXFullscreenCaptionViewFactory> captionViewFactory; // @synthesize captionViewFactory=_captionViewFactory;
@property(readonly, nonatomic) unsigned long long sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(readonly, nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(readonly, nonatomic) __weak id <SXFullscreenCanvasShowable> showable; // @synthesize showable=_showable;
- (void).cxx_destruct;
- (void)fullscreenNavigationBarViewDoneButtonPressed:(id)arg1;
- (BOOL)captionView:(id)arg1 tapGestureRecognizerShouldBegin:(id)arg2;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (id)viewForDragManager:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)itemizedScrollView:(id)arg1 didHideViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 willShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
- (id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (struct CGRect)itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1;
- (void)fullScreenImageViewDidStopZooming:(id)arg1;
- (void)fullScreenImageViewDidStartZooming:(id)arg1;
- (void)removeScaleAndTranslationFromCurrentView;
- (BOOL)comparePoint:(struct CGPoint)arg1 withPoint:(struct CGPoint)arg2 maxDelta:(double)arg3;
- (void)transferGestureViewToView:(id)arg1;
- (void)transferCurrentViewToOriginalView;
- (void)transferCurrentViewToCanvas;
- (struct CGPoint)calculateAnchorPointFromBounds:(struct CGRect)arg1 andPoint:(struct CGPoint)arg2;
- (long long)viewIndexForPoint:(struct CGPoint)arg1;
- (void)stopSupressingColorSettings;
- (void)startSupressingColorSettings;
- (void)handleTap:(id)arg1;
- (void)goToOriginalFromVerticalSwipingWithVelocity:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goToOriginalFromOriginalAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goToOriginalFromFullScreenAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goToFullScreenFromFullScreenAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goToFullScreenFromOriginalAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stopVerticalSwipingDismissed:(BOOL)arg1 lastVelocity:(struct CGPoint)arg2;
- (void)startVerticalSwiping;
- (void)didEndTransitionFromFullScreen:(BOOL)arg1 toFullScreen:(BOOL)arg2;
- (void)startTransitionToFullScreen:(BOOL)arg1 controllable:(BOOL)arg2;
- (void)stopTransformingCancelled:(BOOL)arg1;
- (void)updateTransform;
- (void)willStartTransformingWithGestureRecognizer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handlePinchGestureRecognizer:(id)arg1;
- (void)presentFullscreenWithIndex:(unsigned long long)arg1;
- (void)handleOpenTapGesture:(id)arg1;
- (void)handleRotationGestureRecognizer:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)handleGestureRecognizer:(id)arg1;
- (struct CGSize)fitSizeForRect:(struct CGRect)arg1;
- (void)setupGestureRecognizersInView:(id)arg1;
- (void)setup;
- (BOOL)otherInteractivityGestureShouldBegin:(id)arg1;
@property(readonly, nonatomic) unsigned long long activeViewIndex;
@property(retain, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)transformViewToSize:(struct CGSize)arg1;
- (void)changeCaptionViewForViewWithIndex:(unsigned long long)arg1 expanded:(BOOL)arg2 animated:(BOOL)arg3;
- (void)didFinishFullscreenActiveIndex:(unsigned long long)arg1;
- (void)setupScrollViewIfNeededWithActiveIndex:(unsigned long long)arg1;
- (void)dismiss;
- (void)dealloc;
- (id)initWithShowable:(id)arg1 captionViewFactory:(id)arg2 sharingPolicy:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

