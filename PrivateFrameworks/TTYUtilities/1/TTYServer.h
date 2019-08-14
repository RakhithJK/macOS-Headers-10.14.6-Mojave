//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TTYUtilities/AXHeardServerMessageDelegate-Protocol.h>

@class HCServer, NSLock, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TTYServer : NSObject <AXHeardServerMessageDelegate>
{
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
    HCServer *_server;
    CDUnknownBlockType _actionCompletionBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
- (void).cxx_destruct;
- (void)setTTYDictionaryAvailability:(BOOL)arg1;
- (id)valueForTTYSetting:(id)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (void)registerResponseBlock:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (void)setShouldSuppressIncomingNotification:(BOOL)arg1;
- (void)cancelCallPromptDisplay;
- (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleMessageError:(id)arg1 destructive:(BOOL)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)_managerAXPIDState:(BOOL)arg1;
- (void)resetConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

