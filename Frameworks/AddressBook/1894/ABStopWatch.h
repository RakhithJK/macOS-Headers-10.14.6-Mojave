//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol ABStopWatchTimeIntervalProvider;

@interface ABStopWatch : NSObject
{
    id <ABStopWatchTimeIntervalProvider> _provider;
    double _start;
    double _end;
    NSMutableArray *_laps;
}

+ (id)stopWatch;
- (BOOL)isStopped;
- (double)timestampOfLap:(unsigned long long)arg1;
- (double)intervalFromLap:(unsigned long long)arg1;
- (double)intervalFromLap:(unsigned long long)arg1 toLap:(unsigned long long)arg2;
- (double)intervalToLap:(unsigned long long)arg1;
- (unsigned long long)numberOfLaps;
- (double)interval;
- (void)lap;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;
- (id)init;

@end

