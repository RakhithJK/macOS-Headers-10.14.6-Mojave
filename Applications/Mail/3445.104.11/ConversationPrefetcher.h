//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class MessageListContentController, NSCache, NSString, NSTableView, NSTimer;

@interface ConversationPrefetcher : NSObject <NSCacheDelegate>
{
    MessageListContentController *_messageListContentController;
    NSTableView *_messagesTableView;
    NSCache *_prefetchedConversations;
    NSTimer *_prefetchTimer;
}

@property(retain, nonatomic) NSTimer *prefetchTimer; // @synthesize prefetchTimer=_prefetchTimer;
@property(retain, nonatomic) NSCache *prefetchedConversations; // @synthesize prefetchedConversations=_prefetchedConversations;
@property(retain, nonatomic) NSTableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
@property(retain, nonatomic) MessageListContentController *messageListContentController; // @synthesize messageListContentController=_messageListContentController;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)_prefetchVisibleConversations:(id)arg1;
- (id)cachedConversationForID:(long long)arg1;
- (void)_armTimerWithDelay:(double)arg1;
- (void)_tableViewScrolled:(id)arg1;
- (void)_messageListChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMessageListContentController:(id)arg1 messagesTableView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

