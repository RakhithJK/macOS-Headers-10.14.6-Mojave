//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ILKBarSlider.h"

@class CALayer;

@interface ILKSkimmingSlider : ILKBarSlider
{
    CALayer *_frozenKnobWhileSkimmingLayer;
}

+ (Class)cellClass;
@property CALayer *frozenKnobWhileSkimmingLayer; // @synthesize frozenKnobWhileSkimmingLayer=_frozenKnobWhileSkimmingLayer;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)allowsVibrancy;
- (void)endSkimming;
- (void)beginSkimming;
- (void)setFrameSize:(struct CGSize)arg1;

@end

