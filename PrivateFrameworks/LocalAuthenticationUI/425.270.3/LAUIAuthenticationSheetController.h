//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <LocalAuthenticationUI/LAUIAuthenticationSheetWindowDelegate-Protocol.h>
#import <LocalAuthenticationUI/LAUIDelegate-Protocol.h>
#import <LocalAuthenticationUI/LAUIUserPasswordFieldRemoteProtocol-Protocol.h>

@class LAContext, LAUIAuthenticationSheetWindow, LAUIUserPasswordViewController, NSButton, NSColor, NSError, NSImageView, NSMutableArray, NSString, NSTextField, NSView, NSWindow;
@protocol LAUIAuthenticationSheetDelegate;

@interface LAUIAuthenticationSheetController : NSViewController <LAUIUserPasswordFieldRemoteProtocol, LAUIDelegate, LAUIAuthenticationSheetWindowDelegate>
{
    NSWindow *_window;
    LAUIAuthenticationSheetWindow *_sheet;
    CDUnknownBlockType _completion;
    LAUIUserPasswordViewController *_passwordVC;
    NSError *_touchIdError;
    BOOL _touchIdHasFocus;
    BOOL _touchIdActive;
    NSMutableArray *_activeElements;
    int _noMatchCount;
    BOOL _passwordViewVisible;
    BOOL _isKeyWindow;
    BOOL _canAuthenticateAsAnyAdmin;
    BOOL _enableUserNameField;
    BOOL _fallbackToAppPassword;
    BOOL _touchIDAvailable;
    BOOL _touchIDInhibited;
    BOOL _passwordExtractable;
    BOOL _pinAuthentication;
    BOOL _skipUserPasswordVerification;
    NSString *_authTitle;
    NSString *_authSubTitle;
    NSString *_authSubTitleNoTouchID;
    NSColor *_authTitleColor;
    NSColor *_authSubTitleColor;
    NSString *_unlockButtonTitle;
    NSString *_usePasswordButtonTitle;
    NSString *_passwordTitle;
    NSString *_userName;
    id <LAUIAuthenticationSheetDelegate> _delegate;
    NSString *_authDFRPrompt;
    LAContext *_authContext;
    NSImageView *_appIcon;
    NSImageView *_authIcon;
    NSTextField *_authTitleLabel;
    NSTextField *_authSubTitleLabel;
    NSView *_footerContainerView;
    NSView *_usePasswordOrCancelFooter;
    NSView *_usernameAndPasswordFooter;
    NSTextField *_usernameField;
    NSTextField *_usernameLabel;
    NSView *_passwordFieldContainer;
    NSTextField *_passwordLabel;
    NSButton *_cancelButton;
    NSButton *_unlockButton;
    NSButton *_usePasswordButton;
}

@property(nonatomic) __weak NSButton *usePasswordButton; // @synthesize usePasswordButton=_usePasswordButton;
@property(nonatomic) __weak NSButton *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSTextField *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(nonatomic) __weak NSView *passwordFieldContainer; // @synthesize passwordFieldContainer=_passwordFieldContainer;
@property(nonatomic) __weak NSTextField *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(nonatomic) __weak NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(nonatomic) __weak NSView *usernameAndPasswordFooter; // @synthesize usernameAndPasswordFooter=_usernameAndPasswordFooter;
@property(nonatomic) __weak NSView *usePasswordOrCancelFooter; // @synthesize usePasswordOrCancelFooter=_usePasswordOrCancelFooter;
@property(nonatomic) __weak NSView *footerContainerView; // @synthesize footerContainerView=_footerContainerView;
@property(nonatomic) __weak NSTextField *authSubTitleLabel; // @synthesize authSubTitleLabel=_authSubTitleLabel;
@property(nonatomic) __weak NSTextField *authTitleLabel; // @synthesize authTitleLabel=_authTitleLabel;
@property(nonatomic) __weak NSImageView *authIcon; // @synthesize authIcon=_authIcon;
@property(nonatomic) __weak NSImageView *appIcon; // @synthesize appIcon=_appIcon;
@property(nonatomic) BOOL skipUserPasswordVerification; // @synthesize skipUserPasswordVerification=_skipUserPasswordVerification;
@property(nonatomic, getter=isPINAuthentication) BOOL pinAuthentication; // @synthesize pinAuthentication=_pinAuthentication;
@property(nonatomic, getter=isPasswordExtractable) BOOL passwordExtractable; // @synthesize passwordExtractable=_passwordExtractable;
@property(retain, nonatomic) LAContext *authContext; // @synthesize authContext=_authContext;
@property(nonatomic, getter=isTouchIDInhibited) BOOL touchIDInhibited; // @synthesize touchIDInhibited=_touchIDInhibited;
@property(readonly, nonatomic, getter=isTouchIDAvailable) BOOL touchIDAvailable; // @synthesize touchIDAvailable=_touchIDAvailable;
@property(nonatomic) BOOL fallbackToAppPassword; // @synthesize fallbackToAppPassword=_fallbackToAppPassword;
@property(retain, nonatomic) NSString *authDFRPrompt; // @synthesize authDFRPrompt=_authDFRPrompt;
@property(nonatomic, getter=isUserNameFieldEnabled) BOOL enableUserNameField; // @synthesize enableUserNameField=_enableUserNameField;
@property(nonatomic) BOOL canAuthenticateAsAnyAdmin; // @synthesize canAuthenticateAsAnyAdmin=_canAuthenticateAsAnyAdmin;
@property(nonatomic) __weak id <LAUIAuthenticationSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enabledObjects:(id)arg1 forView:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)didSubmitUnverifiedData:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didVerifyPassword;
- (void)didSubmitWrongPassword:(BOOL)arg1;
- (void)externalizedContextInReply:(CDUnknownBlockType)arg1;
- (void)requestCancelAuthentication;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_stopTouchID;
- (void)_startTouchID;
- (long long)_touchIDPolicy;
- (void)_startStopTouchID:(BOOL)arg1;
- (BOOL)_isTouchIDAvailable:(id *)arg1;
- (void)sessionDidResignActive:(id)arg1;
- (void)sessionDidBecomeActive:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
@property(retain, nonatomic) NSString *usePasswordButtonTitle; // @synthesize usePasswordButtonTitle=_usePasswordButtonTitle;
@property(retain, nonatomic) NSString *unlockButtonTitle; // @synthesize unlockButtonTitle=_unlockButtonTitle;
@property(retain, nonatomic) NSColor *authSubTitleColor; // @synthesize authSubTitleColor=_authSubTitleColor;
@property(retain, nonatomic) NSColor *authTitleColor; // @synthesize authTitleColor=_authTitleColor;
@property(retain, nonatomic) NSString *authSubTitleNoTouchID; // @synthesize authSubTitleNoTouchID=_authSubTitleNoTouchID;
@property(retain, nonatomic) NSString *authSubTitle; // @synthesize authSubTitle=_authSubTitle;
@property(retain, nonatomic) NSString *authTitle; // @synthesize authTitle=_authTitle;
@property(retain, nonatomic) NSString *passwordTitle; // @synthesize passwordTitle=_passwordTitle;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)_finishUiWithError:(id)arg1;
- (id)nibBundle;
- (void)unlockButtonAction:(id)arg1;
- (void)didEditUsername:(id)arg1;
- (void)usePasswordButtonAction:(id)arg1;
- (void)cancelButtonAction:(id)arg1;
- (void)enterPressed;
- (id)_sheetPasswordTitle;
- (id)_sheetUsePasswordButtonTitle;
- (id)_sheetSubtitle;
- (id)_currentUserName:(BOOL)arg1;
- (void)_createTouchBar;
- (void)switchToPasswordViewAnimated:(BOOL)arg1 touchIDAvailable:(BOOL)arg2;
- (void)endSheet;
- (void)beginSheetForWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

