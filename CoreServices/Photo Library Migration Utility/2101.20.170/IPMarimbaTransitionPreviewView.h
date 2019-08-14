//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@class IPMarimbaTransitionMarimbaView, NSRecursiveLock;

@interface IPMarimbaTransitionPreviewView : NSView
{
    IPMarimbaTransitionMarimbaView *_previewView;
    BOOL _isWarmingUp;
    BOOL _isRandom;
    NSRecursiveLock *_editLock;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)cleanup;
- (void)playThrough;
- (void)_copyFirstKeyframesFromSlide:(id)arg1 toSlide:(id)arg2;
- (void)setTransitionPresetID:(id)arg1 duration:(double)arg2 slide1:(id)arg3 slide2:(id)arg4 forSlideshow:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

