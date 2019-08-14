//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, UIScreen;

@interface UIEvent : NSObject
{
    struct __GSEvent *_gsEvent;
    struct __IOHIDEvent *_hidEvent;
    long long _mzModifierFlags;
    long long _buttonMask;
    UIScreen *_cachedScreen;
    double _timestamp;
    double __initialTouchTimestamp;
}

@property(readonly, nonatomic) double _initialTouchTimestamp; // @synthesize _initialTouchTimestamp=__initialTouchTimestamp;
@property(nonatomic, setter=_setTimestamp:) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)_wasDeliveredToGestureRecognizers;
- (BOOL)_sendEventToGestureRecognizer:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (double)_wheelVelocity;
- (BOOL)isKeyDown;
- (void)_cleanupAfterDispatch;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (id)_screen;
- (id)_init;
- (struct CGPoint)_digitizerLocation;
- (BOOL)_isKeyDown;
- (long long)_buttonMask;
- (long long)_modifierFlags;
- (id)_unmodifiedInput;
- (id)_modifiedInput;
- (id)_triggeringPhysicalButton;
- (unsigned long long)_focusHeading;
- (long long)_moveDirection;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (struct __IOHIDEvent *)_hidEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (struct __GSEvent *)_gsEvent;
- (void)_setGSEvent:(struct __GSEvent *)arg1;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)predictedTouchesForTouch:(id)arg1;
- (id)coalescedTouchesForTouch:(id)arg1;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
@property(readonly, nonatomic) NSSet *allTouches;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
- (void)dealloc;

@end

