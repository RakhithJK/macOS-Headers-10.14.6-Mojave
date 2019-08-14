//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceDatabaseDelegate-Protocol.h>

@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSHistoryServiceDatabaseDelegateProxy : NSObject <WBSHistoryServiceDatabaseDelegate>
{
    id <NSXPCProxyCreating> _proxy;
}

- (void).cxx_destruct;
- (void)handleEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportSevereError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportPermanentIDsForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithProxy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

