//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@class LUIBatteryView, NSNumberFormatter;

@interface LUIBatteryStatusController : LUIController
{
    int _timeRemainingToken;
    int _lowBatteryToken;
    LUIBatteryView *_batteryView;
    NSNumberFormatter *_percentFormatter;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (void)_setupContentView;
- (void)_layoutContentView;
- (void)resumeController;
- (void)pauseController;
- (id)_stringForBatteryPercentage:(id)arg1;
- (id)_imageForBattery:(id)arg1;
- (id)_colorForStyle;

@end
