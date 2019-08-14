//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TransparencyDetailsView/WKNavigationDelegate-Protocol.h>

@class NSDictionary, NSString, UIActivityIndicatorView, UILabel, UINavigationBar, WKWebView;
@protocol ADTransparencyViewControllerDelegate;

@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate>
{
    UIActivityIndicatorView *activityIndicator;
    id <ADTransparencyViewControllerDelegate> _delegate;
    BOOL _isiPad;
    NSString *_transparencyDetailsUnavailableMessage;
    NSString *_transparencyRendererPayload;
    NSString *_transparencyRendererURL;
    NSString *_transparencyDetails;
    NSDictionary *_transparencyDetailsData;
    UILabel *_errorLabel;
    double _statusBarOffset;
    WKWebView *_myWebView;
    UINavigationBar *_transparencyNavBar;
}

@property(nonatomic) BOOL isiPad; // @synthesize isiPad=_isiPad;
@property(retain, nonatomic) UINavigationBar *transparencyNavBar; // @synthesize transparencyNavBar=_transparencyNavBar;
@property(retain, nonatomic) WKWebView *myWebView; // @synthesize myWebView=_myWebView;
@property(nonatomic) double statusBarOffset; // @synthesize statusBarOffset=_statusBarOffset;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) NSDictionary *transparencyDetailsData; // @synthesize transparencyDetailsData=_transparencyDetailsData;
@property(copy, nonatomic) NSString *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property(readonly, nonatomic) NSString *transparencyRendererURL; // @synthesize transparencyRendererURL=_transparencyRendererURL;
@property(readonly, nonatomic) NSString *transparencyRendererPayload; // @synthesize transparencyRendererPayload=_transparencyRendererPayload;
@property(readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage; // @synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage;
@property(retain, nonatomic) id <ADTransparencyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reportTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_hideErrorMessage;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)_showErrorMessage:(id)arg1;
- (void)_closeViewController:(id)arg1;
- (void)errorDelegate;
- (void)presentViewDelegate;
- (void)loadWebView;
- (void)_commonInit;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)bundleForTransparencyDetailsView;
- (void)requestViewWithTransparencyDetailsDictionary:(id)arg1;
- (void)requestViewWithTransparencyDetails:(id)arg1;
- (id)initWithTransparencyDetails:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

