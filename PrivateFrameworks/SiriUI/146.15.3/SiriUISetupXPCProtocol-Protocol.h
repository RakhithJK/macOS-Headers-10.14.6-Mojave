//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;

@protocol SiriUISetupXPCProtocol
- (void)enableVoiceTriggerWithCompletionHandler:(void (^)(void))arg1;
- (void)enableAskSiriWithLanguageCode:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)getSiriStateWithReply:(void (^)(BOOL, BOOL, BOOL, BOOL))arg1;
@end

