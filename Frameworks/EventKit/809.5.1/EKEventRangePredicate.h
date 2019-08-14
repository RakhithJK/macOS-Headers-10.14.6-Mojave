//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKPredicate.h>

#import <EventKit/CalDateRangeProtocol-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@interface EKEventRangePredicate : EKPredicate <CalDateRangeProtocol>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    long long _prefetchHint;
    long long _exclusionOptions;
    long long _faultingOption;
}

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendarIdentifiers:(id)arg4 prefetchHint:(long long)arg5 exclusionOptions:(long long)arg6 faultingOption:(long long)arg7;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendarIdentifiers:(id)arg4 prefetchHint:(long long)arg5 exclusionOptions:(long long)arg6;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendarIdentifiers:(id)arg4 prefetchHint:(long long)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 exclusionOptions:(long long)arg6 faultingOption:(long long)arg7;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 exclusionOptions:(long long)arg6;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
@property(readonly, nonatomic) long long faultingOption;
@property(readonly, nonatomic) long long exclusionOptions;
@property(readonly, nonatomic) long long prefetchHint;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 exclusionOptions:(long long)arg6 faultingOption:(long long)arg7;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 exclusionOptions:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

