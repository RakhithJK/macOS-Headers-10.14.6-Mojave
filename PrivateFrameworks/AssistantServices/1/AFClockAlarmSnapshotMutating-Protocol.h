//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@protocol AFClockAlarmSnapshotMutating <NSObject>
- (void)setNotifiedFiringAlarmIDs:(NSOrderedSet *)arg1;
- (void)setAlarmsByID:(NSDictionary *)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
@end

