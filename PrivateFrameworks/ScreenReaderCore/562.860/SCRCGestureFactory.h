//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCTargetSelectorTimer;
@protocol SCRCGestureFactoryCallback;

@interface SCRCGestureFactory : NSObject
{
    double _stallDistance;
    double _maxDimension;
    double _thumbRegion;
    int _orientation;
    int _directions[7];
    struct {
        double horizontal;
        double vertical;
    } _axisFlipper;
    double _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    double _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _tapSpeedRegion;
    double _tapVelocityThresholdForRegion;
    long long _tapSpeedFingerCount;
    BOOL _inTapSpeedRegionForDownEvent;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    double _lastDegrees;
    double _startDegrees;
    double _startDistance;
    double _potentialTrackingStartTimestamp;
    BOOL _requireUp;
    BOOL _thumbRejectionEnabled;
    int _state;
    int _direction;
    double _directionalSlope;
    struct SCRCFingerState _finger[2];
    unsigned long long _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    double _distance;
    unsigned long long _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    id <SCRCGestureFactoryCallback> _trackDelegate;
    id <SCRCGestureFactoryCallback> _tapDelegate;
    id <SCRCGestureFactoryCallback> _gutterUpDelegate;
    id <SCRCGestureFactoryCallback> _splitTapDelegate;
    id <SCRCGestureFactoryCallback> _canSplitTapDelegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct {
        char isFingerCurrentlyDown;
        char dead;
        char gutterHasBeenTouched;
        unsigned long long numFingersInCurrentGestureEvent;
        unsigned long long totalNumFingersInGesture;
        unsigned long long count;
        struct CGRect frame;
        struct CGPoint location[8];
        struct CGPoint locationPerTap[8];
        double thisTime;
        double lastTime;
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    SCRCGestureFactory *_splitFactory;
    struct {
        char isSplitting;
        char isTapping;
        char fastTrack;
        char tapDead;
        char timedOut;
        char active;
        unsigned long long fingerIdentifier;
        double fingerDownTime;
        struct CGPoint startTapLocation;
        struct CGPoint lastTapLocation;
        struct CGPoint primaryFingerLocation;
        double tapDistance;
        int state;
    } _split;
}

@property(nonatomic) BOOL thumbRejectionEnabled; // @synthesize thumbRejectionEnabled=_thumbRejectionEnabled;
- (void).cxx_destruct;
- (id)gestureStateString;
- (double)tapInterval;
- (struct CGPoint)tapPointWeightedToSides;
- (struct CGPoint)tapPoint;
- (struct CGRect)multiTapFrame;
- (struct CGRect)tapFrame;
- (struct CGPoint)endLocation;
- (struct CGPoint)startLocation;
- (struct CGPoint)rawAverageLocation;
- (double)firstFingerAzimuth;
- (double)firstFingerAltitude;
- (double)firstFingerPressure;
- (struct CGPoint)rawLocation;
- (BOOL)tapIsDown;
- (unsigned long long)tapCount;
- (unsigned long long)fingerCount;
- (unsigned long long)absoluteFingerCount;
- (double)distance;
- (double)velocity;
- (double)vector;
- (int)direction;
- (int)gestureState;
- (double)directionalSlope;
- (CDStruct_1c7a58cf)captureCurrentState;
- (void)reset;
- (void)_up;
- (void)_drag:(id)arg1;
- (void)_down:(id)arg1;
- (CDStruct_1c7a58cf)handleGestureEvent:(id)arg1;
- (BOOL)_handleSplitEvent:(id)arg1;
- (BOOL)_handleSplitTap;
- (void)_updateStartWithPoint:(struct CGPoint)arg1 time:(double)arg2;
- (void)_processUpAndPost:(BOOL)arg1;
- (void)_handleGutterUp;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleTap;
- (void)_updateTapState;
- (void)_updateMultiTapFrame;
- (struct CGRect)_currentTapRect;
- (struct CGRect)mainFrame;
- (void)dealloc;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (double)tapSpeed;
- (void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(struct CGRect)arg2 fingerCount:(long long)arg3;
- (void)setTapSpeed:(double)arg1;
- (double)flickSpeed;
- (void)setFlickSpeed:(double)arg1;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2;

@end

