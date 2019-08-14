//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXUISettingsEditableTableCellWithStepper, NSString;

@protocol AXUISettingsEditableTableCellWithStepperDelegate <NSObject>
- (NSString *)stringValueForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;
- (double)maximumValueForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;
- (double)minimumValueForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;
- (double)stepValueForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;
- (void)stepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1 setValue:(double)arg2;
- (double)valueForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;

@optional
- (long long)keyboardTypeForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;
- (NSString *)unitsStringForStepperCell:(AXUISettingsEditableTableCellWithStepper *)arg1;
@end

