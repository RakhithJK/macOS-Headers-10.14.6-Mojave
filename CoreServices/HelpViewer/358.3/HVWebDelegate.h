//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HPDQueryDelegate-Protocol.h"
#import "WebFrameLoadDelegate-Protocol.h"
#import "WebPolicyDelegate-Protocol.h"
#import "WebResourceLoadDelegate-Protocol.h"

@class HPDQuery, HVURLHandler, NSMutableArray, NSMutableDictionary, NSString, NSURL, WebHistoryItem, WebScriptObject;
@protocol HVContentController><HVURLHandler;

@interface HVWebDelegate : NSObject <HPDQueryDelegate, WebFrameLoadDelegate, WebResourceLoadDelegate, WebPolicyDelegate>
{
    id <HVContentController><HVURLHandler> helpViewController;
    HVURLHandler *_currentHandler;
    HPDQuery *_currentQuery;
    NSMutableArray *_currentURLs;
    NSMutableDictionary *_urlCache;
    NSMutableDictionary *_iconURLCache;
    NSMutableDictionary *_previousSearchResults;
    NSURL *_localURLForFailedRemoteURL;
    WebScriptObject *_tocButtonCheckCallback;
    WebScriptObject *_tocButtonUncheckCallback;
    NSString *_bookNameOverride;
    NSString *_bookAnchorOverride;
    WebHistoryItem *_redirectedItem;
    NSString *mtTopicIDPrevious;
    BOOL _loadLocal;
    BOOL _loadingFromHistory;
    BOOL _reachabilityReady;
    struct __SCNetworkReachability *_reachabilityTarget;
    long long _mtOfflineMessageCount;
    long long _mtPagePrintedCount;
    long long _mtTocUsedCount;
    long long _mtSearchUsedCount;
    BOOL _helpScriptScheme;
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
@property(getter=isHelpScriptScheme) BOOL helpScriptScheme; // @synthesize helpScriptScheme=_helpScriptScheme;
@property long long mtSearchUsedCount; // @synthesize mtSearchUsedCount=_mtSearchUsedCount;
@property long long mtTocUsedCount; // @synthesize mtTocUsedCount=_mtTocUsedCount;
@property long long mtPagePrintedCount; // @synthesize mtPagePrintedCount=_mtPagePrintedCount;
@property long long mtOfflineMessageCount; // @synthesize mtOfflineMessageCount=_mtOfflineMessageCount;
@property(retain) WebScriptObject *tocButtonUncheckCallback; // @synthesize tocButtonUncheckCallback=_tocButtonUncheckCallback;
@property(retain) WebScriptObject *tocButtonCheckCallback; // @synthesize tocButtonCheckCallback=_tocButtonCheckCallback;
@property(retain) NSURL *localURLForFailedRemoteURL; // @synthesize localURLForFailedRemoteURL=_localURLForFailedRemoteURL;
@property(retain) WebHistoryItem *redirectedItem; // @synthesize redirectedItem=_redirectedItem;
@property(retain) NSString *bookAnchorOverride; // @synthesize bookAnchorOverride=_bookAnchorOverride;
@property(retain) NSString *bookNameOverride; // @synthesize bookNameOverride=_bookNameOverride;
@property(readonly) NSMutableDictionary *previousSearchResults; // @synthesize previousSearchResults=_previousSearchResults;
@property(retain) HPDQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(retain) HVURLHandler *currentHandler; // @synthesize currentHandler=_currentHandler;
- (void).cxx_destruct;
- (void)mtSendCounts;
- (BOOL)_isLoggableID:(id)arg1 withTitle:(id)arg2;
- (void)mtSendContentUsageWithJSON:(id)arg1;
- (void)mtSendContentUsageForTopic:(id)arg1 appName:(id)arg2;
- (void)mtIncrementCountsOffline:(long long)arg1 printed:(long long)arg2 tocUsed:(long long)arg3 searchUsed:(long long)arg4;
- (void)clearCachedSearchResults;
- (id)osVersion;
- (id)defaultSearchEngine;
- (void)helpQueryDidFinishSearching:(id)arg1;
- (void)helpQuery:(id)arg1 didEncounterError:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnSuggestions:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnResults:(id)arg2;
- (void)resizeTo:(float)arg1 height:(float)arg2 duration:(double)arg3 timingFunction:(id)arg4;
- (void)collapseContentSidebar;
- (void)expandContentSidebar;
- (void)updateContentSidebar;
- (BOOL)sidebarExpanded;
- (void)setSidebarExpanded:(BOOL)arg1;
- (void)setSidebarButtonEnabled:(BOOL)arg1 onExpand:(id)arg2 onCollapse:(id)arg3;
- (void)setTOCButton:(id)arg1;
- (void)showTOCButton:(BOOL)arg1 onCheck:(id)arg2 onUncheck:(id)arg3;
- (BOOL)isWebAppTOCEnabled;
- (BOOL)_isWebAppTOCExpanded;
- (id)localeList;
- (BOOL)shouldIncludeKBInSearch;
- (id)preferredLanguages;
- (BOOL)isOnline;
- (id)URLStringForBookID:(id)arg1;
- (id)URLForBookID:(id)arg1;
- (void)setBreadcrumbBookTitle:(id)arg1 withAnchor:(id)arg2;
- (long long)userType;
- (void)cancelCurrentQuery;
- (void)getSearchSuggestionsForString:(id)arg1;
- (void)startSearchForAnchor:(id)arg1;
- (void)startSearchWithQuery:(id)arg1;
- (void)mailCurrentPage;
- (BOOL)currentPageIsAccessPage;
- (void)printCurrentPage;
- (id)bookWithID:(id)arg1;
- (id)availableBooks;
- (id)systemProfileInfoForDataTypes:(id)arg1 useJSON:(BOOL)arg2;
- (void)webapp_queryDidFinishSearching:(id)arg1;
- (void)webapp_query:(id)arg1 didEncounterError:(id)arg2;
- (void)webapp_query:(id)arg1 didReturnResults:(id)arg2;
- (void)webapp_setFragment:(id)arg1;
- (void)webapp_doSearchForAnchor:(id)arg1;
- (void)webapp_showNoPageFound;
- (void)webapp_doSearch:(id)arg1;
- (void)openBookToLandingPage:(id)arg1;
- (void)updateTextSizeTopBarItemsForWebView:(id)arg1;
- (void)showPageLoadError:(id)arg1;
- (BOOL)isErrorLoadingPageLoadError:(id)arg1;
- (id)fileCreationDateForFileURL:(id)arg1;
- (BOOL)backForwardListContainsURL:(id)arg1;
- (void)setCurrentSearchQuery:(id)arg1;
- (void)removeURLFromCurrentURLs:(id)arg1;
- (void)setCurrentScope:(id)arg1;
- (id)currentBookTitle;
- (id)currentScope;
- (void)handlerEncounteredError:(id)arg1;
- (void)stopSpinner;
- (void)startSpinner;
- (BOOL)contentWantsToHandleURL:(id)arg1;
- (void)callJSMethod:(id)arg1 withArguments:(id)arg2;
- (void)_callJSMethodOnMainThread:(id)arg1;
- (id)_bookFromSearchQuery:(id)arg1;
- (BOOL)_resultsIncludeKBResults:(id)arg1;
- (id)_hrefTextFromActionInfo:(id)arg1;
- (id)_bfListArrayWithWebView:(id)arg1;
- (void)showErrorSheetWithMessageText:(id)arg1 informativeText:(id)arg2;
- (void)loadLocalURLDirectly:(id)arg1;
- (void)_loadLocalURLInWebView:(id)arg1 forFailedURL:(id)arg2 withInitialURL:(id)arg3 error:(id)arg4;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (BOOL)isLocalBookErrorURL:(id)arg1;
- (id)mainWindow;
- (void)dealloc;
- (id)initWithHelpViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

