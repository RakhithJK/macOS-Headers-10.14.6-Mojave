//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

#import <VectorKit/VKNavGestureCameraBehavior-Protocol.h>

@class NSString, VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKDetachedNavGestureCameraBehavior : VKGestureCameraBehavior <VKNavGestureCameraBehavior>
{
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    Unit_3d259e8a _startPitch;
    VKTimedAnimation *_tapZoomAnimation;
}

- (id).cxx_construct;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNavCameraController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

