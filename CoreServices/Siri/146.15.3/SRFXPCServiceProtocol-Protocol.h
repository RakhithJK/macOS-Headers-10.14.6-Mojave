//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SRFXPCServiceProtocol <NSObject>
- (void)endVoiceTriggerSuppressionActivityWithReason:(NSString *)arg1;
- (void)beginVoiceTriggerSuppressionActivityWithReason:(NSString *)arg1;
- (void)invokeWithNotificationName:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
@end

