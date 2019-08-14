//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_source, OS_os_log;

@interface ABCStats : NSObject
{
    NSMutableDictionary *_abcStats;
    NSMutableDictionary *_appStats;
    NSMutableDictionary *_scenarioIdStats;
    NSMutableDictionary *_scenarioGroupStats;
    NSObject<OS_os_log> *_logHandle;
    NSDate *_initializedTimestamp;
    NSObject<OS_dispatch_source> *_source;
}

@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain) NSDate *initializedTimestamp; // @synthesize initializedTimestamp=_initializedTimestamp;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property(retain) NSMutableDictionary *scenarioGroupStats; // @synthesize scenarioGroupStats=_scenarioGroupStats;
@property(retain) NSMutableDictionary *scenarioIdStats; // @synthesize scenarioIdStats=_scenarioIdStats;
@property(retain) NSMutableDictionary *appStats; // @synthesize appStats=_appStats;
@property(retain) NSMutableDictionary *abcStats; // @synthesize abcStats=_abcStats;
- (void).cxx_destruct;
- (void)printStats:(BOOL)arg1;
- (long long)counterValue:(id)arg1:(id)arg2;
- (void)armTimer;
- (id)init;
- (void)incrementCounter:(id)arg1:(id)arg2;

@end

