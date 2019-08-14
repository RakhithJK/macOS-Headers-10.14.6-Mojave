//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFDateRangeStringRepresentationController.h>

@class NSLocale;

@interface IPXDateRangeStringRepresentationController : PFDateRangeStringRepresentationController
{
    NSLocale *_locale;
    struct UDateIntervalFormat *_monthDayIntervalFormat;
    struct UDateIntervalFormat *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat *_timeIntervalFormat;
    struct UDateIntervalFormat *_yearIntervalFormat;
    unsigned long long _preset;
    unsigned int _useRelativeDayFormatting:1;
    unsigned int _useShortDaysInRanges:1;
    unsigned int _useTime:1;
    unsigned int _yearOnly:1;
    unsigned int _timeOnly:1;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)stringRepresentationForDisplayDate:(id)arg1 startOfDisplayDateDay:(id)arg2 expirationTimeInterval:(double *)arg3;
- (void)configureToPreset:(unsigned long long)arg1;
@property(nonatomic) BOOL timeOnly;
@property(nonatomic) BOOL yearOnly;
@property(nonatomic) BOOL useTime;
- (void)setUseShortDaysInRanges:(BOOL)arg1;
- (BOOL)useShortDaysInRanges;
@property(nonatomic) BOOL useRelativeDayFormatting;
- (id)initWithDelegate:(id)arg1;
- (struct UDateIntervalFormat *)_yearIntervalFormat;
- (struct UDateIntervalFormat *)_timeIntervalFormat;
- (struct UDateIntervalFormat *)_dayOfTheWeekIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayIntervalFormat;
- (id)_relativeDateFormatterDay;
- (id)_yearDateFormatter;
- (id)_dayOfTheWeekDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameDayDateFormatter;
- (id)_dayTemplate:(BOOL)arg1;
- (id)_sameMonthTemplate:(BOOL)arg1;
- (BOOL)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2 fromDisplayDate:(id)arg3 startOfDisplayDateDay:(id)arg4;

@end

