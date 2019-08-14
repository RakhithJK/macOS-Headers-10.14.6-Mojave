//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IWAnimation.h"

@class NSMutableArray;

@interface IWMultiWindowAnimation : IWAnimation
{
    NSMutableArray *mInfoArray;
}

- (struct CGRect)integralRect:(struct CGRect)arg1;
- (struct CGRect)blendStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 fraction:(double)arg3;
- (void)setCurrentProgress:(double)arg1;
- (double)endAlphaForWindow:(id)arg1;
- (id)animationInfoForWindow:(id)arg1;
- (void)addWindow:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 startAlpha:(double)arg4 endAlpha:(double)arg5;
- (void)addWindow:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 startAlpha:(double)arg4 endAlpha:(double)arg5 scaleContent:(BOOL)arg6;
- (void)dealloc;
- (id)initWithDuration:(double)arg1 animationCurve:(int)arg2;

@end

