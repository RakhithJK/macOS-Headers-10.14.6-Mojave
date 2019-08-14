//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <BusinessChat/BCWebViewControllerDelegate-Protocol.h>

@class BCAuthenticationManager, BCMessage, BCSecureLabel, BCWebViewController, NSButton, NSView;
@protocol BCAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface BCAuthenticationViewController : NSViewController <BCWebViewControllerDelegate>
{
    id <BCAuthenticationViewControllerDelegate> _delegate;
    BCMessage *_message;
    BCAuthenticationManager *_authenticationManager;
    BCWebViewController *_webkitController;
    NSButton *_cancelButton;
    NSView *_rightSpacer;
    BCSecureLabel *_label;
}

@property(retain, nonatomic) BCSecureLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSView *rightSpacer; // @synthesize rightSpacer=_rightSpacer;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) BCWebViewController *webkitController; // @synthesize webkitController=_webkitController;
@property(retain, nonatomic) BCAuthenticationManager *authenticationManager; // @synthesize authenticationManager=_authenticationManager;
@property(retain, nonatomic) BCMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak id <BCAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeSecureStatus:(BOOL)arg1;
- (void)didReceiveCallbackURL:(id)arg1;
- (void)sendAuthenticationResponse:(id)arg1;
- (void)dismiss;
- (void)finishAuthenticationSession;
- (void)authenticationSessionWillFinish:(id)arg1 error:(id)arg2;
- (void)startAuthenticationSession;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAuthenticationManager:(id)arg1 message:(id)arg2;

@end

