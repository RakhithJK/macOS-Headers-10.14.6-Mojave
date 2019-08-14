//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, _CPLScheduledOverrideDelegate;

@interface _CPLScheduledOverride : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_storageKey;
    NSDate *_endDate;
    unsigned long long _budget;
    NSObject<OS_dispatch_queue> *_queue;
    id <_CPLScheduledOverrideDelegate> _delegate;
}

+ (unsigned long long)_systemBudgetForBudgetKey:(id)arg1;
@property(nonatomic) __weak id <_CPLScheduledOverrideDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long budget; // @synthesize budget=_budget;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *status;
- (void)cancel;
- (BOOL)scheduleEndOfOverride;
- (BOOL)scheduleEndFromPersistedOverride;
- (void)_scheduleEndWithTimeInterval:(double)arg1;
- (id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2;

@end

