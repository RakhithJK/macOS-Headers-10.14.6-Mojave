//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButtonCell, NSColor, NSDate, NSDateComponents, NSNumberFormatter, NSTimer, _NSDatePickerArrowCell;

__attribute__((visibility("hidden")))
@interface _NSDatePickerCellExtraIvars : NSObject
{
    _NSDatePickerArrowCell *_arrowLeftCell;
    _NSDatePickerArrowCell *_arrowRightCell;
    NSButtonCell *_returnToHomeMonthButtonCell;
    NSDateComponents *_calendarDisplayedMonthDateComponents;
    NSColor *_disabledTextColor;
    NSNumberFormatter *_numberFormatter;
    NSTimer *_changeMonthTimer;
    NSDate *_lastFireDateForChangeMonthTimer;
}

- (void)dealloc;
- (void)setDisabledTextColor:(id)arg1;
- (id)disabledTextColor;
- (oneway void)releaseCalendarSpecificResources;
- (id)calendarDisplayedMonthDateComponents;
- (id)returnToHomeMonthButtonCellForDatePickerCell:(id)arg1;
- (id)arrowRightCellForDatePickerCell:(id)arg1;
- (id)arrowLeftCellForDatePickerCell:(id)arg1;

@end

