//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSGestureRecognizerDelegate-Protocol.h>

@class MKCompassView, MKMapView, MKRotationFilter, MKScaleView, NSClickGestureRecognizer, NSPanGestureRecognizer, NSString, VKCompoundAnimation, VKTimedAnimation, _MKDirectionalArrowRecognizer, _MKDirectionalPanGestureRecognizer, _MKMagnificationGestureRecognizer, _MKMouseDownGestureRecognizer, _MKRotationGestureRecognizer;
@protocol MKMapGestureControllerDelegate, OS_dispatch_source;

@interface MKMapGestureController : NSObject <NSGestureRecognizerDelegate>
{
    MKMapView *_mapView;
    id <MKMapGestureControllerDelegate> _delegate;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    _MKMouseDownGestureRecognizer *_mouseDownGestureRecognizer;
    NSPanGestureRecognizer *_panGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_panRotationGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_panTiltGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_panZoomGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_otherButtonPanRotationGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_otherButtonPanTiltGestureRecognizer;
    NSClickGestureRecognizer *_doubleClickGestureRecognizer;
    _MKMagnificationGestureRecognizer *_pinchGestureRecognizer;
    _MKRotationGestureRecognizer *_rotationGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_scaleDragGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_compassDragRotationGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_compassDragTiltGestureRecognizer;
    _MKDirectionalPanGestureRecognizer *_compassDragSimultaneousRotationGestureRecognizer;
    BOOL _compassRotateBeganInPositiveDirection;
    _MKDirectionalArrowRecognizer *_arrowPanGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowRotateGestureRecognizer;
    _MKDirectionalArrowRecognizer *_arrowZoomGestureRecognizer;
    _MKDirectionalArrowRecognizer *_activeArrowGestureRecognizer;
    VKTimedAnimation *_currentArrowAnimation;
    BOOL _isFullRotatingFromArrows;
    long long _gestureCount;
    double _lastScale;
    double _lastMagnification;
    double _lastRotation;
    double _pinchFactorAverageInGesture;
    double _lastPinchUpdateTimestamp;
    double _lastRotationInGestureDelta;
    double _lastRotationUpdateTimestamp;
    double _lastRotationVelocity;
    struct CGPoint _rotationDragStartPoint;
    struct CGPoint _rotationDragCursorStartPoint;
    struct CGPoint _tiltDragStartPoint;
    struct CGPoint _tiltDragCursorStartPoint;
    struct CGPoint _zoomDragStartPoint;
    struct CGPoint _zoomDragCursorStartPoint;
    double _lastZoomDragTranslation;
    BOOL _panning;
    BOOL _pinching;
    BOOL _rotating;
    BOOL _dragRotating;
    BOOL _dragTilting;
    BOOL _dragZooming;
    struct CGPoint _scrollTranslation;
    BOOL _isScrollDecelerating;
    NSObject<OS_dispatch_source> *_scrollMomentumTimer;
    long long _scrollBehavior;
    struct CGPoint _lastArrowScrollTranslationDelta;
    double _arrowZoomSpeed;
    double _arrowZoomStartTimestamp;
    BOOL _zoomEnabled;
    BOOL _scrollEnabled;
    BOOL _tiltEnabled;
    BOOL _rotationEnabled;
    MKRotationFilter *_rotationFilter;
    BOOL _rotationSnappingEnabled;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    VKTimedAnimation *_pinchDecelerationAnimation;
    VKTimedAnimation *_rotationDecelerationAnimation;
    BOOL _handlingTrackpadScroll;
}

@property(retain, nonatomic) MKCompassView *compassView; // @synthesize compassView=_compassView;
@property(retain, nonatomic) MKScaleView *scaleView; // @synthesize scaleView=_scaleView;
@property(nonatomic, getter=isRotationSnappingEnabled) BOOL rotationSnappingEnabled; // @synthesize rotationSnappingEnabled=_rotationSnappingEnabled;
@property(nonatomic, getter=isRotationEnabled) BOOL rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic, getter=isTiltEnabled) BOOL tiltEnabled; // @synthesize tiltEnabled=_tiltEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(readonly, nonatomic) NSClickGestureRecognizer *doubleClickGestureRecognizer; // @synthesize doubleClickGestureRecognizer=_doubleClickGestureRecognizer;
@property(retain, nonatomic) MKRotationFilter *rotationFilter; // @synthesize rotationFilter=_rotationFilter;
@property(nonatomic) __weak id <MKMapGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)handleRotation:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleZoomPan:(id)arg1;
- (void)handleTiltPan:(id)arg1;
- (void)handleRotationPan:(id)arg1;
- (void)handleDoubleClick:(id)arg1;
- (void)_handleStandardPan:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)scrollWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)handleZoomArrowMask:(long long)arg1 speed:(double)arg2;
- (void)handleScrollArrowMask:(long long)arg1;
- (void)cancelZoomInOrOut;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (void)handleArrowZoom:(id)arg1;
- (void)handleArrowRotate:(id)arg1;
- (void)handleArrowPan:(id)arg1;
- (void)_handleMouseDown:(id)arg1;
- (void)endGesturing;
- (void)beginGesturing;
- (void)stopDynamicAnimations;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

