//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CalUIDayMiniMonthView, EKEvent, NSCalendar, NSDate;

@protocol CalUIMiniMonthViewDelegate <NSObject>
- (long long)firstDayOfWeek;
- (NSDate *)firstDayOfMonthContainingDate:(NSDate *)arg1;
- (long long)daysInMonthContainingDate:(NSDate *)arg1;
- (void)saveChangesToEvent:(EKEvent *)arg1;
- (void)selectDate:(NSDate *)arg1;
- (void)showDate:(NSDate *)arg1;
- (NSDate *)activeDate;
- (NSCalendar *)calendar;

@optional
- (void)miniMonthViewDidMoveBackOneMonth:(CalUIDayMiniMonthView *)arg1;
- (void)miniMonthViewDidMoveForwardOneMonth:(CalUIDayMiniMonthView *)arg1;
@end

