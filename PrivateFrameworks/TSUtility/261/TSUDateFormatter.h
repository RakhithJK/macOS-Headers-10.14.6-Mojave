//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSUDateFormatter : NSObject
{
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter *mFullDateFormatter;
}

+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)dateFormatStringSpecialSymbols;
+ (id)supportedTimeFormats;
+ (id)supportedDateFormats;
+ (id)defaultDateTimeFormat;
- (void)dealloc;
- (id)init;
- (id)stringFromDate:(id)arg1 format:(id)arg2;
- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (id)fullDateString:(id)arg1;

@end

