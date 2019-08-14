//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACDBaseViewController.h>

#import <ACDEClient/ACUIPasscodeControlDelegate-Protocol.h>

@class ACUIPasscodeControl, NSButton, NSImageView, NSTextField;
@protocol ACD2SVCodeVerificationViewControllerDelegate;

@interface ACDVerifyCodeViewController : ACDBaseViewController <ACUIPasscodeControlDelegate>
{
    id <ACD2SVCodeVerificationViewControllerDelegate> _delegate;
    unsigned long long _passcodeLength;
    NSTextField *_titleField;
    ACUIPasscodeControl *_passcodeControl;
    NSButton *_sendAnotherCodeButton;
    CDUnknownBlockType _completionBlock;
    NSButton *_continueButton;
    NSButton *_goBackButton;
    NSImageView *_logoImageView;
    CDUnknownBlockType _failoverBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failoverBlock; // @synthesize failoverBlock=_failoverBlock;
@property(nonatomic) NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) NSButton *goBackButton; // @synthesize goBackButton=_goBackButton;
@property(nonatomic) NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) NSButton *sendAnotherCodeButton; // @synthesize sendAnotherCodeButton=_sendAnotherCodeButton;
@property(nonatomic) ACUIPasscodeControl *passcodeControl; // @synthesize passcodeControl=_passcodeControl;
@property(nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) unsigned long long passcodeLength; // @synthesize passcodeLength=_passcodeLength;
@property(nonatomic) id <ACD2SVCodeVerificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateReadinessState;
- (void)pascodeControlDidChangeValue:(id)arg1;
- (void)userDidEnterCode:(id)arg1;
- (void)handleFailoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)setMessage:(id)arg1 type:(unsigned long long)arg2;
- (void)hideAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentWithParentWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)focus;
- (void)disableControls:(BOOL)arg1;
- (void)reset;
- (void)verifyCode:(id)arg1;
- (void)sendAnotherCode:(id)arg1;
- (void)goBack:(id)arg1;
- (void)validateCode:(id)arg1;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (double)messageZeroConstrain;
@property(nonatomic) BOOL canResendTheCode;
- (void)dealloc;

@end

