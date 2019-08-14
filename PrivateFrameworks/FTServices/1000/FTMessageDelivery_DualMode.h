//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTServices/FTMessageDeliveryProtocol-Protocol.h>
#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class FTMessageDelivery, FTMessageQueue, IDSBaseMessage, NSArray, NSString;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate>
{
    FTMessageDelivery *_httpDelivery;
    FTMessageDelivery *_apsDelivery;
    FTMessageQueue *_dualModeQueue;
    NSString *_userAgentString;
}

- (void).cxx_destruct;
- (void)invalidate;
@property(readonly) NSArray *queuedMessages;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (void)handleTranslationAndDeliveryOnAPS:(id)arg1;
- (void)dequeueMessageIfNeeded;
- (void)cancelMessage:(id)arg1;
- (BOOL)sendMessage:(id)arg1;
@property(copy, nonatomic) NSString *userAgent;
- (id)initWithPreferedType:(long long)arg1;
- (void)_enterBackOffMode;
- (BOOL)_isInBackoffMode;
- (BOOL)_shouldUseDualDeliveryForMessage:(id)arg1;
- (long long)_randomPercentageChanceForDualDelivery;

// Remaining properties
@property(readonly) NSArray *allMessages;
@property(readonly) BOOL busy;
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL hasQueuedItems;
@property(readonly) unsigned long long hash;
@property BOOL logToRegistration;
@property unsigned long long maxConcurrentMessages;
@property(readonly) long long maxLargeMessageSize;
@property(readonly) long long maxMessageSize;
@property BOOL retryInAirplaneMode;
@property(readonly) Class superclass;

@end

