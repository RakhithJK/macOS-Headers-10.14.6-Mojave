//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <login/LFSessionAgentConnectionInterface-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface LFSessionAgentMessageHandler : NSObject <LFSessionAgentConnectionInterface>
{
    NSObject<OS_dispatch_queue> *_faceTimeCallCallbackBlockQueue;
    CDUnknownBlockType _faceTimeCallMuteCallbackBlock;
    CDUnknownBlockType _faceTimeCallCancelCallbackBlock;
    NSObject<OS_dispatch_queue> *_miniBuddyCompletionBlockQueue;
    CDUnknownBlockType _miniBuddyCompletionBlock;
    NSObject<OS_dispatch_queue> *_logoutBlockQueue;
    CDUnknownBlockType _logoutFailureBlock;
    CDUnknownBlockType _logoutSuccessBlock;
}

+ (id)sharedSessionAgentMessageHandler;
- (void)dealloc;
- (void)SACMessageLogoutStatusClientLogoutSuccess:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)SACMessageLogoutStatusClientLogoutFailed:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setLogoutQueue:(id)arg1 failureBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3;
- (BOOL)isLogoutRegistered;
- (void)SACMessageMiniBuddyUIShowing:(CDUnknownBlockType)arg1;
- (void)setMiniBuddyQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)SACMessageFaceTimeCancelCall:(CDUnknownBlockType)arg1;
- (void)SACMessageFaceTimeMuteCall:(CDUnknownBlockType)arg1;
- (void)setFaceTimeQueue:(id)arg1 muteBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (BOOL)isFaceTimeRegistered;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

