//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNObservedResult : NSObject
{
    unsigned long long _time;
    id _value;
    unsigned long long _tolerance;
    unsigned long long _logTime;
}

+ (struct _NSRange)overflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (BOOL)rangeWouldOverflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (struct _NSRange)underflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (BOOL)rangeWouldUnderflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (struct _NSRange)rangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (struct _NSRange)rangeWithExactTime:(unsigned long long)arg1;
+ (id)failureWithError:(id)arg1 timeInterval:(double)arg2 tolerance:(double)arg3;
+ (id)failureWithError:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3;
+ (id)failureWithError:(id)arg1 time:(unsigned long long)arg2;
+ (id)completionResultWithTimeInterval:(double)arg1 tolerance:(double)arg2;
+ (id)completionResultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (id)completionResultWithTime:(unsigned long long)arg1;
+ (id)resultWithTimeInterval:(double)arg1 tolerance:(double)arg2 value:(id)arg3;
+ (id)resultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 value:(id)arg3;
+ (id)resultWithTime:(unsigned long long)arg1 value:(id)arg2;
@property(readonly) unsigned long long logTime; // @synthesize logTime=_logTime;
@property(readonly) unsigned long long tolerance; // @synthesize tolerance=_tolerance;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) unsigned long long time; // @synthesize time=_time;
- (void).cxx_destruct;
- (struct _NSRange)timeRange;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isResultEvent;
- (id)description;
- (id)formattedTimeString;
@property(readonly) id logValue;
- (id)initWithValue:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3;

@end

