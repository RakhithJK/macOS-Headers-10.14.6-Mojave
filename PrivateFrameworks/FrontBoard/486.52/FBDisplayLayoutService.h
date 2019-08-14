//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBDisplayLayoutDelegate-Protocol.h>
#import <FrontBoard/FBDisplayLayoutServiceServerDelegate-Protocol.h>

@class FBDisplayLayoutServiceServer, NSMutableDictionary, NSString;

@interface FBDisplayLayoutService : NSObject <FBDisplayLayoutServiceServerDelegate, FBDisplayLayoutDelegate>
{
    FBDisplayLayoutServiceServer *_server;
    NSMutableDictionary *_layoutByDisplayType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)publishDisplayLayout:(id)arg1;
- (id)server:(id)arg1 displayLayoutForDisplayType:(long long)arg2;
- (id)_displayLayoutForDisplayType:(long long)arg1;
- (void)flushLayoutForDisplayType:(long long)arg1;
- (id)layoutForDisplayType:(long long)arg1;
- (BOOL)isTransitioningForDisplayType:(long long)arg1;
- (void)removeLayoutElementAssertion:(id)arg1;
- (void)updateLayoutElementAssertion:(id)arg1;
- (void)addLayoutElementAssertion:(id)arg1;
- (void)endLayoutTransition:(id)arg1;
- (void)beginLayoutTransition:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

