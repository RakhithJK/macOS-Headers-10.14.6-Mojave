//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NS2DVelocityFilter;

@interface _NSScrollingPredominantAxisFilter : NSObject
{
    long long _predominantAxisMode;
    _NS2DVelocityFilter *_velocityFilter;
}

+ (void)initialize;
@property long long predominantAxisMode; // @synthesize predominantAxisMode=_predominantAxisMode;
- (BOOL)resetIfOutOfDate:(double)arg1;
- (void)reset;
- (void)filterInputScrollEvent:(id)arg1 outputDelta:(struct CGPoint *)arg2 velocity:(struct CGPoint *)arg3;
- (void)filterInputDelta:(struct CGPoint)arg1 timestamp:(double)arg2 outputDelta:(struct CGPoint *)arg3 velocity:(struct CGPoint *)arg4;
- (void)dealloc;
- (id)init;

@end

