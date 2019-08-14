//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/MMWebKitControllerDelegate-Protocol.h>

@class MMJSDialogController, MMWebKitController, NSDictionary, NSString, NSView, WebView;
@protocol MBUIDelegate, MBWebKitViewControllerDelegate;

@interface MMMBWebKitViewController : NSObject <MMWebKitControllerDelegate>
{
    id <MBUIDelegate> _mbUIDelegate;
    id <MBWebKitViewControllerDelegate> _mbWebKitViewControllerDelegate;
    MMWebKitController *_webKitController;
    NSView *_parentView;
    MMJSDialogController *_mmJSDialogController;
    NSString *_accountID;
    NSString *_password;
    NSDictionary *_delegatePlist;
    NSDictionary *_authenticationResults;
    struct OpaqueJSValue *_leftButtonCallback;
    struct OpaqueJSValue *_rightButtonCallback;
    struct OpaqueJSValue *_alternateButtonCallback;
    BOOL _supportsWindowResize;
    struct {
        unsigned int delegateSetWindowTitle:1;
        unsigned int delegateSetWindowMessage:1;
        unsigned int delegateSetLeftButtonTitle:1;
        unsigned int delegateSetLeftButtonEnabled:1;
        unsigned int delegateSetRightButtonTitle:1;
        unsigned int delegateSetRightButtonEnabled:1;
        unsigned int delegateSetAlternateButtonTitle:1;
        unsigned int delegateSetAlternateButtonEnabled:1;
        unsigned int delegateSaveFile:1;
        unsigned int delegateSaveFileWithName:1;
        unsigned int delegateShowTerms:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidDismiss:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int delegateDidFail:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int padding:2;
    } _flags;
}

@property(copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(nonatomic) BOOL supportsWindowResize; // @synthesize supportsWindowResize=_supportsWindowResize;
@property(nonatomic) struct OpaqueJSValue *alternateButtonCallback; // @synthesize alternateButtonCallback=_alternateButtonCallback;
@property(nonatomic) struct OpaqueJSValue *rightButtonCallback; // @synthesize rightButtonCallback=_rightButtonCallback;
@property(nonatomic) struct OpaqueJSValue *leftButtonCallback; // @synthesize leftButtonCallback=_leftButtonCallback;
@property(copy, nonatomic) NSDictionary *delegatePlist; // @synthesize delegatePlist=_delegatePlist;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) MMJSDialogController *mmJSDialogController; // @synthesize mmJSDialogController=_mmJSDialogController;
@property(retain, nonatomic) MMWebKitController *webKitController; // @synthesize webKitController=_webKitController;
@property(nonatomic) id <MBWebKitViewControllerDelegate> mbWebKitViewControllerDelegate; // @synthesize mbWebKitViewControllerDelegate=_mbWebKitViewControllerDelegate;
@property(nonatomic) id <MBUIDelegate> mbUIDelegate; // @synthesize mbUIDelegate=_mbUIDelegate;
- (id)mmWebKitControllerWindow;
- (void)mmWebKitControllerWillSendRequest:(id)arg1 willSendRequest:(id)arg2;
- (void)mmWebKitControllerDidReceiveResponse:(id)arg1 didReceiveResponse:(id)arg2;
- (void)mmWebKitControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitControllerDidSucceed:(id)arg1;
- (void)mmWebKitControllerDidCancel:(id)arg1;
- (void)mmWebKitControllerConfigureForFrame:(id)arg1;
- (void)mmWebView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)_window:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)dealloc;
- (void)alternateNavigationButtonClicked:(id)arg1;
- (void)rightNavigationButtonClicked:(id)arg1;
- (void)leftNavigationButtonClicked:(id)arg1;
@property(readonly, nonatomic) WebView *webView;
- (void)loadURLRequest:(id)arg1;
- (id)initMBWebKitViewControllerInView:(id)arg1 mbUIDelegate:(id)arg2 authenticationResults:(id)arg3;
- (id)initMBWebKitViewControllerInView:(id)arg1 mbUIDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

