//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/NSTextFieldDelegate-Protocol.h>

@class NSButton, NSLayoutConstraint, NSSecureTextField, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface BrowserDataImportPasswordRequestPanelController : NSWindowController <NSTextFieldDelegate>
{
    BOOL _showsWrongPasswordWarning;
    long long _importSource;
    long long _requestReason;
    NSTextField *_titleLabel;
    NSTextField *_explanationLabel;
    NSTextField *_wrongPasswordWarningLabel;
    NSSecureTextField *_passwordField;
    NSButton *_importPasswordsButton;
    NSLayoutConstraint *_warningLabelAndSecureTextFieldSpacingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *warningLabelAndSecureTextFieldSpacingConstraint; // @synthesize warningLabelAndSecureTextFieldSpacingConstraint=_warningLabelAndSecureTextFieldSpacingConstraint;
@property(nonatomic) __weak NSButton *importPasswordsButton; // @synthesize importPasswordsButton=_importPasswordsButton;
@property(nonatomic) __weak NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) __weak NSTextField *wrongPasswordWarningLabel; // @synthesize wrongPasswordWarningLabel=_wrongPasswordWarningLabel;
@property(nonatomic) __weak NSTextField *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL showsWrongPasswordWarning; // @synthesize showsWrongPasswordWarning=_showsWrongPasswordWarning;
@property(readonly, nonatomic) long long requestReason; // @synthesize requestReason=_requestReason;
@property(readonly, nonatomic) long long importSource; // @synthesize importSource=_importSource;
- (void).cxx_destruct;
- (void)_updateWrongPasswordWarning;
- (void)_updateLabels;
- (void)_updateTitle;
- (void)importClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)close:(id)arg1;
- (void)runModalPasswordRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithImportSource:(long long)arg1;
- (id)initWithImportSource:(long long)arg1 reason:(long long)arg2;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

