//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSBorderlessLayerTreeProjectionWindow.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _NSSlideAndCrossFadeAnimationProjectionWindow : _NSBorderlessLayerTreeProjectionWindow
{
    CALayer *beforeLayer;
    struct CGRect beforeLayerInitialScreenRect;
    struct CGRect beforeLayerFinalScreenRect;
    CALayer *afterLayer;
    struct CGRect afterLayerInitialScreenRect;
    struct CGRect afterLayerFinalScreenRect;
}

- (void)startAnimationWithDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithBeforeLayer:(id)arg1 initialScreenRect:(struct CGRect)arg2 finalScreenRect:(struct CGRect)arg3 afterLayer:(id)arg4 initialScreenRect:(struct CGRect)arg5 finalScreenRect:(struct CGRect)arg6;
- (struct CGRect)layerFrameFromScreenRect:(struct CGRect)arg1;

@end

