//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol RCUIServiceCurrentRecordingViewController <NSObject>
- (void)loadCaptureStateWithCompletionBlock:(void (^)(RCAVState *))arg1;
- (void)dismissLockscreenInterface;
- (void)presentLockscreenInterfaceWithBackgroundColor:(UIColor *)arg1 waveformForegroundColor:(UIColor *)arg2 waveformBackgroundColor:(UIColor *)arg3;
- (void)setScreenUpdatesDisabled:(BOOL)arg1;
@end

