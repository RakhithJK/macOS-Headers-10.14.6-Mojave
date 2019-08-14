//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class INPauseTimerIntent;

@protocol INPauseTimerIntentHandling <NSObject>
- (void)handlePauseTimer:(INPauseTimerIntent *)arg1 completion:(void (^)(INPauseTimerIntentResponse *))arg2;

@optional
- (void)resolvePauseMultipleForPauseTimer:(INPauseTimerIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveTargetTimerForPauseTimer:(INPauseTimerIntent *)arg1 withCompletion:(void (^)(INTimerResolutionResult *))arg2;
- (void)confirmPauseTimer:(INPauseTimerIntent *)arg1 completion:(void (^)(INPauseTimerIntentResponse *))arg2;
@end
