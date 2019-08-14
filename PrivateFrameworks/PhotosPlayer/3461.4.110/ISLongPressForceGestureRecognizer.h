//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPressGestureRecognizer.h>

@interface ISLongPressForceGestureRecognizer : NSPressGestureRecognizer
{
    double _lastEventPressure;
    BOOL _initiatedByPressureCapableDevice;
    BOOL _longPressDidBeginForCurrentTouch;
    double _minimumPressure;
    double _maximumPressure;
    double _is_force;
}

@property(readonly, nonatomic) double is_force; // @synthesize is_force=_is_force;
@property(nonatomic) double maximumPressure; // @synthesize maximumPressure=_maximumPressure;
@property(nonatomic) double minimumPressure; // @synthesize minimumPressure=_minimumPressure;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_updateForce;
- (void)setState:(long long)arg1;
- (BOOL)_recognitionRequiresPressureCapableDevice;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

