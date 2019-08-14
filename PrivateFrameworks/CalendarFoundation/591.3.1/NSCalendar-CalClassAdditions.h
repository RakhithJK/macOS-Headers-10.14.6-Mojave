//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (CalClassAdditions)
+ (id)CalDateFromBirthdayComponents:(id)arg1;
+ (id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2;
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)sharedAutoupdatingCurrentCalendar;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)CalGregorianGMTCalendar;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (BOOL)dateIsFirstOfYear:(id)arg1;
- (BOOL)dateIsFirstOfMonth:(id)arg1;
- (long long)daysInMonthContainingDate:(id)arg1;
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (long long)secondsInDay;
- (long long)secondsInMinute;
- (long long)minutesInHour;
- (long long)hoursInDay;
- (long long)daysInWeek;
- (long long)monthsInYearForDate:(id)arg1;
@end

