//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

#import "HVURLLoadDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class HVURLHandler, HVWebDelegate, NSArray, NSButton, NSSecureTextField, NSString, NSTextField, NSThread, NSURLAuthenticationChallenge, NSURLResponse, NSURLSessionDataTask, NSWindow;

@interface HVHelpContentURLProtocol : NSURLProtocol <NSURLSessionDataDelegate, HVURLLoadDelegate>
{
    HVURLHandler *_handler;
    NSURLResponse *_response;
    NSArray *_bfList;
    NSArray *_topLevelObjects;
    NSTextField *o_messageText;
    NSWindow *o_authWindow;
    NSTextField *o_usernameField;
    NSSecureTextField *o_passwordField;
    NSButton *o_rememberPassword;
    NSURLAuthenticationChallenge *_challenge;
    NSThread *_clientThread;
    NSArray *_modes;
    CDUnknownBlockType _challengeCompletionHandler;
    NSURLSessionDataTask *_task;
    HVWebDelegate *_webDelegate;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (void)registerProtocol;
+ (id)bfListKey;
+ (id)webDelegateKey;
+ (id)userInfoKey;
+ (id)scheme;
+ (void)initialize;
@property(retain) HVWebDelegate *webDelegate; // @synthesize webDelegate=_webDelegate;
@property(retain) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(copy) CDUnknownBlockType challengeCompletionHandler; // @synthesize challengeCompletionHandler=_challengeCompletionHandler;
@property(copy) NSArray *modes; // @synthesize modes=_modes;
@property __weak NSThread *clientThread; // @synthesize clientThread=_clientThread;
@property(retain) NSURLAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;
- (void).cxx_destruct;
- (void)onThreadPerformBlock:(CDUnknownBlockType)arg1;
- (void)performOnThread:(id)arg1 modes:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)cancelAuthenticationPressed:(id)arg1;
- (void)authenticatePressed:(id)arg1;
- (void)dismissAuthenticationSheet;
- (void)_showAuthenticationSheet;
- (void)_populateRequest:(id)arg1 withHeaderFieldsFromHandler:(id)arg2;
- (id)fileCreationDateForFileURL:(id)arg1;
- (BOOL)backForwardListContainsURL:(id)arg1;
- (void)startWebAppSearchForAnchor:(id)arg1;
- (id)previousSearchResultsForString:(id)arg1;
- (void)setCurrentSearchQuery:(id)arg1;
- (void)removeURLFromCurrentURLs:(id)arg1;
- (void)setLocalURLForFailedRemoteURL:(id)arg1;
- (void)setCurrentScope:(id)arg1;
- (id)currentScope;
- (void)handlerEncounteredError:(id)arg1;
- (void)handlerHasEndedSearch;
- (void)handlerHasBegunSearch;
- (void)stopSpinner;
- (void)startSpinner;
- (void)handlerDidFinishProcess:(id)arg1;
- (void)handleURLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleURLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleURLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleURLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelPendingChallenge;
- (void)stopLoading;
- (void)startLoading;
- (void)prepareLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

