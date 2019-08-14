//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSWebViewMetadataFetchOperation.h>

#import <SafariShared/WBSTouchIconObserver-Protocol.h>

@class NSArray, NSSet, NSString, NSTimer, _WKRemoteObjectInterface;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver>
{
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    long long _state;
    BOOL _allowFetchingOverCellularNetwork;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3;
- (void)willClearWebView;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)_downloadPendingTouchIconURLs;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleTimeoutWithTimeInterval:(double)arg1;
- (void)clearWebView;
- (void)startOffscreenFetching;
- (void)_tearDownRemoteObjectProxies;
- (void)_setUpRemoteObjectProxies;
- (void)didCompleteWithResult:(id)arg1;
- (void)loadRequest;
- (void)resetState;
- (id)webViewConfiguration;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 allowFetchingOverCellularNetwork:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

