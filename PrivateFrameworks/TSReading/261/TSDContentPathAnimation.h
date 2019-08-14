//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDContentAnimation.h>

@class CAMediaTimingFunction, NSArray, TSDContentPath;

@interface TSDContentPathAnimation : TSDContentAnimation
{
    NSArray *_contentLocations;
    CAMediaTimingFunction *_timingFunction;
    NSArray *_keyTimes;
    NSArray *_timingFunctions;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSArray *timingFunctions; // @synthesize timingFunctions=_timingFunctions;
@property(copy, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(copy, nonatomic) NSArray *contentLocations; // @synthesize contentLocations=_contentLocations;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;
- (BOOL)i_canProduceAnimation;
@property(copy, nonatomic) TSDContentPath *contentPath;
- (void)dealloc;

@end

