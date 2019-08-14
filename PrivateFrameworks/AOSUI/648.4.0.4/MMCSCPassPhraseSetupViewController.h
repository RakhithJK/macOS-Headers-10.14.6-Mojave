//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AOSUI/NSTouchBarProvider-Protocol.h>

@class NSButton, NSImageView, NSSecureTextField, NSString, NSTextField, NSTouchBar, iCloudTouchBarController;
@protocol MMCSCPassPhraseSetupViewControllerDelegate;

@interface MMCSCPassPhraseSetupViewController : NSViewController <NSTouchBarProvider>
{
    id <MMCSCPassPhraseSetupViewControllerDelegate> _delegate;
    NSImageView *_passPhraseImageView;
    NSTextField *_passPhraseTitle;
    NSTextField *_passPhraseMessage;
    NSSecureTextField *_passPhraseSecurityCodeTextField;
    NSTextField *_passPhraseRandomCodeTextField;
    NSTextField *_passPhraseRandomCodeLabel;
    NSTextField *_passPhraseEntryLabel;
    NSButton *_passPhraseHelpButton;
    NSButton *_passPhraseCancelButton;
    NSButton *_passPhraseAlternateButton;
    NSButton *_passPhraseConfirmButton;
    NSString *_initialPassPhrase;
    NSString *_confirmedPassPhrase;
    long long _currentState;
    BOOL _showChangeView;
    BOOL _showRandomView;
    iCloudTouchBarController *_touchBarController;
}

@property(retain) iCloudTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(copy) NSString *confirmedPassPhrase; // @synthesize confirmedPassPhrase=_confirmedPassPhrase;
@property(copy) NSString *initialPassPhrase; // @synthesize initialPassPhrase=_initialPassPhrase;
@property NSButton *passPhraseConfirmButton; // @synthesize passPhraseConfirmButton=_passPhraseConfirmButton;
@property NSButton *passPhraseAlternateButton; // @synthesize passPhraseAlternateButton=_passPhraseAlternateButton;
@property NSButton *passPhraseCancelButton; // @synthesize passPhraseCancelButton=_passPhraseCancelButton;
@property NSButton *passPhraseHelpButton; // @synthesize passPhraseHelpButton=_passPhraseHelpButton;
@property NSTextField *passPhraseEntryLabel; // @synthesize passPhraseEntryLabel=_passPhraseEntryLabel;
@property NSTextField *passPhraseRandomCodeLabel; // @synthesize passPhraseRandomCodeLabel=_passPhraseRandomCodeLabel;
@property NSTextField *passPhraseRandomCodeTextField; // @synthesize passPhraseRandomCodeTextField=_passPhraseRandomCodeTextField;
@property NSSecureTextField *passPhraseSecurityCodeTextField; // @synthesize passPhraseSecurityCodeTextField=_passPhraseSecurityCodeTextField;
@property NSTextField *passPhraseMessage; // @synthesize passPhraseMessage=_passPhraseMessage;
@property NSTextField *passPhraseTitle; // @synthesize passPhraseTitle=_passPhraseTitle;
@property NSImageView *passPhraseImageView; // @synthesize passPhraseImageView=_passPhraseImageView;
@property BOOL showRandomView; // @synthesize showRandomView=_showRandomView;
@property BOOL showChangeView; // @synthesize showChangeView=_showChangeView;
@property id <MMCSCPassPhraseSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controlTextDidChange:(id)arg1;
- (void)_showNormalMessage:(id)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)_showSecurityEntryErrorLabel;
- (void)_showSecurityCodeConfirmLabel;
- (void)_showSecurityCodeEntryLabel;
- (id)_securityCodeFromSecureEntryView;
- (void)_clearSecurityCodeEntry;
- (id)_randomPasscode;
- (BOOL)_isPasswordWeak:(id)arg1 isSimple:(BOOL)arg2;
- (void)cancelButtonClicked:(id)arg1;
- (void)alternateButtonClicked:(id)arg1;
- (void)defaultButtonClicked:(id)arg1;
- (BOOL)_isSimplePassphrase;
@property(readonly) BOOL isSecurePassphrase; // @dynamic isSecurePassphrase;
@property(readonly) NSString *passPhrase;
@property(readonly) NSTouchBar *touchBar;
- (void)dealloc;
- (void)setup:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

