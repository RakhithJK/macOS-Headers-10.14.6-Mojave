//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time : _UIDatePickerMode
{
    double _timeHourWidth;
    double _timeMinuteWidth;
    double _timeAMPMWidth;
    NSString *_hourFormat;
    NSString *_minuteFormat;
}

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;
- (void).cxx_destruct;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (id)font;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (void)resetComponentWidths;
- (double)rowHeight;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)localizedFormatString;
- (void)_shouldReset:(id)arg1;
- (long long)displayedCalendarUnits;

@end

