//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    BOOL _isInitialized;
    NSObject<OS_dispatch_queue> *_acceptQueue;
    NSMutableSet *_activeSharingURLs;
    NSMutableDictionary *_activeVettingURLToVettingAcceptor;
}

@property(retain, nonatomic, getter=activeVettingURLToVettingAcceptor) NSMutableDictionary *activeVettingURLToVettingAcceptor; // @synthesize activeVettingURLToVettingAcceptor=_activeVettingURLToVettingAcceptor;
@property(retain, nonatomic, getter=activeSharingURLs) NSMutableSet *activeSharingURLs; // @synthesize activeSharingURLs=_activeSharingURLs;
@property(retain, nonatomic, getter=acceptQueue) NSObject<OS_dispatch_queue> *acceptQueue; // @synthesize acceptQueue=_acceptQueue;
@property(nonatomic) BOOL isInitialized; // @synthesize isInitialized=_isInitialized;
- (void).cxx_destruct;
- (void)handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)_handleURL:(id)arg1;
- (void)vetURL:(id)arg1;
- (void)acceptShareWithMetadata:(id)arg1 shareURL:(id)arg2;
- (void)acceptShareWithURL:(id)arg1;
- (void)_acceptShareWithAcceptor:(id)arg1;
- (void)initOnce;
- (BOOL)_shouldLaunchAcceptFlowForShareURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

