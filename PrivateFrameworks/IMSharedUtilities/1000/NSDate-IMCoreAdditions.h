//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (IMCoreAdditions)
+ (BOOL)useCourierTime;
+ (id)__im_dateWithCurrentServerTime;
+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;
- (long long)minutesDifferenceFromDate:(id)arg1;
- (long long)hoursDifferenceFromDate:(id)arg1;
- (long long)differenceFromDate:(id)arg1;
- (BOOL)isToday;
- (long long)__im_nanosecondTimeInterval;
@end

