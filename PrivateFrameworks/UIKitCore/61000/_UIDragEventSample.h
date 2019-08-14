//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIDragEventSample : NSObject
{
    BOOL _isApplicationEnter;
    BOOL _isApplicationWithin;
    BOOL _isApplicationExit;
    BOOL _isDragEnd;
    BOOL _hasBeenDelivered;
    unsigned int _windowServerHitTestContextID;
    UIWindow *_window;
    struct CGPoint _sceneLocation;
    struct CGPoint _locationInWindow;
}

+ (id)interpolatedSampleFromSample:(id)arg1;
+ (id)sampleFromHIDEvent:(struct __IOHIDEvent *)arg1;
@property(nonatomic) BOOL hasBeenDelivered; // @synthesize hasBeenDelivered=_hasBeenDelivered;
@property(readonly, nonatomic) unsigned int windowServerHitTestContextID; // @synthesize windowServerHitTestContextID=_windowServerHitTestContextID;
@property(readonly, nonatomic) BOOL isDragEnd; // @synthesize isDragEnd=_isDragEnd;
@property(readonly, nonatomic) BOOL isApplicationExit; // @synthesize isApplicationExit=_isApplicationExit;
@property(readonly, nonatomic) BOOL isApplicationWithin; // @synthesize isApplicationWithin=_isApplicationWithin;
@property(readonly, nonatomic) BOOL isApplicationEnter; // @synthesize isApplicationEnter=_isApplicationEnter;
@property(readonly, nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow=_locationInWindow;
@property(readonly, nonatomic) struct CGPoint sceneLocation; // @synthesize sceneLocation=_sceneLocation;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)description;
- (id)hitTestWithEvent:(id)arg1 constrainToWindowServerHitTestContext:(BOOL)arg2;

@end
