//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPressureConfiguration, NSTouchDevice;

__attribute__((visibility("hidden")))
@interface _NSGestureRecognizerAuxiliary : NSObject
{
    NSPressureConfiguration *_activePressureConfiguration;
    NSTouchDevice *_touchDevice;
    long long _touchContextId;
    unsigned long long allowedTouchTypes;
    struct {
        unsigned int sendsActionWhenPossible:1;
        unsigned int privateDelegateShouldSendActionWhenPossibleConcurrentlyWithRecognizer:1;
        unsigned int delegateShouldSendActionWhenPossibleConcurrentlyWithRecognizer:1;
        unsigned int viewIsUnsafeUnretained:1;
        unsigned int delegateIsUnsafeUnretained:1;
        unsigned int targetIsUnsafeUnretained:1;
        unsigned int privateDelegateShouldReceiveTouch;
        unsigned int delegateShouldReceiveTouch;
        unsigned int reserved:24;
    } _additionalFlags;
}

- (void).cxx_destruct;

@end
