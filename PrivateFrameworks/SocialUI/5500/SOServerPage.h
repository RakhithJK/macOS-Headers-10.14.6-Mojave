//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SocialUI/WebPolicyDelegate-Protocol.h>
#import <SocialUI/WebResourceLoadDelegate-Protocol.h>
#import <SocialUI/WebUIDelegate-Protocol.h>

@class NSAlert, NSString, WebView;
@protocol SOServerPageDelegate;

@interface SOServerPage : NSObject <WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate>
{
    id <SOServerPageDelegate> _delegate;
    WebView *_view;
    NSString *_name;
    NSString *_leftButtonCallback;
    NSString *_rightButtonCallback;
    NSString *_resizeFinishedCallback;
    NSString *_authenticationID;
    NSString *_authenticationToken;
    NSString *_resultPlayerID;
    NSString *_resultAppleID;
    NSString *_resultProfileID;
    NSString *_resultToken;
    NSString *_resultPassword;
    NSAlert *_alert;
    NSString *_alertOkAction;
    NSString *_alertCancelAction;
    long long _resultStatus;
    unsigned int _loadingBag:1;
}

- (void).cxx_destruct;
- (id)resultProfileID;
- (id)resultToken;
- (id)resultPassword;
- (id)resultAppleID;
- (id)resultPlayerID;
- (long long)resultStatus;
- (id)authenticationToken;
- (id)authenticationID;
- (void)setAuthenticationID:(id)arg1 authenticationToken:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)view;
- (void)resizeFinished;
- (void)rightButtonClicked:(id)arg1;
- (void)leftButtonClicked:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)cancel;
- (void)load;
- (void)_handleServerBagFinishedLoading:(id)arg1;
- (void)_cancelLoadingBag;
- (BOOL)_handleURL:(id)arg1;
- (void)_handleResizeCommand:(id)arg1;
- (void)_handleHandoffCommand:(id)arg1;
- (void)_handlePromptCommand:(id)arg1;
- (void)_handleConfirmCommand:(id)arg1;
- (void)_handleAlertCommand:(id)arg1;
- (void)alertFinishedWithResult:(long long)arg1;
- (void)_dispatchAlert:(id)arg1 okAction:(id)arg2 cancelAction:(id)arg3;
- (void)_handleNavBarCommand:(id)arg1;
- (BOOL)_boolForParameter:(id)arg1;
- (id)_fakeSchemeForURL:(id)arg1;
- (id)_parametersForURL:(id)arg1;
- (void)scrollerStyleChanged:(id)arg1;
- (void)_adjustFrameViewWidth;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_performCallback:(id)arg1 withArgument:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

