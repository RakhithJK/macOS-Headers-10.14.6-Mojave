//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProcessInfo.h>

@interface NSProcessInfo (SafariNSProcessInfoExtras)
- (BOOL)_safari_systemIsMojaveUpdate4AndAbove;
@property(readonly, nonatomic) BOOL safari_systemSupportsTouchIDAutoFillInSystemPreferences;
@property(readonly, nonatomic, getter=safari_isRunningAutomatedTests) BOOL runningAutomatedTests;
@property(readonly, nonatomic, getter=safari_wasLaunchedByWebDriver) BOOL wasLaunchedByWebDriver;
@end

