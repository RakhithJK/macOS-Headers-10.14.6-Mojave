//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface ICDebugTimer : NSObject
{
    double _elapsedTime;
    NSDate *_startingDate;
}

+ (void)enableTimersForClass:(Class)arg1;
+ (id)debugTimerForClass:(Class)arg1;
@property(retain) NSDate *startingDate; // @synthesize startingDate=_startingDate;
@property double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void).cxx_destruct;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)start;

@end

