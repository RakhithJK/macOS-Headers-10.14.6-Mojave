//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>
#import <Silex/WKNavigationDelegate-Protocol.h>
#import <Silex/WKNavigationDelegatePrivate-Protocol.h>
#import <Silex/WKUIDelegate-Protocol.h>

@class NSString, SXWebCrashRetryThrottler, WKWebView;
@protocol SXComponentActionHandler;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener>
{
    BOOL _webViewIsLoaded;
    BOOL _isPresentingFullscreen;
    id <SXComponentActionHandler> _actionHandler;
    WKWebView *_webView;
    SXWebCrashRetryThrottler *_webCrashRetryThrottler;
}

+ (id)sharedConfiguration;
@property(nonatomic) BOOL isPresentingFullscreen; // @synthesize isPresentingFullscreen=_isPresentingFullscreen;
@property(nonatomic) BOOL webViewIsLoaded; // @synthesize webViewIsLoaded=_webViewIsLoaded;
@property(retain, nonatomic) SXWebCrashRetryThrottler *webCrashRetryThrottler; // @synthesize webCrashRetryThrottler=_webCrashRetryThrottler;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) id <SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (BOOL)shouldAllowRequestToURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)handleError:(id)arg1;
- (struct CGRect)visibleFrame;
- (struct CGRect)transitionContentFrame;
- (void)updateWebViewToWidth:(double)arg1;
- (void)initializeWebViewWithURL:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_74be42e1)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 actionHandler:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

