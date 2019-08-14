//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/NSURLSessionDataDelegate-Protocol.h>

@class ACAccount, EWSServerVersionInfo, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL, NSURLSession;
@protocol EWSExchangeServiceBindingDelegate;

@interface EWSExchangeServiceBinding : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_sentCredentials;
    NSMutableSet *_tasksWithSkippedInsecureProtectionSpaces;
    NSMutableDictionary *_requestsByTask;
    id _validityLock;
    BOOL _isValid;
    NSURL *_preferredURL;
    NSMutableSet *_attemptedURLs;
    NSMutableArray *_frozenTasks;
    NSDate *_unfreezeDate;
    NSMutableArray *_pendingOAuthTasks;
    NSDate *_tokenRefreshDate;
    BOOL _logsActivity;
    BOOL _isRefreshingOAuthToken;
    EWSServerVersionInfo *_serverInfo;
    NSURL *_URL;
    NSURLSession *_session;
    ACAccount *_account;
    id <EWSExchangeServiceBindingDelegate> _delegate;
}

+ (BOOL)shouldAutodiscoverUponResponseCode:(long long)arg1;
+ (id)protectionSpaceForURL:(id)arg1;
+ (id)testMessage;
+ (id)log;
+ (void)initialize;
@property(readonly, nonatomic) __weak id <EWSExchangeServiceBindingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly) BOOL isRefreshingOAuthToken; // @synthesize isRefreshingOAuthToken=_isRefreshingOAuthToken;
@property BOOL logsActivity; // @synthesize logsActivity=_logsActivity;
@property(retain) EWSServerVersionInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void).cxx_destruct;
- (void)_clearRequestIfNeeded:(id)arg1;
- (id)_exchangeServiceErrorFromSOAPError:(id)arg1 dataTask:(id)arg2;
- (void)_continuePendingOAuthTasks;
- (void)_cancelBindingTask:(id)arg1;
- (void)_tryUnfreeze;
- (void)_backOffForTime:(double)arg1;
- (id)_dataTaskForBindingTask:(id)arg1;
- (void)_continueSendingRequestForBindingTask:(id)arg1;
- (void)_sendRequestForBindingTask:(id)arg1;
- (BOOL)_shouldFallbackFromError:(id)arg1;
- (id)_errorFromTask:(id)arg1;
- (void)_renewOAuthTokenWithTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (id)newStreamingSubscription;
- (id)newPullSubscription;
- (id)newTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)newTaskWithRequest:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)sendSynchronousMessage:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL isValid;
- (void)invalidateAndCancel;
- (void)finishMessagesAndInvalidate;
- (id)cachedAccountStore;
- (void)_exchangeServiceBindingCommonInitWithAccount:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithURL:(id)arg1 account:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

