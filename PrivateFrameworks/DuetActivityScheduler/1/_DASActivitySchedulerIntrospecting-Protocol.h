//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DuetActivityScheduler/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol _DASActivitySchedulerIntrospecting <NSObject>
- (void)pauseWithParameters:(NSDictionary *)arg1;
- (void)setBalance:(double)arg1 forBudgetWithName:(NSString *)arg2;
- (double)remainingBalanceForBudgetWithName:(NSString *)arg1;
- (NSDictionary *)currentPredictions;
- (void)forceRunActivities:(NSArray *)arg1;
- (NSDictionary *)activityRunStatistics;
- (NSArray *)scoresForActivityWithName:(NSString *)arg1;
- (NSArray *)runningGroupActivities;
- (NSArray *)runningActivities;
- (NSArray *)submittedActivities;
@end
